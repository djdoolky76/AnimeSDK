#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimatorParameterType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AnimSetParameter; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ANIMSETPARAMETER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3C5150)
#define RPG_GAMECORE_ANIMSETPARAMETER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3C51E0)
#define RPG_GAMECORE_ANIMSETPARAMETER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3C50A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AnimSetParameter_TypeDefinitionIndex = 20598;

	class AnimSetParameter : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* AnimatorPath; // 0x20
		::System::String* ParameterName; // 0x28
		::RPG::GameCore::AnimatorParameterType ParameterType; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* Value; // 0x38
		::System::String* RequireHoyoTag; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMSETPARAMETER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AnimSetParameter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AnimSetParameter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMSETPARAMETER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AnimSetParameter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AnimSetParameter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMSETPARAMETER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
