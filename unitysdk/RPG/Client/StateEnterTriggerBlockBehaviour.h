#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/StateMachineBehaviour.h"
#include "unitysdk/UnityEngine/Animations/AnimatorControllerPlayable.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
namespace System { class Nullable; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_STATEENTERTRIGGERBLOCKBEHAVIOUR_CHJGMFGLJCK_OFFSET UNITYSDK_OFFSET(0xE12CA60)
#define RPG_CLIENT_STATEENTERTRIGGERBLOCKBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xE12CB60)
#define RPG_CLIENT_STATEENTERTRIGGERBLOCKBEHAVIOUR_DCCJKGEDEMP_OFFSET UNITYSDK_OFFSET(0xE12C870)
#define RPG_CLIENT_STATEENTERTRIGGERBLOCKBEHAVIOUR_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0xE12C7E0)
#define RPG_CLIENT_STATEENTERTRIGGERBLOCKBEHAVIOUR_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0xE12C9C0)

namespace RPG::Client
{
	class StateEnterTriggerBlockBehaviour : public ::UnityEngine::StateMachineBehaviour
	{
	public:
		::System::Nullable* _BlockID; // 0x18
		// static const ::System::Object _ExtraProtectSeconds; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEENTERTRIGGERBLOCKBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::System::Void OnStateEnter(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEENTERTRIGGERBLOCKBEHAVIOUR_ONSTATEENTER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateExit(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3, ::UnityEngine::Animations::AnimatorControllerPlayable a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32, ::UnityEngine::Animations::AnimatorControllerPlayable))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEENTERTRIGGERBLOCKBEHAVIOUR_ONSTATEEXIT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DCCJKGEDEMP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEENTERTRIGGERBLOCKBEHAVIOUR_DCCJKGEDEMP_OFFSET))(this, a1);
		}

		::System::Void CHJGMFGLJCK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEENTERTRIGGERBLOCKBEHAVIOUR_CHJGMFGLJCK_OFFSET))(this);
		}

	};
}
