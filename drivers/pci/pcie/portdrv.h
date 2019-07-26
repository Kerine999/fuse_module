/*
 * File:	portdrv.h
 * Purpose:	PCI Express Port Bus Driver's Internal Data Structures
 *
 * Copyright (C) 2004 Intel
 * Copyright (C) Tom Long Nguyen (tom.l.nguyen@intel.com)
 */

#ifndef _PORTDRV_H_
#define _PORTDRV_H_

#include <linux/compiler.h>

#define PCIE_PORT_DEVICE_MAXSERVICES   5
/*
 * According to the PCI Express Base Specification 2.0, the indices of
 * the MSI-X table entries used by port services must not exceed 31
 */
#define PCIE_PORT_MAX_MSIX_ENTRIES	32

#define get_descriptor_id(type, service) (((type - 4) << 8) | service)

extern struct bus_type pcie_port_bus_type;
int pcie_port_device_register(struct pci_dev *dev);
#ifdef CONFIG_PM
int pcie_port_device_suspend(struct device *dev);
int pcie_port_device_resume(struct device *dev);
#endif
void pcie_port_device_remove(struct pci_dev *dev);
int __must_check pcie_port_bus_register(void);
void pcie_port_bus_unregister(void);

struct pci_dev;

void pcie_clear_root_pme_status(struct pci_dev *dev);

#ifdef CONFIG_HOTPLUG_PCI_PCIE
extern bool pciehp_msi_disabled;

static inline bool pciehp_no_msi(void)
{
	return pciehp_msi_disabled;
}

#else  /* !CONFIG_HOTPLUG_PCI_PCIE */
static inline bool pciehp_no_msi(void) { return false; }
#endif /* !CONFIG_HOTPLUG_PCI_PCIE */

#ifdef CONFIG_PCIE_PME
extern bool pcie_pme_msi_disabled;

static inline void pcie_pme_disable_msi(void)
{
	pcie_pme_msi_disabled = true;
}

static inline bool pcie_pme_no_msi(void)
{
	return pcie_pme_msi_disabled;
}

void pcie_pme_interrupt_enable(struct pci_dev *dev, bool enable);
#else /* !CONFIG_PCIE_PME */
static inline void pcie_pme_disable_msi(void) {}
static inline bool pcie_pme_no_msi(void) { return false; }
static inline void pcie_pme_interrupt_enable(struct pci_dev *dev, bool en) {}
#endif /* !CONFIG_PCIE_PME */

#endif /* _PORTDRV_H_ */