#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace MoleMole::Timeline { class VisualEnvironmentOverrideBehavior; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_VISUALENVIRONMENTOVERRIDEASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1A0FE6C0)
#define MOLEMOLE_TIMELINE_VISUALENVIRONMENTOVERRIDEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0FE810)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int VisualEnvironmentOverrideAsset_TypeDefinitionIndex = 39668;

	class VisualEnvironmentOverrideAsset : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::MoleMole::Timeline::VisualEnvironmentOverrideBehavior* template_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVIRONMENTOVERRIDEASSET__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::UnityEngine::GameObject* AMNIHACKELI)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVIRONMENTOVERRIDEASSET_CREATEPLAYABLE_OFFSET))(this, MHPNGBGGMMN, AMNIHACKELI);
		}
	};
}
