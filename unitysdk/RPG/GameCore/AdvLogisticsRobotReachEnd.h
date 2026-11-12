#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvLogisticsRobotReachEnd; }

#define RPG_GAMECORE_ADVLOGISTICSROBOTREACHEND_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5B2670)
#define RPG_GAMECORE_ADVLOGISTICSROBOTREACHEND_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E5B2680)
#define RPG_GAMECORE_ADVLOGISTICSROBOTREACHEND_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E5B25B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvLogisticsRobotReachEnd_TypeDefinitionIndex = 21545;

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
