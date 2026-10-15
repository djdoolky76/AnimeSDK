#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PropWaterWheelStartRotate; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPWATERWHEELSTARTROTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D95BDA0)
#define RPG_GAMECORE_PROPWATERWHEELSTARTROTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D95BE70)
#define RPG_GAMECORE_PROPWATERWHEELSTARTROTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D95BD60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropWaterWheelStartRotate_TypeDefinitionIndex = 22153;

	class PropWaterWheelStartRotate : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* TargetDock; // 0x20
		::RPG::GameCore::DynamicFloat* TargetStopPoint; // 0x28
		::RPG::GameCore::DynamicFloat* RotateSpeed; // 0x30
		::System::Boolean IsClockwise; // 0x38
		::System::Boolean AutoClockwise; // 0x39
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPWATERWHEELSTARTROTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropWaterWheelStartRotate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropWaterWheelStartRotate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPWATERWHEELSTARTROTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropWaterWheelStartRotate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropWaterWheelStartRotate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPWATERWHEELSTARTROTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
