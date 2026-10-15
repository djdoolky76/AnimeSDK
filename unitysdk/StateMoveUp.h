#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/StateMachineBehaviour.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
namespace UnityEngine { class Animator; }

#define STATEMOVEUP_CTOR_OFFSET UNITYSDK_OFFSET(0xE998820)
#define STATEMOVEUP_NIJCGEIOIII_OFFSET UNITYSDK_OFFSET(0xE998750)
#define STATEMOVEUP_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0xE998310)
#define STATEMOVEUP_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0xE9983C0)

inline static constexpr unsigned int StateMoveUp_TypeDefinitionIndex = 47274;

	class StateMoveUp : public ::UnityEngine::StateMachineBehaviour
	{
	public:
		::System::Boolean isMoveUp; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single WingsBlend; // 0x1C
		::System::Single WingsBlendSpeed; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATEMOVEUP_CTOR_OFFSET))(this);
		}

		::System::Void OnStateEnter(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + STATEMOVEUP_ONSTATEENTER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateUpdate(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + STATEMOVEUP_ONSTATEUPDATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Single NIJCGEIOIII(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STATEMOVEUP_NIJCGEIOIII_OFFSET))(this, a1, a2, a3);
		}

	};
