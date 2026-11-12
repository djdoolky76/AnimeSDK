#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AttackData; }
namespace RPG::GameCore { class DamageByAttackProperty; }
namespace RPG::GameCore { class DamageDisplayData; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_DAMAGEBYATTACKPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0x1E802060)
#define RPG_GAMECORE_DAMAGEBYATTACKPROPERTY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E8020D0)
#define RPG_GAMECORE_DAMAGEBYATTACKPROPERTY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E801E20)
#define RPG_GAMECORE_DAMAGEBYATTACKPROPERTY_SHAREBYCOPY_OFFSET UNITYSDK_OFFSET(0x1E802BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DamageByAttackProperty_TypeDefinitionIndex = 23010;

	class DamageByAttackProperty : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::AttackData* AttackProperty; // 0x20
		::System::Boolean TriggerHitSound; // 0x28
		::System::Byte _padding0[0x7];
		::System::String* SpecialHitSoundEvent; // 0x30
		::System::Boolean CanTriggerLastKill; // 0x38
		::System::Boolean IsConvert; // 0x39
		::System::Byte _padding1[0x6];
		::System::String* EffectMessage; // 0x40
		::RPG::GameCore::DamageDisplayData* DisplayData; // 0x48
		::System::Boolean CanOverkill; // 0x50
		::System::Byte _padding2[0x7];
		::RPG::GameCore::DynamicFloat* PerformanceDelay; // 0x58
		::System::Boolean IsHitAnimPerformanceDelay; // 0x60
		::System::Byte _padding3[0x7];
		::RPG::GameCore::TargetEvaluator* OverrideAttacker; // 0x68
		::RPG::GameCore::TargetEvaluator* OverrideDamagePropertySource; // 0x70
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnAfterHit; // 0x78
		::System::Boolean DealAfterRootHitEnd; // 0x80
		::System::Boolean EqualSplitInTargets; // 0x81
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGEBYATTACKPROPERTY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DamageByAttackProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DamageByAttackProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGEBYATTACKPROPERTY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DamageByAttackProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DamageByAttackProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGEBYATTACKPROPERTY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* ShareByCopy()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGEBYATTACKPROPERTY_SHAREBYCOPY_OFFSET))(this);
		}

	};
}
