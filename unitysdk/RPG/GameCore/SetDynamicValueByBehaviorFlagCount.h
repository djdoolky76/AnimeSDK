#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByBehaviorFlagCount; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYBEHAVIORFLAGCOUNT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAA2480)
#define RPG_GAMECORE_SETDYNAMICVALUEBYBEHAVIORFLAGCOUNT_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1DAA2680)
#define RPG_GAMECORE_SETDYNAMICVALUEBYBEHAVIORFLAGCOUNT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAA2490)
#define RPG_GAMECORE_SETDYNAMICVALUEBYBEHAVIORFLAGCOUNT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAA2450)

namespace RPG::GameCore
{
	class SetDynamicValueByBehaviorFlagCount : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* ReadTargetType; // 0x28
		::RPG::GameCore::ModifierBehaviorFlag BehaviorFlag; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBEHAVIORFLAGCOUNT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByBehaviorFlagCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByBehaviorFlagCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBEHAVIORFLAGCOUNT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByBehaviorFlagCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByBehaviorFlagCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBEHAVIORFLAGCOUNT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBEHAVIORFLAGCOUNT_GETDYNAMICKEY_OFFSET))(this);
		}

	};
}
