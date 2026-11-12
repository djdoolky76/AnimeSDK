#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/StateMachineBehaviour.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_STATEPROBESCAN_CTOR_OFFSET UNITYSDK_OFFSET(0xEBDCD60)
#define RPG_CLIENT_STATEPROBESCAN_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0xEBDCBB0)
#define RPG_CLIENT_STATEPROBESCAN_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0xEBDCC60)
#define RPG_CLIENT_STATEPROBESCAN_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0xEBDCCF0)

namespace RPG::Client
{
	inline static constexpr unsigned int StateProbeScan_TypeDefinitionIndex = 70793;

	class StateProbeScan : public ::UnityEngine::StateMachineBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEPROBESCAN_CTOR_OFFSET))(this);
		}

		::System::Void OnStateEnter(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEPROBESCAN_ONSTATEENTER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateExit(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEPROBESCAN_ONSTATEEXIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateUpdate(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEPROBESCAN_ONSTATEUPDATE_OFFSET))(this, a1, a2, a3);
		}

	};
}
