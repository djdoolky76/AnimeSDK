#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BJBECFGNAMH.h"

namespace MoleMole { class UINewbiePopWindowController; }

#define LHIHIPMCLCI_BKJPMPBEHDO_OFFSET UNITYSDK_OFFSET(0x1565F260)
#define LHIHIPMCLCI_GFFPMEMNPDJ_OFFSET UNITYSDK_OFFSET(0x1565F2F0)
#define LHIHIPMCLCI_JINCFIGEAKM_OFFSET UNITYSDK_OFFSET(0x1565F0B0)
#define LHIHIPMCLCI_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x1565F150)
#define LHIHIPMCLCI__CTOR_OFFSET UNITYSDK_OFFSET(0x1565F250)

inline static constexpr unsigned int LHIHIPMCLCI_TypeDefinitionIndex = 53172;

class LHIHIPMCLCI : public ::BJBECFGNAMH
{
public:
	// static const ::System::Single BKIEJCHFJEL; // 0x0
	::System::Single JKAHODLMFCN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHIHIPMCLCI__CTOR_OFFSET))(this);
	}

	::System::Void JINCFIGEAKM(::MoleMole::UINewbiePopWindowController* AMNIHACKELI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UINewbiePopWindowController*))((::PBYTE)hIl2Cpp + LHIHIPMCLCI_JINCFIGEAKM_OFFSET))(this, AMNIHACKELI);
	}

	::System::Void PLPONJAKNEB(::MoleMole::UINewbiePopWindowController* AMNIHACKELI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UINewbiePopWindowController*))((::PBYTE)hIl2Cpp + LHIHIPMCLCI_PLPONJAKNEB_OFFSET))(this, AMNIHACKELI);
	}

	::System::Void BKJPMPBEHDO(::MoleMole::UINewbiePopWindowController* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UINewbiePopWindowController*))((::PBYTE)hIl2Cpp + LHIHIPMCLCI_BKJPMPBEHDO_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GFFPMEMNPDJ(::MoleMole::UINewbiePopWindowController* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UINewbiePopWindowController*))((::PBYTE)hIl2Cpp + LHIHIPMCLCI_GFFPMEMNPDJ_OFFSET))(this, MIALFKCCCPI);
	}
};
