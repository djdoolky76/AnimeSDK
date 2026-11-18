#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/SerializableHashString.h"
#include "unitysdk/Foundation/NativeMemoryRequestHandle.h"
#include "unitysdk/LDENIGIJJEI.h"
#include "unitysdk/PMBCHGNJMKF.h"
#include "unitysdk/System/ReadOnlySpan_1_F48FB86071006F3E.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace Foundation { class NativeMemory; }
namespace Foundation { class NativeMemoryBuilder; }
namespace MoleMole::Photo { class Skeleton; }
namespace UnityEngine { class Animator; }

#define MOLEMOLE_PHOTO_FRONTCAMERAPROCESSBLENDSPACEPOSECONFIG_CREATEJOBDATA_OFFSET UNITYSDK_OFFSET(0x12B85230)
#define MOLEMOLE_PHOTO_FRONTCAMERAPROCESSBLENDSPACEPOSECONFIG_GET_DYNAMICMEMORYCOUNT_OFFSET UNITYSDK_OFFSET(0x12B85220)
#define MOLEMOLE_PHOTO_FRONTCAMERAPROCESSBLENDSPACEPOSECONFIG_REQUESTMEMORY_OFFSET UNITYSDK_OFFSET(0x12B85A20)
#define MOLEMOLE_PHOTO_FRONTCAMERAPROCESSBLENDSPACEPOSECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x12B85B90)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int FrontCameraProcessBlendSpacePoseConfig_TypeDefinitionIndex = 84736;

	class FrontCameraProcessBlendSpacePoseConfig
	{
	public:
		// static const ::System::Int32 CameraAllocIndex = 0x0; // 0x0
		// static const ::System::Int32 LeftHandAllocIndex = 0x1; // 0x0
		// static const ::System::Int32 LeftArmAllocIndex = 0x2; // 0x0
		// static const ::System::Int32 AllocCount = 0x3; // 0x0
		::PipelineCamera::SerializableHashString cameraBone; // 0x10
		::PipelineCamera::SerializableHashString leftHandBone; // 0x20
		::PipelineCamera::SerializableHashString lookAtIKCurve; // 0x30
		::PipelineCamera::SerializableHashString armIKCurve; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FRONTCAMERAPROCESSBLENDSPACEPOSECONFIG__CTOR_OFFSET))(this);
		}

		::System::Int32 get_DynamicMemoryCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FRONTCAMERAPROCESSBLENDSPACEPOSECONFIG_GET_DYNAMICMEMORYCOUNT_OFFSET))(this);
		}

		::LDENIGIJJEI CreateJobData(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Animator* animator, ::PMBCHGNJMKF& context, ::Foundation::NativeMemory* memory, ::System::ReadOnlySpan_1_F48FB86071006F3E<::Foundation::NativeMemoryRequestHandle> variables)
		{
			return ((::LDENIGIJJEI(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Animator*, ::PMBCHGNJMKF&, ::Foundation::NativeMemory*, ::System::ReadOnlySpan_1_F48FB86071006F3E<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FRONTCAMERAPROCESSBLENDSPACEPOSECONFIG_CREATEJOBDATA_OFFSET))(this, graph, animator, context, memory, variables);
		}

		::System::Void RequestMemory(::UnityEngine::Animator* animator, ::MoleMole::Photo::Skeleton* skeleton, ::Foundation::NativeMemoryBuilder* builder, ::System::Span_1_9011FAD97750D224<::Foundation::NativeMemoryRequestHandle> output)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::MoleMole::Photo::Skeleton*, ::Foundation::NativeMemoryBuilder*, ::System::Span_1_9011FAD97750D224<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FRONTCAMERAPROCESSBLENDSPACEPOSECONFIG_REQUESTMEMORY_OFFSET))(this, animator, skeleton, builder, output);
		}
	};
}
