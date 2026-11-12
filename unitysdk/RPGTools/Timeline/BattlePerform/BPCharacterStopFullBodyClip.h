#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
namespace RPGTools::Timeline::BattlePerform { class BPCharacterStopFullBodyChainData; }
namespace RPGTools::Timeline::BattlePerform { class BPCharacterStopFullBodyData; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERSTOPFULLBODYCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xF393720)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERSTOPFULLBODYCLIP_CTOR_OFFSET UNITYSDK_OFFSET(0xF393990)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERSTOPFULLBODYCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xF393710)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERSTOPFULLBODYCLIP_UNITYENGINE_TIMELINE_ICUSTOMTIMELINECLIPGUI_OVERRIDEDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0xF3938B0)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERSTOPFULLBODYCLIP_UNITYENGINE_TIMELINE_ICUSTOMTIMELINECLIPGUI_OVERRIDEDURATION_OFFSET UNITYSDK_OFFSET(0xF393930)

namespace RPGTools::Timeline::BattlePerform
{
	inline static constexpr unsigned int BPCharacterStopFullBodyClip_TypeDefinitionIndex = 49853;

	class BPCharacterStopFullBodyClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::RPGTools::Timeline::BattlePerform::BPCharacterStopFullBodyData* Config; // 0x20
		::Il2CppArray<::RPGTools::Timeline::BattlePerform::BPCharacterStopFullBodyChainData*>* Chains; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERSTOPFULLBODYCLIP_CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERSTOPFULLBODYCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERSTOPFULLBODYCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::System::Boolean UnityEngine_Timeline_ICustomTimelineClipGUI_OverrideDisplayName(::UnityEngine::Timeline::TimelineClip* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERSTOPFULLBODYCLIP_UNITYENGINE_TIMELINE_ICUSTOMTIMELINECLIPGUI_OVERRIDEDISPLAYNAME_OFFSET))(this, a1, a2);
		}

		::System::Boolean UnityEngine_Timeline_ICustomTimelineClipGUI_OverrideDuration(::UnityEngine::Timeline::TimelineClip* a1, ::System::Double a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*, ::System::Double))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERSTOPFULLBODYCLIP_UNITYENGINE_TIMELINE_ICUSTOMTIMELINECLIPGUI_OVERRIDEDURATION_OFFSET))(this, a1, a2);
		}

	};
}
