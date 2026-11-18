#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/MaterialBasePlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace MoleMole::Timeline { class MaterialBaseBehavior; }
namespace MoleMole::Timeline { class MaterialRecorderBehavior; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_MATERIALRECORDERPLAYABLEASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1FD784F0)
#define MOLEMOLE_TIMELINE_MATERIALRECORDERPLAYABLEASSET_GET_RECORDER_OFFSET UNITYSDK_OFFSET(0x1FD784E0)
#define MOLEMOLE_TIMELINE_MATERIALRECORDERPLAYABLEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1FD785D0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MaterialRecorderPlayableAsset_TypeDefinitionIndex = 32278;

	class MaterialRecorderPlayableAsset : public ::MoleMole::Timeline::MaterialBasePlayableAsset
	{
	public:
		::MoleMole::Timeline::MaterialRecorderBehavior* recorder; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALRECORDERPLAYABLEASSET__CTOR_OFFSET))(this);
		}

		::MoleMole::Timeline::MaterialBaseBehavior* get_Recorder()
		{
			return ((::MoleMole::Timeline::MaterialBaseBehavior*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALRECORDERPLAYABLEASSET_GET_RECORDER_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALRECORDERPLAYABLEASSET_CREATEPLAYABLE_OFFSET))(this, graph, go);
		}
	};
}
