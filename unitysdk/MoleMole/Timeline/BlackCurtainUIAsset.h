#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace MoleMole::Timeline { class BlackCurtainUIBehavior; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_BLACKCURTAINUIASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x131285A0)
#define MOLEMOLE_TIMELINE_BLACKCURTAINUIASSET_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x131286F0)
#define MOLEMOLE_TIMELINE_BLACKCURTAINUIASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x13128700)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int BlackCurtainUIAsset_TypeDefinitionIndex = 87626;

	class BlackCurtainUIAsset : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::MoleMole::Timeline::BlackCurtainUIBehavior* Setting; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_BLACKCURTAINUIASSET__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::UnityEngine::GameObject* AMNIHACKELI)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_BLACKCURTAINUIASSET_CREATEPLAYABLE_OFFSET))(this, MHPNGBGGMMN, AMNIHACKELI);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_BLACKCURTAINUIASSET_GET_CLIPCAPS_OFFSET))(this);
		}
	};
}
