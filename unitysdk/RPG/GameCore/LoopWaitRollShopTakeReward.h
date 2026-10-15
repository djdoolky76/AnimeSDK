#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LoopWaitRollShopTakeReward; }

#define RPG_GAMECORE_LOOPWAITROLLSHOPTAKEREWARD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7F69D0)
#define RPG_GAMECORE_LOOPWAITROLLSHOPTAKEREWARD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7F69E0)
#define RPG_GAMECORE_LOOPWAITROLLSHOPTAKEREWARD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7F6990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoopWaitRollShopTakeReward_TypeDefinitionIndex = 21215;

	class LoopWaitRollShopTakeReward : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITROLLSHOPTAKEREWARD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LoopWaitRollShopTakeReward* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LoopWaitRollShopTakeReward*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITROLLSHOPTAKEREWARD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LoopWaitRollShopTakeReward* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LoopWaitRollShopTakeReward*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITROLLSHOPTAKEREWARD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
