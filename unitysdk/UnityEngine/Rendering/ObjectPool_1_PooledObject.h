#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine::Rendering { template <typename T> class ObjectPool_1; }

namespace UnityEngine::Rendering
{
	template <typename T>
	struct alignas(8) ObjectPool_1_PooledObject
	{
		T m_ToReturn; // 0x0
		::UnityEngine::Rendering::ObjectPool_1<T>* m_Pool; // 0x0
	};
}
