#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseExpeditionBattleNode.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseExpeditionBattleNode; }
namespace RPG::GameCore { class ExpeditionBattleLoopNode; }

#define RPG_GAMECORE_EXPEDITIONBATTLELOOPNODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D68F470)
#define RPG_GAMECORE_EXPEDITIONBATTLELOOPNODE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D68F480)
#define RPG_GAMECORE_EXPEDITIONBATTLELOOPNODE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D68F420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionBattleLoopNode_TypeDefinitionIndex = 16204;

	class ExpeditionBattleLoopNode : public ::RPG::GameCore::BaseExpeditionBattleNode
	{
	public:
		::Il2CppArray<::RPG::GameCore::BaseExpeditionBattleNode*>* Nodes; // 0x10
		::System::UInt32 LoopCount; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLELOOPNODE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ExpeditionBattleLoopNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ExpeditionBattleLoopNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLELOOPNODE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ExpeditionBattleLoopNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ExpeditionBattleLoopNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLELOOPNODE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
