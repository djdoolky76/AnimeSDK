#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Avatar/FNPCCrowdAvatarAudioDecisionFragment.h"
#include "unitysdk/NPCCrowd/Avatar/FNPCCrowdAvatarAudioInputFragment.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }

#define NPCCROWD_AVATAR_NPCCROWDAVATARAUDIODECISIONJOB_CALCULATESPEEDPERCENT_OFFSET UNITYSDK_OFFSET(0xFD2F070)
#define NPCCROWD_AVATAR_NPCCROWDAVATARAUDIODECISIONJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x601AF0)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCCrowdAvatarAudioDecisionJob_TypeDefinitionIndex = 77642;

	struct alignas(8) NPCCrowdAvatarAudioDecisionJob
	{
		::Unity::Collections::NativeArray_1<::NPCCrowd::Avatar::FNPCCrowdAvatarAudioInputFragment> InputFragments; // 0x10
		::System::Byte _padding0[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Avatar::FNPCCrowdAvatarAudioDecisionFragment> DecisionFragments; // 0x20
		::System::Byte _padding1[0x8];
		::System::Object* Commands; // 0x30
		::System::Byte _padding2[0x10];
		::System::Single UnscaledTime; // 0x48
		::System::Boolean ForceRtpcEveryFrame; // 0x4C

		::System::Void Execute(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARAUDIODECISIONJOB_EXECUTE_OFFSET))(this, index);
		}

		static ::System::Int32 CalculateSpeedPercent(::UnityEngine::Vector3 velocity, ::System::Single maxSpeed)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARAUDIODECISIONJOB_CALCULATESPEEDPERCENT_OFFSET))(velocity, maxSpeed);
		}
	};
}
