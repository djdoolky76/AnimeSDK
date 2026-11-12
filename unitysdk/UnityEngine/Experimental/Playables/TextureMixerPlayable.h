#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableHandle.h"

#define UNITYENGINE_EXPERIMENTAL_PLAYABLES_TEXTUREMIXERPLAYABLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x3EB8910)
#define UNITYENGINE_EXPERIMENTAL_PLAYABLES_TEXTUREMIXERPLAYABLE_GETHANDLE_OFFSET UNITYSDK_OFFSET(0xEABF0)

namespace UnityEngine::Experimental::Playables
{
	inline static constexpr unsigned int TextureMixerPlayable_TypeDefinitionIndex = 4940;

	struct alignas(4) TextureMixerPlayable
	{
		::UnityEngine::Playables::PlayableHandle m_Handle; // 0x10
		::UnityEngine::Playables::PlayableHandle GetHandle()
		{
			return ((::UnityEngine::Playables::PlayableHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_PLAYABLES_TEXTUREMIXERPLAYABLE_GETHANDLE_OFFSET))(this);
		}

		/*
		::System::Boolean Equals(::UnityEngine::Experimental::Playables::TextureMixerPlayable a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Experimental::Playables::TextureMixerPlayable))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_PLAYABLES_TEXTUREMIXERPLAYABLE_EQUALS_OFFSET))(this, a1);
		}
		*/

	};
}
