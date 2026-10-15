#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TurnBasedModifierDependencyConfig; }
namespace System { class String; }

#define RPG_GAMECORE_TURNBASEDMODIFIERDEPENDENCYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC63C80)
#define RPG_GAMECORE_TURNBASEDMODIFIERDEPENDENCYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC62380)

namespace RPG::GameCore
{
	class TurnBasedModifierDependencyConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* DependentModifier; // 0x10
		::RPG::GameCore::ModifierBehaviorFlag DependentBehaviorFlag; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* CasterFilter; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERDEPENDENCYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TurnBasedModifierDependencyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TurnBasedModifierDependencyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERDEPENDENCYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
