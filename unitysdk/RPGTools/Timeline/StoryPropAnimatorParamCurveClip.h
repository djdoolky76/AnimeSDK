#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
namespace RPGTools::Timeline { class StoryPropAnimatorParamCurveBehaviour; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_STORYPROPANIMATORPARAMCURVECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1DA258A0)
#define RPGTOOLS_TIMELINE_STORYPROPANIMATORPARAMCURVECLIP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA25A10)
#define RPGTOOLS_TIMELINE_STORYPROPANIMATORPARAMCURVECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1DA25890)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int StoryPropAnimatorParamCurveClip_TypeDefinitionIndex = 49275;

	class StoryPropAnimatorParamCurveClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::RPGTools::Timeline::StoryPropAnimatorParamCurveBehaviour* Template; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYPROPANIMATORPARAMCURVECLIP_CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYPROPANIMATORPARAMCURVECLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYPROPANIMATORPARAMCURVECLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

	};
}
