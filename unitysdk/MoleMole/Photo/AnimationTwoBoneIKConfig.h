#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Photo/AnimationTwoBoneIKFlag.h"
#include "unitysdk/PipelineCamera/SerializableHashString.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/Foundation/NativeMemoryRequestHandle.h"
#include "unitysdk/GFAHOCFKDNI.h"
#include "unitysdk/PMBCHGNJMKF.h"
#include "unitysdk/System/ReadOnlySpan_1_F48FB86071006F3E.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace Foundation { class NativeMemory; }
namespace Foundation { class NativeMemoryBuilder; }
namespace MoleMole::Photo { class PlayableGraphFloatAttributeConfig; }
namespace MoleMole::Photo { class Skeleton; }
namespace UnityEngine { class Animator; }

#define MOLEMOLE_PHOTO_ANIMATIONTWOBONEIKCONFIG_CREATEJOBDATA_OFFSET UNITYSDK_OFFSET(0x146A6020)
#define MOLEMOLE_PHOTO_ANIMATIONTWOBONEIKCONFIG_GET_DYNAMICMEMORYCOUNT_OFFSET UNITYSDK_OFFSET(0x146A6010)
#define MOLEMOLE_PHOTO_ANIMATIONTWOBONEIKCONFIG_REQUESTMEMORY_OFFSET UNITYSDK_OFFSET(0x146A7010)
#define MOLEMOLE_PHOTO_ANIMATIONTWOBONEIKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x146A7450)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int AnimationTwoBoneIKConfig_TypeDefinitionIndex = 43232;

	class AnimationTwoBoneIKConfig
	{
	public:
		// static const ::System::Int32 WeightIndex = 0x0; // 0x0
		// static const ::System::Int32 SolverIndex = 0x1; // 0x0
		// static const ::System::Int32 EffectorIndex = 0x2; // 0x0
		// static const ::System::Int32 JointIndex = 0x3; // 0x0
		// static const ::System::Int32 Count = 0x4; // 0x0
		::PipelineCamera::SerializableHashString ikBoneName; // 0x10
		::MoleMole::Photo::AnimationTwoBoneIKFlag flag; // 0x20
		::System::Single startStretchRatio; // 0x24
		::System::Single maxStretchRatio; // 0x28
		::UnityEngine::Vector3 effectorOffset; // 0x2C
		::MoleMole::Photo::PlayableGraphFloatAttributeConfig* weight; // 0x38
		::System::Boolean allocateEffector; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONTWOBONEIKCONFIG__CTOR_OFFSET))(this);
		}

		::System::Int32 get_DynamicMemoryCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONTWOBONEIKCONFIG_GET_DYNAMICMEMORYCOUNT_OFFSET))(this);
		}

		::GFAHOCFKDNI CreateJobData(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Animator* animator, ::PMBCHGNJMKF& context, ::Foundation::NativeMemory* memory, ::System::ReadOnlySpan_1_F48FB86071006F3E<::Foundation::NativeMemoryRequestHandle> variables)
		{
			return ((::GFAHOCFKDNI(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Animator*, ::PMBCHGNJMKF&, ::Foundation::NativeMemory*, ::System::ReadOnlySpan_1_F48FB86071006F3E<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONTWOBONEIKCONFIG_CREATEJOBDATA_OFFSET))(this, graph, animator, context, memory, variables);
		}

		::System::Void RequestMemory(::UnityEngine::Animator* animator, ::MoleMole::Photo::Skeleton* skeleton, ::Foundation::NativeMemoryBuilder* builder, ::System::Span_1_9011FAD97750D224<::Foundation::NativeMemoryRequestHandle> output)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::MoleMole::Photo::Skeleton*, ::Foundation::NativeMemoryBuilder*, ::System::Span_1_9011FAD97750D224<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONTWOBONEIKCONFIG_REQUESTMEMORY_OFFSET))(this, animator, skeleton, builder, output);
		}
	};
}
