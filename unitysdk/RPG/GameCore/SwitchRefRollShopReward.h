#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SwitchRefBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwitchRefRollShopReward; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SWITCHREFROLLSHOPREWARD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6887F0)
#define RPG_GAMECORE_SWITCHREFROLLSHOPREWARD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E688810)
#define RPG_GAMECORE_SWITCHREFROLLSHOPREWARD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E688EC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchRefRollShopReward_TypeDefinitionIndex = 17699;

	class SwitchRefRollShopReward : public ::RPG::GameCore::SwitchRefBase
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFROLLSHOPREWARD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchRefRollShopReward* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchRefRollShopReward*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFROLLSHOPREWARD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchRefRollShopReward* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchRefRollShopReward*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFROLLSHOPREWARD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
