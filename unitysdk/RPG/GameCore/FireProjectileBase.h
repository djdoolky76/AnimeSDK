#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DamageDisplayData; }
namespace RPG::GameCore { class FireProjectileBase; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_FIREPROJECTILEBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6AC380)
#define RPG_GAMECORE_FIREPROJECTILEBASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6AC580)
#define RPG_GAMECORE_FIREPROJECTILEBASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6AC3A0)

namespace RPG::GameCore
{
	class FireProjectileBase : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::AliveStateMask TargetAliveState; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::PredicateConfig* Predicate; // 0x28
		::System::Int32 TargetMaxHitCount; // 0x30
		::System::Int32 MaxNumber; // 0x34
		::System::Boolean ResetAllHitCount; // 0x38
		::System::Byte _padding1[0x7];
		::RPG::GameCore::TargetEvaluator* CustomAnchorTarget; // 0x40
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnProjectileHit; // 0x48
		::System::Boolean WaitProjectileFinish; // 0x50
		::System::Byte _padding2[0x7];
		::RPG::GameCore::DamageDisplayData* DisplayData; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIREPROJECTILEBASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FireProjectileBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FireProjectileBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIREPROJECTILEBASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FireProjectileBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FireProjectileBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIREPROJECTILEBASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
