#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace UnityEngine { class GameObject; }

#define UNITYENGINE_TIMELINE_BASEPLAYABLEASSET_ASSETONCOPIED_OFFSET UNITYSDK_OFFSET(0x1FD79A30)
#define UNITYENGINE_TIMELINE_BASEPLAYABLEASSET_ASSETONCREATED_OFFSET UNITYSDK_OFFSET(0x1FD79A20)
#define UNITYENGINE_TIMELINE_BASEPLAYABLEASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1FD79970)
#define UNITYENGINE_TIMELINE_BASEPLAYABLEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1FD79A40)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int BasePlayableAsset_TypeDefinitionIndex = 32514;

	class BasePlayableAsset : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_BASEPLAYABLEASSET__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* owner)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_BASEPLAYABLEASSET_CREATEPLAYABLE_OFFSET))(this, graph, owner);
		}

		::System::Void AssetOnCreated()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_BASEPLAYABLEASSET_ASSETONCREATED_OFFSET))(this);
		}

		::System::Void AssetOnCopied()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_BASEPLAYABLEASSET_ASSETONCOPIED_OFFSET))(this);
		}
	};
}
