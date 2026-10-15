#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_CRPCAMERASPLITSCREENTEMPLATECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE8C21A0)
#define RPGTOOLS_TIMELINE_CRPCAMERASPLITSCREENTEMPLATECLIP_CTOR_OFFSET UNITYSDK_OFFSET(0xE8C2360)
#define RPGTOOLS_TIMELINE_CRPCAMERASPLITSCREENTEMPLATECLIP_DHKKJOCBPDK_OFFSET UNITYSDK_OFFSET(0xE8C2130)
#define RPGTOOLS_TIMELINE_CRPCAMERASPLITSCREENTEMPLATECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xE8C2190)
#define RPGTOOLS_TIMELINE_CRPCAMERASPLITSCREENTEMPLATECLIP_GIOKIMNFJDP_OFFSET UNITYSDK_OFFSET(0xE8C2300)

namespace RPGTools::Timeline
{
	class CRPCameraSplitScreenTemplateClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* LeftActorUniqueNames; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* LeftTimelineEffectUniqueNames; // 0x20
		::System::Collections::Generic::List_1<::System::String*>* RightActorUniqueNames; // 0x28
		::System::Collections::Generic::List_1<::System::String*>* RightTimelineEffectUniqueNames; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASPLITSCREENTEMPLATECLIP_CTOR_OFFSET))(this);
		}

		::System::String* DHKKJOCBPDK()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASPLITSCREENTEMPLATECLIP_DHKKJOCBPDK_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASPLITSCREENTEMPLATECLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASPLITSCREENTEMPLATECLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::String*>* GIOKIMNFJDP()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASPLITSCREENTEMPLATECLIP_GIOKIMNFJDP_OFFSET))(this);
		}

	};
}
