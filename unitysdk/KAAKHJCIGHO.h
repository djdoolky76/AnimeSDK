#pragma once
#include "unitysdk/unitysdk.h"

class DNGEKLMPBAC;
class LLMEPLBOODC;
namespace MoleMole { class UIHollowMainPageController; }
namespace MoleMole::Config { class ConfigBigTVMinigameSwitchNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define KAAKHJCIGHO_EEOOAGEDKLM_OFFSET UNITYSDK_OFFSET(0x157DACC0)
#define KAAKHJCIGHO_HEGPPHAGDCO_OFFSET UNITYSDK_OFFSET(0x157DAB40)
#define KAAKHJCIGHO_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x157DABC0)
#define KAAKHJCIGHO__CTOR_OFFSET UNITYSDK_OFFSET(0x157DAC60)

inline static constexpr unsigned int KAAKHJCIGHO_TypeDefinitionIndex = 53965;

class KAAKHJCIGHO
{
public:
	::MoleMole::UIHollowMainPageController* MACHGCHBMBO; // 0x40
	::MoleMole::Config::ConfigBigTVMinigameSwitchNode* GELPLHLJCDL; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAAKHJCIGHO__CTOR_OFFSET))(this);
	}

	::System::Void HEGPPHAGDCO(::MoleMole::Config::ConfigBigTVMinigameSwitchNode* JECAEDMPEDB, ::LLMEPLBOODC* ENPKNICOJCD, ::MoleMole::Config::UISpecialNumGroup* PNLGHFAFNPO, ::DNGEKLMPBAC* ECKMPOAABAL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigBigTVMinigameSwitchNode*, ::LLMEPLBOODC*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + KAAKHJCIGHO_HEGPPHAGDCO_OFFSET))(this, JECAEDMPEDB, ENPKNICOJCD, PNLGHFAFNPO, ECKMPOAABAL);
	}

	::System::Void LCJEELHBNHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAAKHJCIGHO_LCJEELHBNHG_OFFSET))(this);
	}

	::System::Void EEOOAGEDKLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAAKHJCIGHO_EEOOAGEDKLM_OFFSET))(this);
	}
};
