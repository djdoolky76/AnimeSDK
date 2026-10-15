#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StateTreeStateBaseConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class StateTreeReactionStateConfig; }
namespace RPG::GameCore { class StateTreeTransitionConfig; }

#define RPG_GAMECORE_STATETREEREACTIONSTATECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB1F160)
#define RPG_GAMECORE_STATETREEREACTIONSTATECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB1F170)
#define RPG_GAMECORE_STATETREEREACTIONSTATECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB1F130)

namespace RPG::GameCore
{
	class StateTreeReactionStateConfig : public ::RPG::GameCore::StateTreeStateBaseConfig
	{
	public:
		::RPG::GameCore::PredicateConfig* EnterCondition; // 0x18
		::Il2CppArray<::RPG::GameCore::StateTreeTransitionConfig*>* TransitionList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATETREEREACTIONSTATECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StateTreeReactionStateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StateTreeReactionStateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATETREEREACTIONSTATECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StateTreeReactionStateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StateTreeReactionStateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATETREEREACTIONSTATECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
