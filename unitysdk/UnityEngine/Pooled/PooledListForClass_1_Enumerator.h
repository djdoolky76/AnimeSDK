#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine::Pooled { template <typename T> class PooledListForClass_1; }

namespace UnityEngine::Pooled
{
	template <typename T>
	struct alignas(8) PooledListForClass_1_Enumerator
	{
		::UnityEngine::Pooled::PooledListForClass_1<T>* _list; // 0x0
		::System::Int32 _index; // 0x0
		::System::Int32 _version; // 0x0
		T _current; // 0x0
	};
}
