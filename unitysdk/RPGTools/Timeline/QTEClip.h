#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
namespace RPGTools::Timeline { class QTEData; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_QTECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xF40BAE0)
#define RPGTOOLS_TIMELINE_QTECLIP_CTOR_OFFSET UNITYSDK_OFFSET(0xF40BC80)
#define RPGTOOLS_TIMELINE_QTECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xF40BC70)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int QTEClip_TypeDefinitionIndex = 49300;

	class QTEClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::RPGTools::Timeline::QTEData* Config; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_QTECLIP_CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_QTECLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_QTECLIP_GET_CLIPCAPS_OFFSET))(this);
		}

	};
}
