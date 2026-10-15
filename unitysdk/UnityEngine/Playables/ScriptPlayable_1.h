#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableHandle.h"

namespace UnityEngine::Playables
{
	inline static constexpr unsigned int ScriptPlayable_1_TypeDefinitionIndex = 4926;

	template <typename T>
	struct alignas(4) ScriptPlayable_1
	{
		::UnityEngine::Playables::PlayableHandle m_Handle; // 0x0
		static ::UnityEngine::Playables::ScriptPlayable_1<T>* StaticGet_m_NullPlayable()
		{
			return (::UnityEngine::Playables::ScriptPlayable_1<T>*)UnitySDK::FromName("UnityEngine.Playables", "ScriptPlayable`1")->GetStaticField(0x0);
		}

	};
}
