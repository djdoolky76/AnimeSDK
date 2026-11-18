#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/SerializableHashString.h"
#include "unitysdk/Foundation/NativeMemoryRequestHandle.h"
#include "unitysdk/MOGFMKIHDMF.h"
#include "unitysdk/PMBCHGNJMKF.h"
#include "unitysdk/System/ReadOnlySpan_1_F48FB86071006F3E.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace Foundation { class NativeMemory; }
namespace Foundation { class NativeMemoryBuilder; }
namespace MoleMole::Photo { class Skeleton; }
namespace UnityEngine { class Animator; }

#define MOLEMOLE_PHOTO_FRONTCAMERAPROCESSEMOTIONPOSECONFIG_CREATEJOBDATA_OFFSET UNITYSDK_OFFSET(0x14BBCFC0)
#define MOLEMOLE_PHOTO_FRONTCAMERAPROCESSEMOTIONPOSECONFIG_GET_DYNAMICMEMORYCOUNT_OFFSET UNITYSDK_OFFSET(0x14BBCFB0)
#define MOLEMOLE_PHOTO_FRONTCAMERAPROCESSEMOTIONPOSECONFIG_REQUESTMEMORY_OFFSET UNITYSDK_OFFSET(0x14BBD580)
#define MOLEMOLE_PHOTO_FRONTCAMERAPROCESSEMOTIONPOSECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x14BBD6A0)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int FrontCameraProcessEmotionPoseConfig_TypeDefinitionIndex = 52142;

	class FrontCameraProcessEmotionPoseConfig
	{
	public:
		// static const ::System::Int32 EffectorAllocIndex = 0x0; // 0x0
		// static const ::System::Int32 JointAllocIndex = 0x1; // 0x0
		// static const ::System::Int32 AllocCount = 0x2; // 0x0
		::PipelineCamera::SerializableHashString lookAtBone; // 0x10
		::PipelineCamera::SerializableHashString rightHandBone; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FRONTCAMERAPROCESSEMOTIONPOSECONFIG__CTOR_OFFSET))(this);
		}

		::System::Int32 get_DynamicMemoryCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FRONTCAMERAPROCESSEMOTIONPOSECONFIG_GET_DYNAMICMEMORYCOUNT_OFFSET))(this);
		}

		::MOGFMKIHDMF CreateJobData(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Animator* animator, ::PMBCHGNJMKF& context, ::Foundation::NativeMemory* memory, ::System::ReadOnlySpan_1_F48FB86071006F3E<::Foundation::NativeMemoryRequestHandle> variables)
		{
			return ((::MOGFMKIHDMF(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Animator*, ::PMBCHGNJMKF&, ::Foundation::NativeMemory*, ::System::ReadOnlySpan_1_F48FB86071006F3E<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FRONTCAMERAPROCESSEMOTIONPOSECONFIG_CREATEJOBDATA_OFFSET))(this, graph, animator, context, memory, variables);
		}

		::System::Void RequestMemory(::UnityEngine::Animator* animator, ::MoleMole::Photo::Skeleton* skeleton, ::Foundation::NativeMemoryBuilder* builder, ::System::Span_1_9011FAD97750D224<::Foundation::NativeMemoryRequestHandle> output)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::MoleMole::Photo::Skeleton*, ::Foundation::NativeMemoryBuilder*, ::System::Span_1_9011FAD97750D224<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FRONTCAMERAPROCESSEMOTIONPOSECONFIG_REQUESTMEMORY_OFFSET))(this, animator, skeleton, builder, output);
		}
	};
}
