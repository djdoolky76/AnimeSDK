#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace MoleMole::Timeline { class NapContactShadowBehaviour; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_NAPCONTACTSHADOWCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1C0D3800)
#define MOLEMOLE_TIMELINE_NAPCONTACTSHADOWCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1C0D37F0)
#define MOLEMOLE_TIMELINE_NAPCONTACTSHADOWCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0D39E0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int NapContactShadowClip_TypeDefinitionIndex = 58601;

	class NapContactShadowClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::MoleMole::Timeline::NapContactShadowBehaviour* template_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPCONTACTSHADOWCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPCONTACTSHADOWCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::UnityEngine::GameObject* AMNIHACKELI)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPCONTACTSHADOWCLIP_CREATEPLAYABLE_OFFSET))(this, MHPNGBGGMMN, AMNIHACKELI);
		}
	};
}
