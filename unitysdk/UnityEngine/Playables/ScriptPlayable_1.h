#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Playables/PlayableHandle.h"

namespace UnityEngine::Playables
{
	inline static constexpr unsigned int ScriptPlayable_1_TypeDefinitionIndex = 6319;

	template <typename T>
	struct alignas(4) ScriptPlayable_1
	{
		static ::UnityEngine::Playables::ScriptPlayable_1<T>* StaticGet_m_NullPlayable()
		{
			return (::UnityEngine::Playables::ScriptPlayable_1<T>*)Il2CppClass::FromTypeDefinitionIndex(ScriptPlayable_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::UnityEngine::Playables::PlayableHandle m_Handle; // 0x0
	};
}
