#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace RPGTools::Timeline { class CRPCameraSmallWindowTemplateClip; }

#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWTEMPLATEBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xF39B0C0)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWTEMPLATEBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xF39AE70)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWTEMPLATEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xF39AE90)
#define RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWTEMPLATEBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xF39AE80)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CRPCameraSmallWindowTemplateBehaviour_TypeDefinitionIndex = 48935;

	class CRPCameraSmallWindowTemplateBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::CRPCameraSmallWindowTemplateClip* _Clip_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWTEMPLATEBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::CRPCameraSmallWindowTemplateClip* get_Clip()
		{
			return ((::RPGTools::Timeline::CRPCameraSmallWindowTemplateClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWTEMPLATEBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::CRPCameraSmallWindowTemplateClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::CRPCameraSmallWindowTemplateClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWTEMPLATEBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASMALLWINDOWTEMPLATEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

	};
}
