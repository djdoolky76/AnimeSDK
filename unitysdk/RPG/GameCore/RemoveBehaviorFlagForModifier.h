#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RemoveBehaviorFlagForModifier; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_REMOVEBEHAVIORFLAGFORMODIFIER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9840B0)
#define RPG_GAMECORE_REMOVEBEHAVIORFLAGFORMODIFIER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9840C0)
#define RPG_GAMECORE_REMOVEBEHAVIORFLAGFORMODIFIER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D984080)

namespace RPG::GameCore
{
	class RemoveBehaviorFlagForModifier : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* ModifierName; // 0x20
		::RPG::GameCore::TargetEvaluator* CasterFilter; // 0x28
		::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* RemoveBehaviorFlags; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEBEHAVIORFLAGFORMODIFIER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RemoveBehaviorFlagForModifier* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RemoveBehaviorFlagForModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEBEHAVIORFLAGFORMODIFIER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RemoveBehaviorFlagForModifier* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RemoveBehaviorFlagForModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEBEHAVIORFLAGFORMODIFIER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
