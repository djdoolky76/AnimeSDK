#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Effect_BgmBeatTrigger_BeatTriggerTargetType.h"
namespace RPG::Client { class Effect_BgmBeatTrigger_BeatTriggerConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class ParticleSystem; }

#define RPG_CLIENT_EFFECT_BGMBEATTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x17BD22A0)
#define RPG_CLIENT_EFFECT_BGMBEATTRIGGER_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0x17BD2250)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_BgmBeatTrigger_TypeDefinitionIndex = 72401;

	class Effect_BgmBeatTrigger
	{
	public:
		::System::String* TargetBgmStateName; // 0x30
		::RPG::Client::Effect_BgmBeatTrigger_BeatTriggerTargetType TargetType; // 0x38
		::System::Byte _padding0[0x4];
		::UnityEngine::Animator* TargetAnimator; // 0x40
		::System::String* AnimatorStateName; // 0x48
		::System::Int32 AnimatorLayer; // 0x50
		::System::Byte _padding1[0x4];
		::UnityEngine::ParticleSystem* TargetParticleSystem; // 0x58
		::RPG::Client::Effect_BgmBeatTrigger_BeatTriggerConfig* DefaultBeatConfig; // 0x60
		::Il2CppArray<::System::Object*>* CueBeatConfigs; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_BGMBEATTRIGGER_CTOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_BGMBEATTRIGGER_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

	};
}
