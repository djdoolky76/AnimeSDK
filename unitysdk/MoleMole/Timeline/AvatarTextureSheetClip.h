#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace MoleMole::Timeline { class AvatarTextureSheetBehaviour; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_AVATARTEXTURESHEETCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1A09AC10)
#define MOLEMOLE_TIMELINE_AVATARTEXTURESHEETCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1A09AC00)
#define MOLEMOLE_TIMELINE_AVATARTEXTURESHEETCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A09ADF0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int AvatarTextureSheetClip_TypeDefinitionIndex = 76875;

	class AvatarTextureSheetClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::MoleMole::Timeline::AvatarTextureSheetBehaviour* template_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARTEXTURESHEETCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARTEXTURESHEETCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::UnityEngine::GameObject* AMNIHACKELI)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARTEXTURESHEETCLIP_CREATEPLAYABLE_OFFSET))(this, MHPNGBGGMMN, AMNIHACKELI);
		}
	};
}
