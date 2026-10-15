#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/StateMachineBehaviour.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
namespace RPG::Client { class MonoEffectPluginSpreadMultiplier; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define STATESPREADCONTROL_AKCIFIFGCLO_OFFSET UNITYSDK_OFFSET(0xE98E470)
#define STATESPREADCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xE98E590)
#define STATESPREADCONTROL_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0xE98E2B0)
#define STATESPREADCONTROL_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0xE98E3C0)

inline static constexpr unsigned int StateSpreadControl_TypeDefinitionIndex = 47625;

	class StateSpreadControl : public ::UnityEngine::StateMachineBehaviour
	{
	public:
		::System::Boolean IsStart; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single NormalizedTime; // 0x1C
		::System::Single TransitionTime; // 0x20
		::System::Byte _padding1[0x4];
		::System::String* _SpeedControlParam; // 0x28
		::Il2CppArray<::UnityEngine::Transform*>* _ModifyTransforms; // 0x30
		::RPG::Client::MonoEffectPluginSpreadMultiplier* _SpreadMultipler; // 0x38
		::System::Boolean _Triggered; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATESPREADCONTROL_CTOR_OFFSET))(this);
		}

		::System::Void OnStateEnter(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + STATESPREADCONTROL_ONSTATEENTER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateUpdate(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + STATESPREADCONTROL_ONSTATEUPDATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AKCIFIFGCLO(::UnityEngine::AnimatorStateInfo a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimatorStateInfo))((::PBYTE)hIl2Cpp + STATESPREADCONTROL_AKCIFIFGCLO_OFFSET))(this, a1);
		}

	};
