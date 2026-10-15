#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/ModifierDispelFilterType.h"
#include "unitysdk/RPG/GameCore/ModifierInfectType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class InfectModifier; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_INFECTMODIFIER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D786480)
#define RPG_GAMECORE_INFECTMODIFIER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7864E0)
#define RPG_GAMECORE_INFECTMODIFIER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D786400)

namespace RPG::GameCore
{
	class InfectModifier : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SourceType; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* BehaviorFlagFilter; // 0x28
		::Il2CppArray<::RPG::GameCore::EnumStatusType>* StatusTypeListFilter; // 0x30
		::RPG::GameCore::ModifierDispelFilterType StatusDispelFilter; // 0x38
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* ModifierCasterFilter; // 0x40
		::System::Boolean OnlyGlobalModifier; // 0x48
		::System::Byte _padding1[0x7];
		::RPG::GameCore::DynamicFloat* InfectChance; // 0x50
		::RPG::GameCore::ModifierInfectType InfectType; // 0x58
		::System::Boolean DisableFloatingMessage; // 0x5C
		::System::Boolean Silence; // 0x5D
		::System::Boolean UseParamModifierToInfect; // 0x5E
		::System::Boolean AutoRemoveFromSource; // 0x5F
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFECTMODIFIER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::InfectModifier* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::InfectModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFECTMODIFIER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::InfectModifier* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::InfectModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFECTMODIFIER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
