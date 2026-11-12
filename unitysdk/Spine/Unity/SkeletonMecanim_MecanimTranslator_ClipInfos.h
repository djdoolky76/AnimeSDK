#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AnimatorClipInfo.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_CLIPINFOS_CTOR_OFFSET UNITYSDK_OFFSET(0x1FFD14D0)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonMecanim_MecanimTranslator_ClipInfos_TypeDefinitionIndex = 46114;

	class SkeletonMecanim_MecanimTranslator_ClipInfos : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>* nextClipInfos; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>* clipInfos; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>* interruptingClipInfos; // 0x20
		::UnityEngine::AnimatorStateInfo stateInfo; // 0x28
		::System::Single interruptingClipTimeAddition; // 0x4C
		::UnityEngine::AnimatorStateInfo nextStateInfo; // 0x50
		::UnityEngine::AnimatorStateInfo interruptingStateInfo; // 0x74
		::System::Int32 nextClipInfoCount; // 0x98
		::System::Int32 interruptingClipInfoCount; // 0x9C
		::System::Boolean isLastFrameOfInterruption; // 0xA0
		::System::Boolean isInterruptionActive; // 0xA1
		::System::Byte _padding0[0x2];
		::System::Int32 clipInfoCount; // 0xA4
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_CLIPINFOS_CTOR_OFFSET))(this);
		}

	};
}
