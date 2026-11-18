#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BJBECFGNAMH.h"

namespace MoleMole { class UINewbiePopWindowController; }

#define GHANEIBDDOF_BKJPMPBEHDO_OFFSET UNITYSDK_OFFSET(0x16CC3F10)
#define GHANEIBDDOF_GFFPMEMNPDJ_OFFSET UNITYSDK_OFFSET(0x16CC3FA0)
#define GHANEIBDDOF_JINCFIGEAKM_OFFSET UNITYSDK_OFFSET(0x16CC3C20)
#define GHANEIBDDOF_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x16CC3DC0)
#define GHANEIBDDOF__CTOR_OFFSET UNITYSDK_OFFSET(0x16CC3F00)

inline static constexpr unsigned int GHANEIBDDOF_TypeDefinitionIndex = 81310;

class GHANEIBDDOF : public ::BJBECFGNAMH
{
public:
	::System::Single MBMHGGGOINO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHANEIBDDOF__CTOR_OFFSET))(this);
	}

	::System::Void JINCFIGEAKM(::MoleMole::UINewbiePopWindowController* AMNIHACKELI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UINewbiePopWindowController*))((::PBYTE)hIl2Cpp + GHANEIBDDOF_JINCFIGEAKM_OFFSET))(this, AMNIHACKELI);
	}

	::System::Void PLPONJAKNEB(::MoleMole::UINewbiePopWindowController* AMNIHACKELI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UINewbiePopWindowController*))((::PBYTE)hIl2Cpp + GHANEIBDDOF_PLPONJAKNEB_OFFSET))(this, AMNIHACKELI);
	}

	::System::Void BKJPMPBEHDO(::MoleMole::UINewbiePopWindowController* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UINewbiePopWindowController*))((::PBYTE)hIl2Cpp + GHANEIBDDOF_BKJPMPBEHDO_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GFFPMEMNPDJ(::MoleMole::UINewbiePopWindowController* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UINewbiePopWindowController*))((::PBYTE)hIl2Cpp + GHANEIBDDOF_GFFPMEMNPDJ_OFFSET))(this, MIALFKCCCPI);
	}
};
