#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DeathSource.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ForceKill; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_FORCEKILL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6E90F0)
#define RPG_GAMECORE_FORCEKILL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6E9100)
#define RPG_GAMECORE_FORCEKILL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6E90B0)

namespace RPG::GameCore
{
	class ForceKill : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DeathSource DeathSource; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* KillerType; // 0x28
		::System::Boolean AbortUnusedInsertAbility; // 0x30
		::System::Boolean CanOverkill; // 0x31
		::System::Boolean MuteHpChange; // 0x32
		::System::Boolean MuteTriggerDeath; // 0x33
		::System::Boolean MuteAllTriggerDeath; // 0x34
		::System::Boolean AllowRevive; // 0x35
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCEKILL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ForceKill* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ForceKill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCEKILL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ForceKill* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ForceKill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCEKILL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
