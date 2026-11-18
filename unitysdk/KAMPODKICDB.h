#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BJBECFGNAMH.h"

namespace MoleMole { class UINewbiePopWindowController; }

#define KAMPODKICDB_GFFPMEMNPDJ_OFFSET UNITYSDK_OFFSET(0x152BA450)
#define KAMPODKICDB_JINCFIGEAKM_OFFSET UNITYSDK_OFFSET(0x152BA340)
#define KAMPODKICDB__CTOR_OFFSET UNITYSDK_OFFSET(0x152BA440)

inline static constexpr unsigned int KAMPODKICDB_TypeDefinitionIndex = 46728;

class KAMPODKICDB : public ::BJBECFGNAMH
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAMPODKICDB__CTOR_OFFSET))(this);
	}

	::System::Void JINCFIGEAKM(::MoleMole::UINewbiePopWindowController* AMNIHACKELI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UINewbiePopWindowController*))((::PBYTE)hIl2Cpp + KAMPODKICDB_JINCFIGEAKM_OFFSET))(this, AMNIHACKELI);
	}

	::System::Void GFFPMEMNPDJ(::MoleMole::UINewbiePopWindowController* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UINewbiePopWindowController*))((::PBYTE)hIl2Cpp + KAMPODKICDB_GFFPMEMNPDJ_OFFSET))(this, MIALFKCCCPI);
	}
};
