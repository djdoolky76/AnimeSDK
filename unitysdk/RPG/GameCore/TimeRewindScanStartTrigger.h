#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/StateMachineBehaviour.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
namespace RPG::Client { class MonoEffectPluginSpreadMultiplier; }
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define RPG_GAMECORE_TIMEREWINDSCANSTARTTRIGGER_AKCIFIFGCLO_OFFSET UNITYSDK_OFFSET(0xE7A67D0)
#define RPG_GAMECORE_TIMEREWINDSCANSTARTTRIGGER_AWAKE_OFFSET UNITYSDK_OFFSET(0xE7A6610)
#define RPG_GAMECORE_TIMEREWINDSCANSTARTTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0xE7A69A0)
#define RPG_GAMECORE_TIMEREWINDSCANSTARTTRIGGER_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0xE7A6680)
#define RPG_GAMECORE_TIMEREWINDSCANSTARTTRIGGER_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0xE7A6900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRewindScanStartTrigger_TypeDefinitionIndex = 57496;

	class TimeRewindScanStartTrigger : public ::UnityEngine::StateMachineBehaviour
	{
	public:
		::System::String* TriggerName; // 0x18
		::System::Single StartNormalizedTime; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::Client::MonoEffectPluginSpreadMultiplier* _SpreadMultipler; // 0x28
		::System::Boolean _Triggered; // 0x30
		::System::Byte _padding1[0x3];
		::System::Int32 _TriggerHash; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDSCANSTARTTRIGGER_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDSCANSTARTTRIGGER_AWAKE_OFFSET))(this);
		}

		::System::Void OnStateEnter(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDSCANSTARTTRIGGER_ONSTATEENTER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateUpdate(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDSCANSTARTTRIGGER_ONSTATEUPDATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AKCIFIFGCLO(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDSCANSTARTTRIGGER_AKCIFIFGCLO_OFFSET))(this, a1, a2);
		}

	};
}
