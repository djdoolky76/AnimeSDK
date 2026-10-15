#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvLogisticsRobotReachEnd; }

#define RPG_GAMECORE_ADVLOGISTICSROBOTREACHEND_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A2EC0)
#define RPG_GAMECORE_ADVLOGISTICSROBOTREACHEND_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3A2ED0)
#define RPG_GAMECORE_ADVLOGISTICSROBOTREACHEND_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3A2E00)

namespace RPG::GameCore
{
	class AdvLogisticsRobotReachEnd : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVLOGISTICSROBOTREACHEND_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvLogisticsRobotReachEnd* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvLogisticsRobotReachEnd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVLOGISTICSROBOTREACHEND_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvLogisticsRobotReachEnd* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvLogisticsRobotReachEnd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVLOGISTICSROBOTREACHEND_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
