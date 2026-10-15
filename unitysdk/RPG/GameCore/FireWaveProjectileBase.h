#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DamageByAttackProperty; }
namespace RPG::GameCore { class FireWaveProjectileBase; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_FIREWAVEPROJECTILEBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6ACCC0)
#define RPG_GAMECORE_FIREWAVEPROJECTILEBASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6ACEA0)
#define RPG_GAMECORE_FIREWAVEPROJECTILEBASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6ACCD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FireWaveProjectileBase_TypeDefinitionIndex = 22582;

	class FireWaveProjectileBase : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* CasterTargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Int32 Count; // 0x28
		::System::Single Interval; // 0x2C
		::System::Boolean WaitProjectileFinish; // 0x30
		::System::Byte _padding0[0x7];
		::RPG::GameCore::DamageByAttackProperty* PerProjectileDamage; // 0x38
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnProjectileHitClientOnly; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIREWAVEPROJECTILEBASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FireWaveProjectileBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FireWaveProjectileBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIREWAVEPROJECTILEBASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FireWaveProjectileBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FireWaveProjectileBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIREWAVEPROJECTILEBASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
