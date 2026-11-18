#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Photo/BlendSpaceBlendParameter.h"
#include "unitysdk/Foundation/NativeMemoryRequestHandle.h"
#include "unitysdk/Foundation/NativeVariableArray_1.h"
#include "unitysdk/LPGMNLJENKC.h"
#include "unitysdk/OFCIPACMFFN.h"
#include "unitysdk/PMBCHGNJMKF.h"
#include "unitysdk/System/ReadOnlySpan_1_F48FB86071006F3E.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Animations/AnimationMixerPlayable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

class COFDMCMAOEK;
namespace Foundation { class NativeMemory; }
namespace Foundation { class NativeMemoryBuilder; }
namespace MoleMole::Photo { class BlendSpace1DSample; }
namespace MoleMole::Photo { class Skeleton; }
namespace UnityEngine { class Animator; }

#define MOLEMOLE_PHOTO_PLAYABLEBLENDSPACE1DCONFIG_CREATEBLENDSPACE_OFFSET UNITYSDK_OFFSET(0x14BBF7B0)
#define MOLEMOLE_PHOTO_PLAYABLEBLENDSPACE1DCONFIG_CREATEPLAYABLEBEHAVIOUR_OFFSET UNITYSDK_OFFSET(0x14BBD6C0)
#define MOLEMOLE_PHOTO_PLAYABLEBLENDSPACE1DCONFIG_GET_ALLOCCOUNT_OFFSET UNITYSDK_OFFSET(0x14BC0280)
#define MOLEMOLE_PHOTO_PLAYABLEBLENDSPACE1DCONFIG_GET_BLENDINPUTALLOCINDEX_OFFSET UNITYSDK_OFFSET(0x14BC0240)
#define MOLEMOLE_PHOTO_PLAYABLEBLENDSPACE1DCONFIG_GET_BLENDSAMPLESALLOCINDEX_OFFSET UNITYSDK_OFFSET(0x14BC0250)
#define MOLEMOLE_PHOTO_PLAYABLEBLENDSPACE1DCONFIG_GET_BLENDSEGMENTSALLOCINDEX_OFFSET UNITYSDK_OFFSET(0x14BC0260)
#define MOLEMOLE_PHOTO_PLAYABLEBLENDSPACE1DCONFIG_GET_BLENDWEIGHTALLOCINDEX_OFFSET UNITYSDK_OFFSET(0x14BC0270)
#define MOLEMOLE_PHOTO_PLAYABLEBLENDSPACE1DCONFIG_GET_DYNAMICMEMORYCOUNT_OFFSET UNITYSDK_OFFSET(0x14BBA110)
#define MOLEMOLE_PHOTO_PLAYABLEBLENDSPACE1DCONFIG_INITIALIZE_1_OFFSET UNITYSDK_OFFSET(0x14BBF3B0)
#define MOLEMOLE_PHOTO_PLAYABLEBLENDSPACE1DCONFIG_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x14BBEFF0)
#define MOLEMOLE_PHOTO_PLAYABLEBLENDSPACE1DCONFIG_REQUESTMEMORY_OFFSET UNITYSDK_OFFSET(0x14BBFB70)
#define MOLEMOLE_PHOTO_PLAYABLEBLENDSPACE1DCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x14BBCF60)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int PlayableBlendSpace1DConfig_TypeDefinitionIndex = 55536;

	class PlayableBlendSpace1DConfig
	{
	public:
		::Il2CppArray<::MoleMole::Photo::BlendSpace1DSample*>* samples; // 0x10
		::System::Single initialSampleTime; // 0x18
		::System::Single initialNormalizedTime; // 0x1C
		::System::Boolean isLooping; // 0x20
		::System::Byte _padding0[0x3];
		::MoleMole::Photo::BlendSpaceBlendParameter blendParameter; // 0x24
		::System::Boolean useExternalInput; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEBLENDSPACE1DCONFIG__CTOR_OFFSET))(this);
		}

		::System::Int32 get_DynamicMemoryCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEBLENDSPACE1DCONFIG_GET_DYNAMICMEMORYCOUNT_OFFSET))(this);
		}

		::COFDMCMAOEK* CreatePlayableBehaviour(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Animator* animator, ::PMBCHGNJMKF& context, ::Foundation::NativeMemory* memory, ::System::ReadOnlySpan_1_F48FB86071006F3E<::Foundation::NativeMemoryRequestHandle> variables)
		{
			return ((::COFDMCMAOEK*(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Animator*, ::PMBCHGNJMKF&, ::Foundation::NativeMemory*, ::System::ReadOnlySpan_1_F48FB86071006F3E<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEBLENDSPACE1DCONFIG_CREATEPLAYABLEBEHAVIOUR_OFFSET))(this, graph, animator, context, memory, variables);
		}

		::System::Void Initialize(::System::Span_1_9011FAD97750D224<::System::ValueTuple_2<::System::Single, ::System::Int32>> sampleTimes, ::Foundation::NativeVariableArray_1<::OFCIPACMFFN> blendSamples)
		{
			return ((::System::Void(*)(::PVOID, ::System::Span_1_9011FAD97750D224<::System::ValueTuple_2<::System::Single, ::System::Int32>>, ::Foundation::NativeVariableArray_1<::OFCIPACMFFN>))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEBLENDSPACE1DCONFIG_INITIALIZE_OFFSET))(this, sampleTimes, blendSamples);
		}

		::System::Void Initialize_1(::Il2CppArray<::System::ValueTuple_2<::System::Single, ::System::Int32>>* sampleTimes, ::Foundation::NativeVariableArray_1<::LPGMNLJENKC> blendSegments)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::ValueTuple_2<::System::Single, ::System::Int32>>*, ::Foundation::NativeVariableArray_1<::LPGMNLJENKC>))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEBLENDSPACE1DCONFIG_INITIALIZE_1_OFFSET))(this, sampleTimes, blendSegments);
		}

		::UnityEngine::Animations::AnimationMixerPlayable CreateBlendSpace(::UnityEngine::Playables::PlayableGraph graph, ::System::Int32 sampleCount)
		{
			return ((::UnityEngine::Animations::AnimationMixerPlayable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEBLENDSPACE1DCONFIG_CREATEBLENDSPACE_OFFSET))(this, graph, sampleCount);
		}

		::System::Void RequestMemory(::UnityEngine::Animator* animator, ::MoleMole::Photo::Skeleton* skeleton, ::Foundation::NativeMemoryBuilder* builder, ::System::Span_1_9011FAD97750D224<::Foundation::NativeMemoryRequestHandle> output)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::MoleMole::Photo::Skeleton*, ::Foundation::NativeMemoryBuilder*, ::System::Span_1_9011FAD97750D224<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEBLENDSPACE1DCONFIG_REQUESTMEMORY_OFFSET))(this, animator, skeleton, builder, output);
		}

		::System::Int32 get_BlendInputAllocIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEBLENDSPACE1DCONFIG_GET_BLENDINPUTALLOCINDEX_OFFSET))(this);
		}

		::System::Int32 get_BlendSamplesAllocIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEBLENDSPACE1DCONFIG_GET_BLENDSAMPLESALLOCINDEX_OFFSET))(this);
		}

		::System::Int32 get_BlendSegmentsAllocIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEBLENDSPACE1DCONFIG_GET_BLENDSEGMENTSALLOCINDEX_OFFSET))(this);
		}

		::System::Int32 get_BlendWeightAllocIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEBLENDSPACE1DCONFIG_GET_BLENDWEIGHTALLOCINDEX_OFFSET))(this);
		}

		::System::Int32 get_AllocCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEBLENDSPACE1DCONFIG_GET_ALLOCCOUNT_OFFSET))(this);
		}
	};
}
