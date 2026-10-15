#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/StateMachineBehaviour.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
namespace UnityEngine { class Animator; }

#define STATEWHEELMOVE_CCTOR_OFFSET UNITYSDK_OFFSET(0xE998D70)
#define STATEWHEELMOVE_CTOR_OFFSET UNITYSDK_OFFSET(0xE998D60)
#define STATEWHEELMOVE_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0xE998B30)
#define STATEWHEELMOVE_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0xE998BA0)

	class StateWheelMove : public ::UnityEngine::StateMachineBehaviour
	{
	public:
		::System::Single fadeTime; // 0x18
		::System::Single MoveAnimSpeed; // 0x1C
		static ::System::Int32* StaticGet__WheelSpeedScale()
		{
			return (::System::Int32*)UnitySDK::FromName("", "StateWheelMove")->GetStaticField(0x3380);
		}

		static ::System::Int32* StaticGet__IsMove()
		{
			return (::System::Int32*)UnitySDK::FromName("", "StateWheelMove")->GetStaticField(0x3384);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATEWHEELMOVE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATEWHEELMOVE_CCTOR_OFFSET))();
		}

		::System::Void OnStateEnter(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + STATEWHEELMOVE_ONSTATEENTER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateUpdate(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + STATEWHEELMOVE_ONSTATEUPDATE_OFFSET))(this, a1, a2, a3);
		}

	};
