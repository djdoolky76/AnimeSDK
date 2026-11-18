#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_CLIPINFOS__CTOR_OFFSET UNITYSDK_OFFSET(0x20029EE0)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonMecanim_MecanimTranslator_ClipInfos_TypeDefinitionIndex = 38144;

	class SkeletonMecanim_MecanimTranslator_ClipInfos : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* clipResolvedWeights; // 0x10
		::Il2CppArray<::System::Single>* interruptingClipResolvedWeights; // 0x18
		::Il2CppArray<::System::Single>* nextClipResolvedWeights; // 0x20
		::System::Collections::Generic::List_1<::System::Object*>* interruptingClipInfos; // 0x28
		::System::Collections::Generic::List_1<::System::Object*>* nextClipInfos; // 0x30
		::System::Collections::Generic::List_1<::System::Object*>* clipInfos; // 0x38
		::System::Single interruptingClipTimeAddition; // 0x40
		::UnityEngine::AnimatorStateInfo stateInfo; // 0x44
		::System::Int32 interruptingClipInfoCount; // 0x6C
		::System::Int32 nextClipInfoCount; // 0x70
		::UnityEngine::AnimatorStateInfo interruptingStateInfo; // 0x74
		::System::Int32 clipInfoCount; // 0x9C
		::System::Boolean isInterruptionActive; // 0xA0
		::System::Boolean isLastFrameOfInterruption; // 0xA1
		::System::Byte _padding0[0x2];
		::System::Single layerWeight; // 0xA4
		::UnityEngine::AnimatorStateInfo nextStateInfo; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_CLIPINFOS__CTOR_OFFSET))(this);
		}
	};
}
