#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Photo/AnimationBlendPosePerBoneFlag.h"
#include "unitysdk/CLBHLCNEJGC.h"
#include "unitysdk/ELHILBMKJKH.h"
#include "unitysdk/Foundation/NativeMemoryRequestHandle.h"
#include "unitysdk/Foundation/NativeVariableArray_1.h"
#include "unitysdk/LKEBCNKGCEA.h"
#include "unitysdk/PBKHDCIJJLE.h"
#include "unitysdk/PMBCHGNJMKF.h"
#include "unitysdk/System/ReadOnlySpan_1_F48FB86071006F3E.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace Foundation { class NativeMemory; }
namespace Foundation { class NativeMemoryBuilder; }
namespace MoleMole::Photo { class BlendPosePerBonePoseSetting; }
namespace MoleMole::Photo { class Skeleton; }
namespace UnityEngine { class Animator; }

#define MOLEMOLE_PHOTO_ANIMATIONBLENDPOSEPERBONECONFIG_CREATEJOBDATA_OFFSET UNITYSDK_OFFSET(0x135C7B70)
#define MOLEMOLE_PHOTO_ANIMATIONBLENDPOSEPERBONECONFIG_GET_DYNAMICMEMORYCOUNT_OFFSET UNITYSDK_OFFSET(0x135C8A20)
#define MOLEMOLE_PHOTO_ANIMATIONBLENDPOSEPERBONECONFIG_INITIALIZEWEIGHT_OFFSET UNITYSDK_OFFSET(0x135C8D40)
#define MOLEMOLE_PHOTO_ANIMATIONBLENDPOSEPERBONECONFIG_REQUESTMEMORY_OFFSET UNITYSDK_OFFSET(0x135C8A30)
#define MOLEMOLE_PHOTO_ANIMATIONBLENDPOSEPERBONECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x135C94C0)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int AnimationBlendPosePerBoneConfig_TypeDefinitionIndex = 40989;

	class AnimationBlendPosePerBoneConfig
	{
	public:
		::Il2CppArray<::MoleMole::Photo::BlendPosePerBonePoseSetting*>* blendPose; // 0x10
		::MoleMole::Photo::AnimationBlendPosePerBoneFlag blendFlag; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONBLENDPOSEPERBONECONFIG__CTOR_OFFSET))(this);
		}

		::ELHILBMKJKH CreateJobData(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Animator* animator, ::PMBCHGNJMKF& context, ::Foundation::NativeMemory* memory, ::System::ReadOnlySpan_1_F48FB86071006F3E<::Foundation::NativeMemoryRequestHandle> variables)
		{
			return ((::ELHILBMKJKH(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Animator*, ::PMBCHGNJMKF&, ::Foundation::NativeMemory*, ::System::ReadOnlySpan_1_F48FB86071006F3E<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONBLENDPOSEPERBONECONFIG_CREATEJOBDATA_OFFSET))(this, graph, animator, context, memory, variables);
		}

		::System::Int32 get_DynamicMemoryCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONBLENDPOSEPERBONECONFIG_GET_DYNAMICMEMORYCOUNT_OFFSET))(this);
		}

		::System::Void RequestMemory(::UnityEngine::Animator* animator, ::MoleMole::Photo::Skeleton* skeleton, ::Foundation::NativeMemoryBuilder* builder, ::System::Span_1_9011FAD97750D224<::Foundation::NativeMemoryRequestHandle> output)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::MoleMole::Photo::Skeleton*, ::Foundation::NativeMemoryBuilder*, ::System::Span_1_9011FAD97750D224<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONBLENDPOSEPERBONECONFIG_REQUESTMEMORY_OFFSET))(this, animator, skeleton, builder, output);
		}

		::System::Void InitializeWeight(::Foundation::NativeVariableArray_1<::CLBHLCNEJGC> boneWeights, ::Foundation::NativeVariableArray_1<::LKEBCNKGCEA> poseWeights, ::PBKHDCIJJLE skeleton, ::UnityEngine::Animator* animator)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::NativeVariableArray_1<::CLBHLCNEJGC>, ::Foundation::NativeVariableArray_1<::LKEBCNKGCEA>, ::PBKHDCIJJLE, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONBLENDPOSEPERBONECONFIG_INITIALIZEWEIGHT_OFFSET))(this, boneWeights, poseWeights, skeleton, animator);
		}
	};
}
