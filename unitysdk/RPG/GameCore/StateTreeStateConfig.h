#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StateTreeStateBaseConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class STTaskConfig; }
namespace RPG::GameCore { class StateTreeSelectStateConfig; }
namespace RPG::GameCore { class StateTreeStateBaseConfig; }
namespace RPG::GameCore { class StateTreeStateConfig; }
namespace RPG::GameCore { class StateTreeTransitionConfig; }

#define RPG_GAMECORE_STATETREESTATECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAF1EB0)
#define RPG_GAMECORE_STATETREESTATECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAF1EC0)
#define RPG_GAMECORE_STATETREESTATECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAF23E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StateTreeStateConfig_TypeDefinitionIndex = 15497;

	class StateTreeStateConfig : public ::RPG::GameCore::StateTreeStateBaseConfig
	{
	public:
		::RPG::GameCore::StateTreeSelectStateConfig* SelectState; // 0x18
		::RPG::GameCore::PredicateConfig* EnterCondition; // 0x20
		::Il2CppArray<::RPG::GameCore::STTaskConfig*>* TaskList; // 0x28
		::Il2CppArray<::RPG::GameCore::StateTreeTransitionConfig*>* TransitionList; // 0x30
		::Il2CppArray<::RPG::GameCore::StateTreeStateBaseConfig*>* SubStateList; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATETREESTATECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StateTreeStateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StateTreeStateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATETREESTATECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StateTreeStateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StateTreeStateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATETREESTATECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
