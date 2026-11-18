#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace MoleMole { class UIAvatarGraphics; }
namespace MoleMole::Timeline::AvatarGraphics { class AvatarGraphicsBehavior; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_AVATARGRAPHICS_AVATARGRAPHICSCLIP_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x13A08130)
#define MOLEMOLE_TIMELINE_AVATARGRAPHICS_AVATARGRAPHICSCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x13A07F50)
#define MOLEMOLE_TIMELINE_AVATARGRAPHICS_AVATARGRAPHICSCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x13A07F40)
#define MOLEMOLE_TIMELINE_AVATARGRAPHICS_AVATARGRAPHICSCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x13A080A0)

namespace MoleMole::Timeline::AvatarGraphics
{
	inline static constexpr unsigned int AvatarGraphicsClip_TypeDefinitionIndex = 62914;

	class AvatarGraphicsClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::MoleMole::Timeline::AvatarGraphics::AvatarGraphicsBehavior* recorder; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARGRAPHICS_AVATARGRAPHICSCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARGRAPHICS_AVATARGRAPHICSCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::UnityEngine::GameObject* AMNIHACKELI)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARGRAPHICS_AVATARGRAPHICSCLIP_CREATEPLAYABLE_OFFSET))(this, MHPNGBGGMMN, AMNIHACKELI);
		}

		::System::Void CNHBDOMKKDE(::MoleMole::UIAvatarGraphics* HANEFIAGDEF)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarGraphics*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARGRAPHICS_AVATARGRAPHICSCLIP_CNHBDOMKKDE_OFFSET))(this, HANEFIAGDEF);
		}
	};
}
