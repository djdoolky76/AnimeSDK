#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMJCPMOPHJJ.h"
#include "unitysdk/RPG/GameCore/AdvPauseMovementFloatingAndRotationReason.h"
#include "unitysdk/RPG/GameCore/AdventureFeatureNormalActiveReason.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/AnimatorSpeedMultiplyReason.h"
#include "unitysdk/RPG/GameCore/FreezeMovementReason.h"
#include "unitysdk/RPG/GameCore/PauseAbilityReason.h"
namespace RPG::GameCore { class GameEntity; }

#define OMEKABNECCO_ADALJLPBDOE_OFFSET UNITYSDK_OFFSET(0xBF248D0)
#define OMEKABNECCO_BBGDOBDNAOB_OFFSET UNITYSDK_OFFSET(0xBF24880)
#define OMEKABNECCO_CTOR_OFFSET UNITYSDK_OFFSET(0xBF24700)
#define OMEKABNECCO_GET_FLAG_OFFSET UNITYSDK_OFFSET(0xBF25600)
#define OMEKABNECCO_GET__PAUSEMOVEMENTREASON_OFFSET UNITYSDK_OFFSET(0xBF25610)
#define OMEKABNECCO_IDPLOFEJCMD_OFFSET UNITYSDK_OFFSET(0xBF24830)
#define OMEKABNECCO_LICLBMEDGJM_OFFSET UNITYSDK_OFFSET(0xBF24770)

	class OMEKABNECCO : public ::CMJCPMOPHJJ
	{
	public:
		::RPG::GameCore::AdvPauseMovementFloatingAndRotationReason __PauseMovementReason_k__BackingField; // 0x80
		::RPG::GameCore::AdventureModifierBehaviorFlag _Flag_k__BackingField; // 0x84
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OMEKABNECCO_CTOR_OFFSET))(this, a1);
		}

		::System::Void LICLBMEDGJM(::System::Boolean a1, ::System::Boolean a2, ::RPG::GameCore::AdventureFeatureNormalActiveReason a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::RPG::GameCore::AdventureFeatureNormalActiveReason))((::PBYTE)hIl2Cpp + OMEKABNECCO_LICLBMEDGJM_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::AnimatorSpeedMultiplyReason IDPLOFEJCMD()
		{
			return ((::RPG::GameCore::AnimatorSpeedMultiplyReason(*)(::PVOID))((::PBYTE)hIl2Cpp + OMEKABNECCO_IDPLOFEJCMD_OFFSET))(this);
		}

		::RPG::GameCore::PauseAbilityReason BBGDOBDNAOB()
		{
			return ((::RPG::GameCore::PauseAbilityReason(*)(::PVOID))((::PBYTE)hIl2Cpp + OMEKABNECCO_BBGDOBDNAOB_OFFSET))(this);
		}

		::RPG::GameCore::FreezeMovementReason ADALJLPBDOE()
		{
			return ((::RPG::GameCore::FreezeMovementReason(*)(::PVOID))((::PBYTE)hIl2Cpp + OMEKABNECCO_ADALJLPBDOE_OFFSET))(this);
		}

		::RPG::GameCore::AdventureModifierBehaviorFlag get_Flag()
		{
			return ((::RPG::GameCore::AdventureModifierBehaviorFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + OMEKABNECCO_GET_FLAG_OFFSET))(this);
		}

		::RPG::GameCore::AdvPauseMovementFloatingAndRotationReason get__PauseMovementReason()
		{
			return ((::RPG::GameCore::AdvPauseMovementFloatingAndRotationReason(*)(::PVOID))((::PBYTE)hIl2Cpp + OMEKABNECCO_GET__PAUSEMOVEMENTREASON_OFFSET))(this);
		}

	};
