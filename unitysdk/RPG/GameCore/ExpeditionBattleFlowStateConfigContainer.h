#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ExpeditionBattleFlowStateConfig; }
namespace RPG::GameCore { class ExpeditionBattleFlowStateConfigContainer; }

#define RPG_GAMECORE_EXPEDITIONBATTLEFLOWSTATECONFIGCONTAINER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D661470)
#define RPG_GAMECORE_EXPEDITIONBATTLEFLOWSTATECONFIGCONTAINER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6613B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionBattleFlowStateConfigContainer_TypeDefinitionIndex = 16224;

	class ExpeditionBattleFlowStateConfigContainer : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ExpeditionBattleFlowStateConfig*>* Configs; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLEFLOWSTATECONFIGCONTAINER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ExpeditionBattleFlowStateConfigContainer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ExpeditionBattleFlowStateConfigContainer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLEFLOWSTATECONFIGCONTAINER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
