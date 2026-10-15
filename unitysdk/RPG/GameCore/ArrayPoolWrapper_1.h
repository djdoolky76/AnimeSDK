#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine::Buffers { template <typename T> class ArrayPool_1; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int ArrayPoolWrapper_1_TypeDefinitionIndex = 56334;

	template <typename T>
	struct alignas(4) ArrayPoolWrapper_1
	{
		static ::UnityEngine::Buffers::ArrayPool_1<T>** StaticGet__unitySharedArrayPool()
		{
			return (::UnityEngine::Buffers::ArrayPool_1<T>**)UnitySDK::FromName("RPG.GameCore", "ArrayPoolWrapper`1")->GetStaticField(0x0);
		}

		// static const ::System::Object alignment; // 0x0
	};
}
