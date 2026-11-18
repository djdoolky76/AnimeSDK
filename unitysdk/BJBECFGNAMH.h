#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UINewbiePopWindowController; }

#define BJBECFGNAMH_HBPLINHBFFK_OFFSET UNITYSDK_OFFSET(0x14253F80)
#define BJBECFGNAMH_JINCFIGEAKM_OFFSET UNITYSDK_OFFSET(0x14253EE0)
#define BJBECFGNAMH_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x14253F30)
#define BJBECFGNAMH__CTOR_OFFSET UNITYSDK_OFFSET(0x14253FC0)

inline static constexpr unsigned int BJBECFGNAMH_TypeDefinitionIndex = 87624;

class BJBECFGNAMH : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJBECFGNAMH__CTOR_OFFSET))(this);
	}

	::System::Void JINCFIGEAKM(::MoleMole::UINewbiePopWindowController* AMNIHACKELI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UINewbiePopWindowController*))((::PBYTE)hIl2Cpp + BJBECFGNAMH_JINCFIGEAKM_OFFSET))(this, AMNIHACKELI);
	}

	::System::Void PLPONJAKNEB(::MoleMole::UINewbiePopWindowController* AMNIHACKELI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UINewbiePopWindowController*))((::PBYTE)hIl2Cpp + BJBECFGNAMH_PLPONJAKNEB_OFFSET))(this, AMNIHACKELI);
	}

	::System::Void HBPLINHBFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJBECFGNAMH_HBPLINHBFFK_OFFSET))(this);
	}
};
