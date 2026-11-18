#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/PlayableOutputHandle.h"

namespace System { class String; }
namespace UnityEngine { class Animator; }

#define UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEGRAPHEXTENSIONS_INTERNALCREATEANIMATIONOUTPUT_OFFSET UNITYSDK_OFFSET(0x2005FC50)
#define UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEGRAPHEXTENSIONS_INTERNALSYNCUPDATEANDTIMEMODE_OFFSET UNITYSDK_OFFSET(0x2005FC40)
#define UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEGRAPHEXTENSIONS_SYNCUPDATEANDTIMEMODE_OFFSET UNITYSDK_OFFSET(0x2005FA60)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int AnimationPlayableGraphExtensions_TypeDefinitionIndex = 6689;

	class AnimationPlayableGraphExtensions : public ::System::Object
	{
	public:
		static ::System::Void SyncUpdateAndTimeMode(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Animator* animator)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEGRAPHEXTENSIONS_SYNCUPDATEANDTIMEMODE_OFFSET))(graph, animator);
		}

		static ::System::Boolean InternalCreateAnimationOutput(::UnityEngine::Playables::PlayableGraph& graph, ::System::String* name, ::UnityEngine::Playables::PlayableOutputHandle& handle)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph&, ::System::String*, ::UnityEngine::Playables::PlayableOutputHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEGRAPHEXTENSIONS_INTERNALCREATEANIMATIONOUTPUT_OFFSET))(graph, name, handle);
		}

		static ::System::Void InternalSyncUpdateAndTimeMode(::UnityEngine::Playables::PlayableGraph& graph, ::UnityEngine::Animator* animator)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableGraph&, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEGRAPHEXTENSIONS_INTERNALSYNCUPDATEANDTIMEMODE_OFFSET))(graph, animator);
		}
	};
}
