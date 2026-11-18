#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace MoleMole::Timeline { class EDDialogBehaviour; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_EDDIALOGCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1C0C2490)
#define MOLEMOLE_TIMELINE_EDDIALOGCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1C0C2480)
#define MOLEMOLE_TIMELINE_EDDIALOGCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0C2670)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int EDDialogClip_TypeDefinitionIndex = 61825;

	class EDDialogClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::MoleMole::Timeline::EDDialogBehaviour* template_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EDDIALOGCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EDDIALOGCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::UnityEngine::GameObject* AMNIHACKELI)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EDDIALOGCLIP_CREATEPLAYABLE_OFFSET))(this, MHPNGBGGMMN, AMNIHACKELI);
		}
	};
}
