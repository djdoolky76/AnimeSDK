#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class FloatCurve; }
namespace RPG::GameCore { class SetAnimatorParameterWithTransition; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETANIMATORPARAMETERWITHTRANSITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA93FE0)
#define RPG_GAMECORE_SETANIMATORPARAMETERWITHTRANSITION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA94070)
#define RPG_GAMECORE_SETANIMATORPARAMETERWITHTRANSITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA93F30)

namespace RPG::GameCore
{
	class SetAnimatorParameterWithTransition : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* ParameterName; // 0x20
		::RPG::GameCore::DynamicFloat* Value; // 0x28
		::RPG::GameCore::DynamicFloat* TransitionDuration; // 0x30
		::RPG::GameCore::FloatCurve* TransitionCurve; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETANIMATORPARAMETERWITHTRANSITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetAnimatorParameterWithTransition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetAnimatorParameterWithTransition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETANIMATORPARAMETERWITHTRANSITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetAnimatorParameterWithTransition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetAnimatorParameterWithTransition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETANIMATORPARAMETERWITHTRANSITION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
