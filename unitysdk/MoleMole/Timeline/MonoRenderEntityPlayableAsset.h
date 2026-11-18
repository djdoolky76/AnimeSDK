#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace MoleMole::Timeline { class MonoRenderEntityBehavior; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_MONORENDERENTITYPLAYABLEASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x13A0BA00)
#define MOLEMOLE_TIMELINE_MONORENDERENTITYPLAYABLEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x13A0BB50)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MonoRenderEntityPlayableAsset_TypeDefinitionIndex = 54882;

	class MonoRenderEntityPlayableAsset : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::MoleMole::Timeline::MonoRenderEntityBehavior* Recorder; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONORENDERENTITYPLAYABLEASSET__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::UnityEngine::GameObject* NJOAJLDJCCJ)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONORENDERENTITYPLAYABLEASSET_CREATEPLAYABLE_OFFSET))(this, MHPNGBGGMMN, NJOAJLDJCCJ);
		}
	};
}
