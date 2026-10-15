#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoAnimatorStateSimpleEvent_StateEvent.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/AnimatorTransitionInfo.h"
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_MONOANIMATORSTATESIMPLEEVENT_EXITEVENT_ABCJCKECPDN_OFFSET UNITYSDK_OFFSET(0xD725C60)
#define RPG_CLIENT_MONOANIMATORSTATESIMPLEEVENT_EXITEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0xD725DE0)
#define RPG_CLIENT_MONOANIMATORSTATESIMPLEEVENT_EXITEVENT_JDEKJLHMPLG_OFFSET UNITYSDK_OFFSET(0xD725B40)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoAnimatorStateSimpleEvent_ExitEvent_TypeDefinitionIndex = 68521;

	class MonoAnimatorStateSimpleEvent_ExitEvent : public ::RPG::Client::MonoAnimatorStateSimpleEvent_StateEvent
	{
	public:
		::System::Boolean AllowTriggerOnTransition; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATORSTATESIMPLEEVENT_EXITEVENT_CTOR_OFFSET))(this);
		}

		::System::Void JDEKJLHMPLG(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATORSTATESIMPLEEVENT_EXITEVENT_JDEKJLHMPLG_OFFSET))(this, a1);
		}

		::System::Void ABCJCKECPDN(::System::Int32 a1, ::UnityEngine::AnimatorStateInfo a2, ::UnityEngine::AnimatorTransitionInfo a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorTransitionInfo))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATORSTATESIMPLEEVENT_EXITEVENT_ABCJCKECPDN_OFFSET))(this, a1, a2, a3);
		}

	};
}
