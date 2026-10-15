#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SetBattleRougeGoalProgress; }

#define RPG_GAMECORE_SETBATTLEROUGEGOALPROGRESS_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA974F0)
#define RPG_GAMECORE_SETBATTLEROUGEGOALPROGRESS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA97500)
#define RPG_GAMECORE_SETBATTLEROUGEGOALPROGRESS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA974B0)

namespace RPG::GameCore
{
	class SetBattleRougeGoalProgress : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* RogueGoalID; // 0x18
		::RPG::GameCore::DynamicFloat* ModifyValue; // 0x20
		::RPG::GameCore::PropertyModifyFunction ModifyFunction; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLEROUGEGOALPROGRESS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetBattleRougeGoalProgress* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetBattleRougeGoalProgress*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLEROUGEGOALPROGRESS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetBattleRougeGoalProgress* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetBattleRougeGoalProgress*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLEROUGEGOALPROGRESS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
