#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvLogisticsRobotTriggerLoad; }

#define RPG_GAMECORE_ADVLOGISTICSROBOTTRIGGERLOAD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A3050)
#define RPG_GAMECORE_ADVLOGISTICSROBOTTRIGGERLOAD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3A3060)
#define RPG_GAMECORE_ADVLOGISTICSROBOTTRIGGERLOAD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3A2F90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvLogisticsRobotTriggerLoad_TypeDefinitionIndex = 21199;

	class AdvLogisticsRobotTriggerLoad : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVLOGISTICSROBOTTRIGGERLOAD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvLogisticsRobotTriggerLoad* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvLogisticsRobotTriggerLoad*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVLOGISTICSROBOTTRIGGERLOAD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvLogisticsRobotTriggerLoad* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvLogisticsRobotTriggerLoad*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVLOGISTICSROBOTTRIGGERLOAD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
