#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/StateMachineBehaviour.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
namespace RPG::Client { class StateParam; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_STATEPARAMMODIFIER_CTOR_OFFSET UNITYSDK_OFFSET(0xEBDC280)
#define RPG_CLIENT_STATEPARAMMODIFIER_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0xEBDBF80)
#define RPG_CLIENT_STATEPARAMMODIFIER_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0xEBDC1A0)
#define RPG_CLIENT_STATEPARAMMODIFIER_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0xEBDC060)

namespace RPG::Client
{
	inline static constexpr unsigned int StateParamModifier_TypeDefinitionIndex = 70788;

	class StateParamModifier : public ::UnityEngine::StateMachineBehaviour
	{
	public:
		::Il2CppArray<::RPG::Client::StateParam*>* stateParams; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEPARAMMODIFIER_CTOR_OFFSET))(this);
		}

		::System::Void OnStateEnter(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEPARAMMODIFIER_ONSTATEENTER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateUpdate(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEPARAMMODIFIER_ONSTATEUPDATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateExit(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEPARAMMODIFIER_ONSTATEEXIT_OFFSET))(this, a1, a2, a3);
		}

	};
}
