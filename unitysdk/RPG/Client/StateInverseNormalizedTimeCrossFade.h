#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/StateMachineBehaviour.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
namespace RPG::Client { class AnimationTransitionCondition; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_STATEINVERSENORMALIZEDTIMECROSSFADE_AWAKE_OFFSET UNITYSDK_OFFSET(0xE12E370)
#define RPG_CLIENT_STATEINVERSENORMALIZEDTIMECROSSFADE_COFOHFCAMCA_OFFSET UNITYSDK_OFFSET(0xE12E5D0)
#define RPG_CLIENT_STATEINVERSENORMALIZEDTIMECROSSFADE_CTOR_OFFSET UNITYSDK_OFFSET(0xE12E710)
#define RPG_CLIENT_STATEINVERSENORMALIZEDTIMECROSSFADE_HLKLBKNLFFO_OFFSET UNITYSDK_OFFSET(0xE12E4D0)
#define RPG_CLIENT_STATEINVERSENORMALIZEDTIMECROSSFADE_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0xE12E3E0)

namespace RPG::Client
{
	class StateInverseNormalizedTimeCrossFade : public ::UnityEngine::StateMachineBehaviour
	{
	public:
		::System::String* StateName; // 0x18
		::System::Single StateNormalizedTime; // 0x20
		::System::Single InverseNormalizedTime; // 0x24
		::System::Boolean InverseTriggerImmediate; // 0x28
		::System::Byte _padding0[0x7];
		::System::Collections::Generic::List_1<::RPG::Client::AnimationTransitionCondition*>* Conditions; // 0x30
		::System::Boolean InverseTransitionCondition; // 0x38
		::System::Byte _padding1[0x3];
		::System::Single _LastNormalizedTime; // 0x3C
		::System::Int32 _StateHash; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEINVERSENORMALIZEDTIMECROSSFADE_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEINVERSENORMALIZEDTIMECROSSFADE_AWAKE_OFFSET))(this);
		}

		::System::Void OnStateUpdate(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEINVERSENORMALIZEDTIMECROSSFADE_ONSTATEUPDATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean HLKLBKNLFFO(::UnityEngine::Animator* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEINVERSENORMALIZEDTIMECROSSFADE_HLKLBKNLFFO_OFFSET))(this, a1);
		}

		::System::Boolean COFOHFCAMCA(::RPG::Client::AnimationTransitionCondition* a1, ::UnityEngine::Animator* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AnimationTransitionCondition*, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEINVERSENORMALIZEDTIMECROSSFADE_COFOHFCAMCA_OFFSET))(this, a1, a2);
		}

	};
}
