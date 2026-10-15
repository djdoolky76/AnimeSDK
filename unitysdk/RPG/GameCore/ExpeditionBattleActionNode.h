#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseExpeditionBattleNode.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseExpeditionBattleAction; }
namespace RPG::GameCore { class ExpeditionBattleActionNode; }

#define RPG_GAMECORE_EXPEDITIONBATTLEACTIONNODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6607F0)
#define RPG_GAMECORE_EXPEDITIONBATTLEACTIONNODE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D660800)
#define RPG_GAMECORE_EXPEDITIONBATTLEACTIONNODE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D660730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionBattleActionNode_TypeDefinitionIndex = 16199;

	class ExpeditionBattleActionNode : public ::RPG::GameCore::BaseExpeditionBattleNode
	{
	public:
		::RPG::GameCore::BaseExpeditionBattleAction* Action; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLEACTIONNODE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ExpeditionBattleActionNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ExpeditionBattleActionNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLEACTIONNODE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ExpeditionBattleActionNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ExpeditionBattleActionNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLEACTIONNODE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
