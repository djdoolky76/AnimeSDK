#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Animations/AnimatorControllerPlayable.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
namespace UnityEngine { class Animator; }

#define UNITYENGINE_STATEMACHINEBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0x20671070)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEENTER_1_OFFSET UNITYSDK_OFFSET(0x20671000)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0x20670F90)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEEXIT_1_OFFSET UNITYSDK_OFFSET(0x20671020)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0x20670FB0)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEIK_1_OFFSET UNITYSDK_OFFSET(0x20671040)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEIK_OFFSET UNITYSDK_OFFSET(0x20670FD0)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEMACHINEENTER_1_OFFSET UNITYSDK_OFFSET(0x20671050)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEMACHINEENTER_OFFSET UNITYSDK_OFFSET(0x20670FE0)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEMACHINEEXIT_1_OFFSET UNITYSDK_OFFSET(0x20671060)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEMACHINEEXIT_OFFSET UNITYSDK_OFFSET(0x20670FF0)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEMOVE_1_OFFSET UNITYSDK_OFFSET(0x20671030)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEMOVE_OFFSET UNITYSDK_OFFSET(0x20670FC0)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEUPDATE_1_OFFSET UNITYSDK_OFFSET(0x20671010)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0x20670FA0)

namespace UnityEngine
{
	inline static constexpr unsigned int StateMachineBehaviour_TypeDefinitionIndex = 5697;

	class StateMachineBehaviour : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_STATEMACHINEBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::System::Void OnStateEnter(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEENTER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateUpdate(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEUPDATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateExit(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEEXIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateMove(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEMOVE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateIK(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEIK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateMachineEnter(::UnityEngine::Animator* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEMACHINEENTER_OFFSET))(this, a1, a2);
		}

		::System::Void OnStateMachineExit(::UnityEngine::Animator* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEMACHINEEXIT_OFFSET))(this, a1, a2);
		}

		::System::Void OnStateEnter_1(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3, ::UnityEngine::Animations::AnimatorControllerPlayable a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32, ::UnityEngine::Animations::AnimatorControllerPlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEENTER_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OnStateUpdate_1(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3, ::UnityEngine::Animations::AnimatorControllerPlayable a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32, ::UnityEngine::Animations::AnimatorControllerPlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEUPDATE_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OnStateExit_1(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3, ::UnityEngine::Animations::AnimatorControllerPlayable a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32, ::UnityEngine::Animations::AnimatorControllerPlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEEXIT_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OnStateMove_1(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3, ::UnityEngine::Animations::AnimatorControllerPlayable a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32, ::UnityEngine::Animations::AnimatorControllerPlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEMOVE_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OnStateIK_1(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3, ::UnityEngine::Animations::AnimatorControllerPlayable a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32, ::UnityEngine::Animations::AnimatorControllerPlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEIK_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OnStateMachineEnter_1(::UnityEngine::Animator* a1, ::System::Int32 a2, ::UnityEngine::Animations::AnimatorControllerPlayable a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::Int32, ::UnityEngine::Animations::AnimatorControllerPlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEMACHINEENTER_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateMachineExit_1(::UnityEngine::Animator* a1, ::System::Int32 a2, ::UnityEngine::Animations::AnimatorControllerPlayable a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::Int32, ::UnityEngine::Animations::AnimatorControllerPlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEMACHINEEXIT_1_OFFSET))(this, a1, a2, a3);
		}

	};
}
