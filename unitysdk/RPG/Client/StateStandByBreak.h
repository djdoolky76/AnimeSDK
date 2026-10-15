#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/StateMachineBehaviour.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_STATESTANDBYBREAK_BOPEKOOHEHE_OFFSET UNITYSDK_OFFSET(0xE128B00)
#define RPG_CLIENT_STATESTANDBYBREAK_CTOR_OFFSET UNITYSDK_OFFSET(0xE129130)
#define RPG_CLIENT_STATESTANDBYBREAK_GAKJLJIBAGL_OFFSET UNITYSDK_OFFSET(0xE128F30)
#define RPG_CLIENT_STATESTANDBYBREAK_JFPDIJMEIKG_OFFSET UNITYSDK_OFFSET(0xE128780)
#define RPG_CLIENT_STATESTANDBYBREAK_MDONFHBHLIE_OFFSET UNITYSDK_OFFSET(0xE128C90)
#define RPG_CLIENT_STATESTANDBYBREAK_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0xE128620)
#define RPG_CLIENT_STATESTANDBYBREAK_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0xE129070)
#define RPG_CLIENT_STATESTANDBYBREAK_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0xE1287F0)
#define RPG_CLIENT_STATESTANDBYBREAK_PDPDGPHPLID_OFFSET UNITYSDK_OFFSET(0xE128E50)

namespace RPG::Client
{
	inline static constexpr unsigned int StateStandByBreak_TypeDefinitionIndex = 68845;

	class StateStandByBreak : public ::UnityEngine::StateMachineBehaviour
	{
	public:
		::System::Single MinChangeGap; // 0x18
		::System::Single MaxChangeGap; // 0x1C
		::System::Single ChangeDuration; // 0x20
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Single>* CannotChangeNormalizedTimeRange; // 0x28
		::System::Single _GapTimer; // 0x30
		::System::Single _ChangeTimer; // 0x34
		::System::Single _ChangeStartValue; // 0x38
		::System::Single _ChangeTargetValue; // 0x3C
		::System::Boolean _IsChanging; // 0x40
		::System::Boolean _EnableBreak; // 0x41
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATESTANDBYBREAK_CTOR_OFFSET))(this);
		}

		::System::Void OnStateEnter(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATESTANDBYBREAK_ONSTATEENTER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateUpdate(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATESTANDBYBREAK_ONSTATEUPDATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateExit(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATESTANDBYBREAK_ONSTATEEXIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GAKJLJIBAGL(::UnityEngine::Animator* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATESTANDBYBREAK_GAKJLJIBAGL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BOPEKOOHEHE(::UnityEngine::Animator* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATESTANDBYBREAK_BOPEKOOHEHE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MDONFHBHLIE(::UnityEngine::Animator* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATESTANDBYBREAK_MDONFHBHLIE_OFFSET))(this, a1, a2);
		}

		::System::Single JFPDIJMEIKG()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATESTANDBYBREAK_JFPDIJMEIKG_OFFSET))(this);
		}

		::System::Boolean PDPDGPHPLID(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATESTANDBYBREAK_PDPDGPHPLID_OFFSET))(this, a1);
		}

	};
}
