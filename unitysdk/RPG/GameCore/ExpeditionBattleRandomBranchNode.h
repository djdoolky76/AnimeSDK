#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseExpeditionBattleNode.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ExpeditionBattleRandomBranchCase; }
namespace RPG::GameCore { class ExpeditionBattleRandomBranchNode; }

#define RPG_GAMECORE_EXPEDITIONBATTLERANDOMBRANCHNODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6625F0)
#define RPG_GAMECORE_EXPEDITIONBATTLERANDOMBRANCHNODE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D662600)
#define RPG_GAMECORE_EXPEDITIONBATTLERANDOMBRANCHNODE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6625A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionBattleRandomBranchNode_TypeDefinitionIndex = 16202;

	class ExpeditionBattleRandomBranchNode : public ::RPG::GameCore::BaseExpeditionBattleNode
	{
	public:
		::Il2CppArray<::RPG::GameCore::ExpeditionBattleRandomBranchCase*>* Branches; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLERANDOMBRANCHNODE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ExpeditionBattleRandomBranchNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ExpeditionBattleRandomBranchNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLERANDOMBRANCHNODE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ExpeditionBattleRandomBranchNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ExpeditionBattleRandomBranchNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLERANDOMBRANCHNODE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
