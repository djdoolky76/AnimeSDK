#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BJBECFGNAMH.h"

namespace MoleMole { class UINewbiePopWindowController; }

#define KGKFGKEMHHK_BKJPMPBEHDO_OFFSET UNITYSDK_OFFSET(0x168029E0)
#define KGKFGKEMHHK_GFFPMEMNPDJ_OFFSET UNITYSDK_OFFSET(0x16802A70)
#define KGKFGKEMHHK_JINCFIGEAKM_OFFSET UNITYSDK_OFFSET(0x168026A0)
#define KGKFGKEMHHK_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x16802830)
#define KGKFGKEMHHK__CTOR_OFFSET UNITYSDK_OFFSET(0x168029D0)

inline static constexpr unsigned int KGKFGKEMHHK_TypeDefinitionIndex = 76668;

class KGKFGKEMHHK : public ::BJBECFGNAMH
{
public:
	// static const ::System::Single KOMNPIAGMHE; // 0x0
	::System::Single APBABIJOPJE; // 0x10
	::System::Boolean KHLFIIPGEBH; // 0x14
	::System::Byte _padding0[0x3];
	::System::Single BKLOCJJMHCI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGKFGKEMHHK__CTOR_OFFSET))(this);
	}

	::System::Void JINCFIGEAKM(::MoleMole::UINewbiePopWindowController* AMNIHACKELI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UINewbiePopWindowController*))((::PBYTE)hIl2Cpp + KGKFGKEMHHK_JINCFIGEAKM_OFFSET))(this, AMNIHACKELI);
	}

	::System::Void PLPONJAKNEB(::MoleMole::UINewbiePopWindowController* AMNIHACKELI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UINewbiePopWindowController*))((::PBYTE)hIl2Cpp + KGKFGKEMHHK_PLPONJAKNEB_OFFSET))(this, AMNIHACKELI);
	}

	::System::Void BKJPMPBEHDO(::MoleMole::UINewbiePopWindowController* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UINewbiePopWindowController*))((::PBYTE)hIl2Cpp + KGKFGKEMHHK_BKJPMPBEHDO_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GFFPMEMNPDJ(::MoleMole::UINewbiePopWindowController* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UINewbiePopWindowController*))((::PBYTE)hIl2Cpp + KGKFGKEMHHK_GFFPMEMNPDJ_OFFSET))(this, MIALFKCCCPI);
	}
};
