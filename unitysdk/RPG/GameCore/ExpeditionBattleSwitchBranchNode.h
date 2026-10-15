#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseExpeditionBattleNode.h"
#include "unitysdk/RPG/GameCore/ExpeditionBattleBranchConditionKey.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseExpeditionBattleNode; }
namespace RPG::GameCore { class ExpeditionBattleBranchCase; }
namespace RPG::GameCore { class ExpeditionBattleSwitchBranchNode; }

#define RPG_GAMECORE_EXPEDITIONBATTLESWITCHBRANCHNODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D690D90)
#define RPG_GAMECORE_EXPEDITIONBATTLESWITCHBRANCHNODE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D690DA0)
#define RPG_GAMECORE_EXPEDITIONBATTLESWITCHBRANCHNODE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D690D40)

namespace RPG::GameCore
{
	class ExpeditionBattleSwitchBranchNode : public ::RPG::GameCore::BaseExpeditionBattleNode
	{
	public:
		::RPG::GameCore::ExpeditionBattleBranchConditionKey ConditionKey; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::ExpeditionBattleBranchCase*>* Cases; // 0x18
		::Il2CppArray<::RPG::GameCore::BaseExpeditionBattleNode*>* Nodes; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLESWITCHBRANCHNODE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ExpeditionBattleSwitchBranchNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ExpeditionBattleSwitchBranchNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLESWITCHBRANCHNODE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ExpeditionBattleSwitchBranchNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ExpeditionBattleSwitchBranchNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLESWITCHBRANCHNODE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
