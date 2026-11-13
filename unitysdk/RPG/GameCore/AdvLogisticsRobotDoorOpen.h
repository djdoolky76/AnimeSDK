#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvLogisticsRobotDoorOpen; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVLOGISTICSROBOTDOOROPEN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8D6E40)
#define RPG_GAMECORE_ADVLOGISTICSROBOTDOOROPEN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E8D6E50)
#define RPG_GAMECORE_ADVLOGISTICSROBOTDOOROPEN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E8D6E10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvLogisticsRobotDoorOpen_TypeDefinitionIndex = 21544;

	class AdvLogisticsRobotDoorOpen : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVLOGISTICSROBOTDOOROPEN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvLogisticsRobotDoorOpen* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvLogisticsRobotDoorOpen*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVLOGISTICSROBOTDOOROPEN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvLogisticsRobotDoorOpen* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvLogisticsRobotDoorOpen*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVLOGISTICSROBOTDOOROPEN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
