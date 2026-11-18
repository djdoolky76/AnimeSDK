#pragma once
#include "unitysdk/unitysdk.h"

class CDEGLALPMJM;
class DNGEKLMPBAC;
class LLMEPLBOODC;
namespace MoleMole::Config { class ConfigPlayFilterPluginSpecialEffect; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define FKLMHLMBBME_EEOOAGEDKLM_OFFSET UNITYSDK_OFFSET(0x1410AE40)
#define FKLMHLMBBME_HEGPPHAGDCO_OFFSET UNITYSDK_OFFSET(0x1410AAB0)
#define FKLMHLMBBME_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x1410AB20)
#define FKLMHLMBBME__CTOR_OFFSET UNITYSDK_OFFSET(0x1410ADE0)

inline static constexpr unsigned int FKLMHLMBBME_TypeDefinitionIndex = 45809;

class FKLMHLMBBME
{
public:
	::MoleMole::Config::ConfigPlayFilterPluginSpecialEffect* CEJENBBHBBG; // 0x40
	::CDEGLALPMJM* IFOJDDAEEBO; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLMHLMBBME__CTOR_OFFSET))(this);
	}

	::System::Void HEGPPHAGDCO(::MoleMole::Config::ConfigPlayFilterPluginSpecialEffect* JECAEDMPEDB, ::LLMEPLBOODC* ENPKNICOJCD, ::MoleMole::Config::UISpecialNumGroup* PNLGHFAFNPO, ::DNGEKLMPBAC* ECKMPOAABAL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigPlayFilterPluginSpecialEffect*, ::LLMEPLBOODC*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + FKLMHLMBBME_HEGPPHAGDCO_OFFSET))(this, JECAEDMPEDB, ENPKNICOJCD, PNLGHFAFNPO, ECKMPOAABAL);
	}

	::System::Void LCJEELHBNHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLMHLMBBME_LCJEELHBNHG_OFFSET))(this);
	}

	::System::Void EEOOAGEDKLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLMHLMBBME_EEOOAGEDKLM_OFFSET))(this);
	}
};
