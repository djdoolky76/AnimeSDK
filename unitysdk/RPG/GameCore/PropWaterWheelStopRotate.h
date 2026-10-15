#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class PropWaterWheelStopRotate; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPWATERWHEELSTOPROTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D95C230)
#define RPG_GAMECORE_PROPWATERWHEELSTOPROTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D95C2B0)
#define RPG_GAMECORE_PROPWATERWHEELSTOPROTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D95C190)

namespace RPG::GameCore
{
	class PropWaterWheelStopRotate : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* TargetStopPoint; // 0x20
		::RPG::GameCore::DynamicString* DockPointIndex; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPWATERWHEELSTOPROTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropWaterWheelStopRotate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropWaterWheelStopRotate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPWATERWHEELSTOPROTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropWaterWheelStopRotate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropWaterWheelStopRotate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPWATERWHEELSTOPROTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
