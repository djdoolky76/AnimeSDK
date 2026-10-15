#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDENDNDOFLF.h"
#include "unitysdk/RPG/GameCore/AdvPauseMovementFloatingAndRotationReason.h"
#include "unitysdk/RPG/GameCore/AdventureFeatureNormalActiveReason.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/AnimatorSpeedMultiplyReason.h"
#include "unitysdk/RPG/GameCore/FreezeMovementReason.h"
#include "unitysdk/RPG/GameCore/PauseAbilityReason.h"
namespace RPG::GameCore { class AdventureAbilityComponent; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }

#define CMJCPMOPHJJ_ADALJLPBDOE_OFFSET UNITYSDK_OFFSET(0xDA38C50)
#define CMJCPMOPHJJ_BBGDOBDNAOB_OFFSET UNITYSDK_OFFSET(0xDA38BC0)
#define CMJCPMOPHJJ_CTOR_OFFSET UNITYSDK_OFFSET(0xDA38150)
#define CMJCPMOPHJJ_GET_FLAG_OFFSET UNITYSDK_OFFSET(0xDA38CF0)
#define CMJCPMOPHJJ_GET__PAUSEMOVEMENTREASON_OFFSET UNITYSDK_OFFSET(0xDA38CE0)
#define CMJCPMOPHJJ_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xDA381B0)
#define CMJCPMOPHJJ_IDPLOFEJCMD_OFFSET UNITYSDK_OFFSET(0xDA38B30)
#define CMJCPMOPHJJ_LICLBMEDGJM_OFFSET UNITYSDK_OFFSET(0xDA38200)

	class CMJCPMOPHJJ : public ::BDENDNDOFLF
	{
	public:
		::RPG::GameCore::AdventureAbilityComponent* OHOFOIIPGFP; // 0x68
		::RPG::GameCore::AdventureCharacterController* MNBAPCPACFP; // 0x70
		::RPG::GameCore::AdvPauseMovementFloatingAndRotationReason __PauseMovementReason_k__BackingField; // 0x78
		::RPG::GameCore::AdventureModifierBehaviorFlag _Flag_k__BackingField; // 0x7C
		// static const ::System::String* FHMJCJBODBH; // 0x0
		// static const ::System::String* MACNCALOHEI; // 0x0
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CMJCPMOPHJJ_CTOR_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMJCPMOPHJJ_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void LICLBMEDGJM(::System::Boolean a1, ::System::Boolean a2, ::RPG::GameCore::AdventureFeatureNormalActiveReason a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::RPG::GameCore::AdventureFeatureNormalActiveReason))((::PBYTE)hIl2Cpp + CMJCPMOPHJJ_LICLBMEDGJM_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::AnimatorSpeedMultiplyReason IDPLOFEJCMD()
		{
			return ((::RPG::GameCore::AnimatorSpeedMultiplyReason(*)(::PVOID))((::PBYTE)hIl2Cpp + CMJCPMOPHJJ_IDPLOFEJCMD_OFFSET))(this);
		}

		::RPG::GameCore::PauseAbilityReason BBGDOBDNAOB()
		{
			return ((::RPG::GameCore::PauseAbilityReason(*)(::PVOID))((::PBYTE)hIl2Cpp + CMJCPMOPHJJ_BBGDOBDNAOB_OFFSET))(this);
		}

		::RPG::GameCore::FreezeMovementReason ADALJLPBDOE()
		{
			return ((::RPG::GameCore::FreezeMovementReason(*)(::PVOID))((::PBYTE)hIl2Cpp + CMJCPMOPHJJ_ADALJLPBDOE_OFFSET))(this);
		}

		::RPG::GameCore::AdvPauseMovementFloatingAndRotationReason get__PauseMovementReason()
		{
			return ((::RPG::GameCore::AdvPauseMovementFloatingAndRotationReason(*)(::PVOID))((::PBYTE)hIl2Cpp + CMJCPMOPHJJ_GET__PAUSEMOVEMENTREASON_OFFSET))(this);
		}

		::RPG::GameCore::AdventureModifierBehaviorFlag get_Flag()
		{
			return ((::RPG::GameCore::AdventureModifierBehaviorFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + CMJCPMOPHJJ_GET_FLAG_OFFSET))(this);
		}

	};
