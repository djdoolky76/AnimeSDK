#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMJCPMOPHJJ.h"
#include "unitysdk/RPG/GameCore/AdvPauseMovementFloatingAndRotationReason.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/AnimatorSpeedMultiplyReason.h"
#include "unitysdk/RPG/GameCore/FreezeMovementReason.h"
#include "unitysdk/RPG/GameCore/PauseAbilityReason.h"
namespace RPG::GameCore { class GameEntity; }

#define NKIBGHMHHNI_ADALJLPBDOE_OFFSET UNITYSDK_OFFSET(0xBC35520)
#define NKIBGHMHHNI_BBGDOBDNAOB_OFFSET UNITYSDK_OFFSET(0xBC354D0)
#define NKIBGHMHHNI_CTOR_OFFSET UNITYSDK_OFFSET(0xBC35410)
#define NKIBGHMHHNI_GET_FLAG_OFFSET UNITYSDK_OFFSET(0xBC35570)
#define NKIBGHMHHNI_GET__PAUSEMOVEMENTREASON_OFFSET UNITYSDK_OFFSET(0xBC35580)
#define NKIBGHMHHNI_IDPLOFEJCMD_OFFSET UNITYSDK_OFFSET(0xBC35480)

inline static constexpr unsigned int NKIBGHMHHNI_TypeDefinitionIndex = 57032;

	class NKIBGHMHHNI : public ::CMJCPMOPHJJ
	{
	public:
		::RPG::GameCore::AdventureModifierBehaviorFlag _Flag_k__BackingField; // 0x80
		::RPG::GameCore::AdvPauseMovementFloatingAndRotationReason __PauseMovementReason_k__BackingField; // 0x84
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NKIBGHMHHNI_CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::AnimatorSpeedMultiplyReason IDPLOFEJCMD()
		{
			return ((::RPG::GameCore::AnimatorSpeedMultiplyReason(*)(::PVOID))((::PBYTE)hIl2Cpp + NKIBGHMHHNI_IDPLOFEJCMD_OFFSET))(this);
		}

		::RPG::GameCore::PauseAbilityReason BBGDOBDNAOB()
		{
			return ((::RPG::GameCore::PauseAbilityReason(*)(::PVOID))((::PBYTE)hIl2Cpp + NKIBGHMHHNI_BBGDOBDNAOB_OFFSET))(this);
		}

		::RPG::GameCore::FreezeMovementReason ADALJLPBDOE()
		{
			return ((::RPG::GameCore::FreezeMovementReason(*)(::PVOID))((::PBYTE)hIl2Cpp + NKIBGHMHHNI_ADALJLPBDOE_OFFSET))(this);
		}

		::RPG::GameCore::AdventureModifierBehaviorFlag get_Flag()
		{
			return ((::RPG::GameCore::AdventureModifierBehaviorFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + NKIBGHMHHNI_GET_FLAG_OFFSET))(this);
		}

		::RPG::GameCore::AdvPauseMovementFloatingAndRotationReason get__PauseMovementReason()
		{
			return ((::RPG::GameCore::AdvPauseMovementFloatingAndRotationReason(*)(::PVOID))((::PBYTE)hIl2Cpp + NKIBGHMHHNI_GET__PAUSEMOVEMENTREASON_OFFSET))(this);
		}

	};
