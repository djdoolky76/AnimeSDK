#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimatorParameterType.h"
#include "unitysdk/RPG/GameCore/FormatString.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SetEffectAnimatorParameter; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETEFFECTANIMATORPARAMETER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAAE5B0)
#define RPG_GAMECORE_SETEFFECTANIMATORPARAMETER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAAE660)
#define RPG_GAMECORE_SETEFFECTANIMATORPARAMETER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAAE4E0)

namespace RPG::GameCore
{
	class SetEffectAnimatorParameter : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::FormatString UniqueEffectName; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::String* ParameterName; // 0x28
		::System::Boolean IterateAnimatorsUntilMatched; // 0x30
		::System::Byte _padding0[0x3];
		::RPG::GameCore::AnimatorParameterType ParameterType; // 0x34
		::System::Boolean BoolValue; // 0x38
		::System::Byte _padding1[0x7];
		::RPG::GameCore::DynamicFloat* FloatValue; // 0x40
		::RPG::GameCore::DynamicFloat* IntValue; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEFFECTANIMATORPARAMETER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetEffectAnimatorParameter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetEffectAnimatorParameter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEFFECTANIMATORPARAMETER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetEffectAnimatorParameter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetEffectAnimatorParameter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEFFECTANIMATORPARAMETER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
