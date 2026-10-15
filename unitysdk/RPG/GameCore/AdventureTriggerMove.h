#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureTriggerMove; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ADVENTURETRIGGERMOVE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3CF920)
#define RPG_GAMECORE_ADVENTURETRIGGERMOVE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3CF980)
#define RPG_GAMECORE_ADVENTURETRIGGERMOVE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3CF710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureTriggerMove_TypeDefinitionIndex = 20184;

	class AdventureTriggerMove : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* MoveEntityType; // 0x18
		::RPG::GameCore::TargetEvaluator* MoveDestTargetType; // 0x20
		::RPG::GameCore::DynamicFloat* MaxDuration; // 0x28
		::RPG::GameCore::DynamicFloat* MaxSpeed; // 0x30
		::RPG::GameCore::DynamicFloat* MinSpeed; // 0x38
		::System::String* SpeedCurve; // 0x40
		::RPG::GameCore::DynamicFloat* MaxDistance; // 0x48
		::RPG::GameCore::DynamicFloat* MaxSteerSpeed; // 0x50
		::System::String* MaxSteerSpeedCurve; // 0x58
		::System::Boolean CanPlayerControl; // 0x60
		::System::Boolean AutoMove; // 0x61
		::System::Byte _padding0[0x6];
		::RPG::GameCore::DynamicFloat* Acceleration; // 0x68
		::System::Boolean IsStop; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETRIGGERMOVE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureTriggerMove* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureTriggerMove*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETRIGGERMOVE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureTriggerMove* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureTriggerMove*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETRIGGERMOVE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
