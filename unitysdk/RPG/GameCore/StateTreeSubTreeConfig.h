#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_InitVariableType.h"
#include "unitysdk/RPG/GameCore/StateTreeStateBaseConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AIVariable; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class StateTreeSelectStateConfig; }
namespace RPG::GameCore { class StateTreeSubTreeConfig; }
namespace RPG::GameCore { class StateTreeTransitionConfig; }
namespace System { class String; }

#define RPG_GAMECORE_STATETREESUBTREECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB1F9C0)
#define RPG_GAMECORE_STATETREESUBTREECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB1F9D0)
#define RPG_GAMECORE_STATETREESUBTREECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB1FCF0)

namespace RPG::GameCore
{
	class StateTreeSubTreeConfig : public ::RPG::GameCore::StateTreeStateBaseConfig
	{
	public:
		::RPG::GameCore::StateTreeSelectStateConfig* SelectState; // 0x18
		::RPG::GameCore::PredicateConfig* EnterCondition; // 0x20
		::Il2CppArray<::RPG::GameCore::StateTreeTransitionConfig*>* TransitionList; // 0x28
		::System::String* FilePath; // 0x30
		::RPG::GameCore::ST_InitVariableType InitVariableType; // 0x38
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::AIVariable*>* OverrideVariableList; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATETREESUBTREECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StateTreeSubTreeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StateTreeSubTreeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATETREESUBTREECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StateTreeSubTreeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StateTreeSubTreeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATETREESUBTREECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
