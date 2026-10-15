#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseExpeditionBattleNode; }
namespace RPG::GameCore { class ExpeditionBattleNodeContainer; }

#define RPG_GAMECORE_EXPEDITIONBATTLENODECONTAINER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6622F0)
#define RPG_GAMECORE_EXPEDITIONBATTLENODECONTAINER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D662200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionBattleNodeContainer_TypeDefinitionIndex = 16197;

	class ExpeditionBattleNodeContainer : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::BaseExpeditionBattleNode*>* Nodes; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLENODECONTAINER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ExpeditionBattleNodeContainer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ExpeditionBattleNodeContainer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLENODECONTAINER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
