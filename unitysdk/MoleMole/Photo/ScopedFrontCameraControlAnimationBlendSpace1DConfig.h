#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/NativeMemoryRequestHandle.h"
#include "unitysdk/PMBCHGNJMKF.h"
#include "unitysdk/System/ReadOnlySpan_1_F48FB86071006F3E.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

class LFDGABGKACJ;
namespace Foundation { class NativeMemory; }
namespace Foundation { class NativeMemoryBuilder; }
namespace MoleMole::Photo { class AnimationApplyDynamicAdditiveConfig; }
namespace MoleMole::Photo { class AnimationModifyCurveConfig; }
namespace MoleMole::Photo { class AnimationSaveCachedPoseConfig; }
namespace MoleMole::Photo { class AnimationTwoBoneIKConfig; }
namespace MoleMole::Photo { class AnimationUseCachedPoseConfig; }
namespace MoleMole::Photo { class FrontCameraProcessEmotionPoseConfig; }
namespace MoleMole::Photo { class PlayableBlendSpace1DConfig; }
namespace MoleMole::Photo { class ScopedFrontCameraControlEmotionConfig; }
namespace MoleMole::Photo { class Skeleton; }
namespace UnityEngine { class Animator; }

#define MOLEMOLE_PHOTO_SCOPEDFRONTCAMERACONTROLANIMATIONBLENDSPACE1DCONFIG_CREATE_OFFSET UNITYSDK_OFFSET(0x13A00320)
#define MOLEMOLE_PHOTO_SCOPEDFRONTCAMERACONTROLANIMATIONBLENDSPACE1DCONFIG_GET_DYNAMICMEMORYCOUNT_OFFSET UNITYSDK_OFFSET(0x13A01390)
#define MOLEMOLE_PHOTO_SCOPEDFRONTCAMERACONTROLANIMATIONBLENDSPACE1DCONFIG_REQUEST_OFFSET UNITYSDK_OFFSET(0x13A01520)
#define MOLEMOLE_PHOTO_SCOPEDFRONTCAMERACONTROLANIMATIONBLENDSPACE1DCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x13A02950)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int ScopedFrontCameraControlAnimationBlendSpace1DConfig_TypeDefinitionIndex = 67789;

	class ScopedFrontCameraControlAnimationBlendSpace1DConfig : public ::System::Object
	{
	public:
		::MoleMole::Photo::PlayableBlendSpace1DConfig* blendSpace; // 0x10
		::MoleMole::Photo::AnimationSaveCachedPoseConfig* saveEmotionPose; // 0x18
		::MoleMole::Photo::FrontCameraProcessEmotionPoseConfig* prepareData; // 0x20
		::MoleMole::Photo::AnimationUseCachedPoseConfig* useEmotionPose; // 0x28
		::MoleMole::Photo::AnimationTwoBoneIKConfig* armIk; // 0x30
		::MoleMole::Photo::AnimationModifyCurveConfig* curve; // 0x38
		::MoleMole::Photo::AnimationApplyDynamicAdditiveConfig* applyAdditive; // 0x40
		::MoleMole::Photo::AnimationUseCachedPoseConfig* useCachedPose; // 0x48
		::System::Single blendIn; // 0x50
		::System::Single blendOut; // 0x54
		::MoleMole::Photo::ScopedFrontCameraControlEmotionConfig* emotionClip; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_SCOPEDFRONTCAMERACONTROLANIMATIONBLENDSPACE1DCONFIG__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable Create(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::UnityEngine::Animator* ICAAMDMMDDJ, ::PMBCHGNJMKF& AAOCANGHBDG, ::Foundation::NativeMemory* HOMNNKAIOHF, ::System::ReadOnlySpan_1_F48FB86071006F3E<::Foundation::NativeMemoryRequestHandle> BBCMGINHDNK, ::LFDGABGKACJ* ONADDIGBJCA)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Animator*, ::PMBCHGNJMKF&, ::Foundation::NativeMemory*, ::System::ReadOnlySpan_1_F48FB86071006F3E<::Foundation::NativeMemoryRequestHandle>, ::LFDGABGKACJ*))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_SCOPEDFRONTCAMERACONTROLANIMATIONBLENDSPACE1DCONFIG_CREATE_OFFSET))(this, MHPNGBGGMMN, ICAAMDMMDDJ, AAOCANGHBDG, HOMNNKAIOHF, BBCMGINHDNK, ONADDIGBJCA);
		}

		::System::Int32 get_DynamicMemoryCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_SCOPEDFRONTCAMERACONTROLANIMATIONBLENDSPACE1DCONFIG_GET_DYNAMICMEMORYCOUNT_OFFSET))(this);
		}

		::System::Void Request(::UnityEngine::Animator* ICAAMDMMDDJ, ::MoleMole::Photo::Skeleton* NEGDIIDKGIA, ::Foundation::NativeMemoryBuilder* GENNIFDPOAM, ::System::Span_1_9011FAD97750D224<::Foundation::NativeMemoryRequestHandle> AJMCCOEAIFE)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::MoleMole::Photo::Skeleton*, ::Foundation::NativeMemoryBuilder*, ::System::Span_1_9011FAD97750D224<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_SCOPEDFRONTCAMERACONTROLANIMATIONBLENDSPACE1DCONFIG_REQUEST_OFFSET))(this, ICAAMDMMDDJ, NEGDIIDKGIA, GENNIFDPOAM, AJMCCOEAIFE);
		}
	};
}
