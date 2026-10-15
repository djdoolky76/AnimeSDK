#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvLogisticsRobotDoorOpen; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVLOGISTICSROBOTDOOROPEN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D375210)
#define RPG_GAMECORE_ADVLOGISTICSROBOTDOOROPEN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D375220)
#define RPG_GAMECORE_ADVLOGISTICSROBOTDOOROPEN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3751E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvLogisticsRobotDoorOpen_TypeDefinitionIndex = 21201;

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
