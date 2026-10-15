#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AIConfig; }
namespace RPG::GameCore { class AIDecisionUnitConfig; }
namespace RPG::GameCore { class AITransitionTableRow; }
namespace RPG::GameCore { class AIVariable; }
namespace RPG::GameCore { class StateTreeRootStateConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_AICONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D338390)
#define RPG_GAMECORE_AICONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3380C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AIConfig_TypeDefinitionIndex = 15487;

	class AIConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* AIName; // 0x10
		::Il2CppArray<::RPG::GameCore::AIVariable*>* VariableList; // 0x18
		::Il2CppArray<::RPG::GameCore::AIVariable*>* GlobalVariableList; // 0x20
		::Il2CppArray<::RPG::GameCore::AIDecisionUnitConfig*>* DecisionList; // 0x28
		::Il2CppArray<::RPG::GameCore::AITransitionTableRow*>* TransitionTable; // 0x30
		::RPG::GameCore::StateTreeRootStateConfig* RootState; // 0x38
		::RPG::GameCore::TaskConfig* OnDisable; // 0x40
		::RPG::GameCore::TaskConfig* OnInit; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AICONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AIConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AIConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AICONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
