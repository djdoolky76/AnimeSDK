#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NativeMemoryRequestHandle.h"
#include "unitysdk/KKHPLFDKBAM.h"
#include "unitysdk/PMBCHGNJMKF.h"
#include "unitysdk/System/ReadOnlySpan_1_F48FB86071006F3E.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace Foundation { class NativeMemory; }
namespace Foundation { class NativeMemoryBuilder; }
namespace MoleMole::Photo { class Skeleton; }
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define MOLEMOLE_PHOTO_ANIMATIONSAVECACHEDPOSECONFIG_CREATEJOBDATA_OFFSET UNITYSDK_OFFSET(0x10446F40)
#define MOLEMOLE_PHOTO_ANIMATIONSAVECACHEDPOSECONFIG_GET_DYNAMICMEMORYCOUNT_OFFSET UNITYSDK_OFFSET(0x10446F30)
#define MOLEMOLE_PHOTO_ANIMATIONSAVECACHEDPOSECONFIG_REQUESTMEMORY_OFFSET UNITYSDK_OFFSET(0x10447650)
#define MOLEMOLE_PHOTO_ANIMATIONSAVECACHEDPOSECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x10447930)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int AnimationSaveCachedPoseConfig_TypeDefinitionIndex = 55449;

	class AnimationSaveCachedPoseConfig
	{
	public:
		::System::String* cachedPoseName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONSAVECACHEDPOSECONFIG__CTOR_OFFSET))(this);
		}

		::System::Int32 get_DynamicMemoryCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONSAVECACHEDPOSECONFIG_GET_DYNAMICMEMORYCOUNT_OFFSET))(this);
		}

		::KKHPLFDKBAM CreateJobData(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Animator* animator, ::PMBCHGNJMKF& context, ::Foundation::NativeMemory* memory, ::System::ReadOnlySpan_1_F48FB86071006F3E<::Foundation::NativeMemoryRequestHandle> variables)
		{
			return ((::KKHPLFDKBAM(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Animator*, ::PMBCHGNJMKF&, ::Foundation::NativeMemory*, ::System::ReadOnlySpan_1_F48FB86071006F3E<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONSAVECACHEDPOSECONFIG_CREATEJOBDATA_OFFSET))(this, graph, animator, context, memory, variables);
		}

		::System::Void RequestMemory(::UnityEngine::Animator* animator, ::MoleMole::Photo::Skeleton* skeleton, ::Foundation::NativeMemoryBuilder* builder, ::System::Span_1_9011FAD97750D224<::Foundation::NativeMemoryRequestHandle> output)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::MoleMole::Photo::Skeleton*, ::Foundation::NativeMemoryBuilder*, ::System::Span_1_9011FAD97750D224<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONSAVECACHEDPOSECONFIG_REQUESTMEMORY_OFFSET))(this, animator, skeleton, builder, output);
		}
	};
}
