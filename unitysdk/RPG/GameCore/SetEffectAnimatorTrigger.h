#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EffectTriggerRange; }
namespace RPG::GameCore { class SetEffectAnimatorTrigger; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETEFFECTANIMATORTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAAEE80)
#define RPG_GAMECORE_SETEFFECTANIMATORTRIGGER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAAEE90)
#define RPG_GAMECORE_SETEFFECTANIMATORTRIGGER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAAEE50)

namespace RPG::GameCore
{
	class SetEffectAnimatorTrigger : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* UniqueEffectName; // 0x20
		::System::String* TriggerName; // 0x28
		::System::Boolean IsResetTrigger; // 0x30
		::System::Byte _padding0[0x7];
		::Il2CppArray<::RPG::GameCore::EffectTriggerRange*>* EffectTriggerRangeList; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEFFECTANIMATORTRIGGER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetEffectAnimatorTrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetEffectAnimatorTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEFFECTANIMATORTRIGGER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetEffectAnimatorTrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetEffectAnimatorTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEFFECTANIMATORTRIGGER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
