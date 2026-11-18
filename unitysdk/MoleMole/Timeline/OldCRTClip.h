#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace MoleMole::Timeline { class OldCRTBehaviour; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_OLDCRTCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x18824AB0)
#define MOLEMOLE_TIMELINE_OLDCRTCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x18824AA0)
#define MOLEMOLE_TIMELINE_OLDCRTCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x18824C90)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int OldCRTClip_TypeDefinitionIndex = 53041;

	class OldCRTClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::MoleMole::Timeline::OldCRTBehaviour* template_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_OLDCRTCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_OLDCRTCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::UnityEngine::GameObject* AMNIHACKELI)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_OLDCRTCLIP_CREATEPLAYABLE_OFFSET))(this, MHPNGBGGMMN, AMNIHACKELI);
		}
	};
}
