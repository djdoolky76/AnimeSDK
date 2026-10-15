#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseExpeditionBattleNode; }

#define RPG_GAMECORE_BASEEXPEDITIONBATTLENODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D410190)
#define RPG_GAMECORE_BASEEXPEDITIONBATTLENODE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D410130)
#define RPG_GAMECORE_BASEEXPEDITIONBATTLENODE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D40FEE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaseExpeditionBattleNode_TypeDefinitionIndex = 16198;

	class BaseExpeditionBattleNode : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEEXPEDITIONBATTLENODE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BaseExpeditionBattleNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BaseExpeditionBattleNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEEXPEDITIONBATTLENODE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BaseExpeditionBattleNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BaseExpeditionBattleNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEEXPEDITIONBATTLENODE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
