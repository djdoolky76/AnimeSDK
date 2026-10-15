#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TimeRewindOverrideHitProtectTime; }

#define RPG_GAMECORE_TIMEREWINDOVERRIDEHITPROTECTTIME_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB889A0)
#define RPG_GAMECORE_TIMEREWINDOVERRIDEHITPROTECTTIME_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB889B0)
#define RPG_GAMECORE_TIMEREWINDOVERRIDEHITPROTECTTIME_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB88970)

namespace RPG::GameCore
{
	class TimeRewindOverrideHitProtectTime : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::RPG::GameCore::DynamicFloat* HitProtectTime; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDOVERRIDEHITPROTECTTIME_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TimeRewindOverrideHitProtectTime* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TimeRewindOverrideHitProtectTime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDOVERRIDEHITPROTECTTIME_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TimeRewindOverrideHitProtectTime* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TimeRewindOverrideHitProtectTime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDOVERRIDEHITPROTECTTIME_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
