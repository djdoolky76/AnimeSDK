#pragma once
#include "unitysdk/unitysdk.h"

class DNGEKLMPBAC;
class LLMEPLBOODC;
namespace MoleMole::Config { class ConfigDelayedActivateAtmosphereAndFilter; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define IPJHKGMIHLG_EEOOAGEDKLM_OFFSET UNITYSDK_OFFSET(0x14203E80)
#define IPJHKGMIHLG_HEGPPHAGDCO_OFFSET UNITYSDK_OFFSET(0x14203C20)
#define IPJHKGMIHLG_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x14203C90)
#define IPJHKGMIHLG__CTOR_OFFSET UNITYSDK_OFFSET(0x14203E20)

inline static constexpr unsigned int IPJHKGMIHLG_TypeDefinitionIndex = 87785;

class IPJHKGMIHLG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPJHKGMIHLG__CTOR_OFFSET))(this);
	}

	::System::Void HEGPPHAGDCO(::MoleMole::Config::ConfigDelayedActivateAtmosphereAndFilter* JECAEDMPEDB, ::LLMEPLBOODC* ENPKNICOJCD, ::MoleMole::Config::UISpecialNumGroup* PNLGHFAFNPO, ::DNGEKLMPBAC* ECKMPOAABAL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigDelayedActivateAtmosphereAndFilter*, ::LLMEPLBOODC*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + IPJHKGMIHLG_HEGPPHAGDCO_OFFSET))(this, JECAEDMPEDB, ENPKNICOJCD, PNLGHFAFNPO, ECKMPOAABAL);
	}

	::System::Void LCJEELHBNHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPJHKGMIHLG_LCJEELHBNHG_OFFSET))(this);
	}

	::System::Void EEOOAGEDKLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPJHKGMIHLG_EEOOAGEDKLM_OFFSET))(this);
	}
};
