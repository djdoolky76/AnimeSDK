#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class HitDamageSplit; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_HITDAMAGESPLIT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D770060)
#define RPG_GAMECORE_HITDAMAGESPLIT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D770070)
#define RPG_GAMECORE_HITDAMAGESPLIT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D770020)

namespace RPG::GameCore
{
	class HitDamageSplit : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SplitTarget; // 0x18
		::System::Boolean ForceUseSelfSplit; // 0x20
		::System::Byte _padding0[0x1];
		::RPG::GameCore::AliveStateMask AliveState; // 0x22
		::System::Byte _padding1[0x2];
		::RPG::GameCore::DynamicFloat* SelfSplitRatio; // 0x28
		::RPG::GameCore::DynamicFloat* TargetSplitRatio; // 0x30
		::System::Boolean EnableStanceDamage; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HITDAMAGESPLIT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HitDamageSplit* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HitDamageSplit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HITDAMAGESPLIT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::HitDamageSplit* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HitDamageSplit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HITDAMAGESPLIT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
