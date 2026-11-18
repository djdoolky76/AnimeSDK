#pragma once
#include "unitysdk/unitysdk.h"

class DNGEKLMPBAC;
class LLMEPLBOODC;
namespace MoleMole::Config { class ConfigPlayOverloadBarAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define EAMLIHOJNMB_EEOOAGEDKLM_OFFSET UNITYSDK_OFFSET(0x132ADE50)
#define EAMLIHOJNMB_HEGPPHAGDCO_OFFSET UNITYSDK_OFFSET(0x132ADB00)
#define EAMLIHOJNMB_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x132ADB70)
#define EAMLIHOJNMB__CTOR_OFFSET UNITYSDK_OFFSET(0x132ADDF0)

inline static constexpr unsigned int EAMLIHOJNMB_TypeDefinitionIndex = 80903;

class EAMLIHOJNMB
{
public:
	::MoleMole::Config::ConfigPlayOverloadBarAnimationNode* GELPLHLJCDL; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAMLIHOJNMB__CTOR_OFFSET))(this);
	}

	::System::Void HEGPPHAGDCO(::MoleMole::Config::ConfigPlayOverloadBarAnimationNode* JECAEDMPEDB, ::LLMEPLBOODC* ENPKNICOJCD, ::MoleMole::Config::UISpecialNumGroup* PNLGHFAFNPO, ::DNGEKLMPBAC* ECKMPOAABAL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigPlayOverloadBarAnimationNode*, ::LLMEPLBOODC*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + EAMLIHOJNMB_HEGPPHAGDCO_OFFSET))(this, JECAEDMPEDB, ENPKNICOJCD, PNLGHFAFNPO, ECKMPOAABAL);
	}

	::System::Void LCJEELHBNHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAMLIHOJNMB_LCJEELHBNHG_OFFSET))(this);
	}

	::System::Void EEOOAGEDKLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAMLIHOJNMB_EEOOAGEDKLM_OFFSET))(this);
	}
};
