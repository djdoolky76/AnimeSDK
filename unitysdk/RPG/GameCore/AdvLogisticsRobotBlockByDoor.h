#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvLogisticsRobotBlockByDoor; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVLOGISTICSROBOTBLOCKBYDOOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3750C0)
#define RPG_GAMECORE_ADVLOGISTICSROBOTBLOCKBYDOOR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3750D0)
#define RPG_GAMECORE_ADVLOGISTICSROBOTBLOCKBYDOOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D375090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvLogisticsRobotBlockByDoor_TypeDefinitionIndex = 21200;

	class AdvLogisticsRobotBlockByDoor : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVLOGISTICSROBOTBLOCKBYDOOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvLogisticsRobotBlockByDoor* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvLogisticsRobotBlockByDoor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVLOGISTICSROBOTBLOCKBYDOOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvLogisticsRobotBlockByDoor* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvLogisticsRobotBlockByDoor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVLOGISTICSROBOTBLOCKBYDOOR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
