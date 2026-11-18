#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace MoleMole::Timeline { class LightCompBehaviour; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Light; }

#define MOLEMOLE_TIMELINE_LIGHTCOMPCLIP_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x13F27210)
#define MOLEMOLE_TIMELINE_LIGHTCOMPCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x13F26FB0)
#define MOLEMOLE_TIMELINE_LIGHTCOMPCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x13F26FA0)
#define MOLEMOLE_TIMELINE_LIGHTCOMPCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x13F27100)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int LightCompClip_TypeDefinitionIndex = 86828;

	class LightCompClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::MoleMole::Timeline::LightCompBehaviour* template_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIGHTCOMPCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIGHTCOMPCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::UnityEngine::GameObject* AMNIHACKELI)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIGHTCOMPCLIP_CREATEPLAYABLE_OFFSET))(this, MHPNGBGGMMN, AMNIHACKELI);
		}

		::System::Void CNHBDOMKKDE(::UnityEngine::Light* NLFGBFCCCLJ)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Light*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIGHTCOMPCLIP_CNHBDOMKKDE_OFFSET))(this, NLFGBFCCCLJ);
		}
	};
}
