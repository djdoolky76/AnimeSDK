#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Collections::Pooled { template <typename T1, typename T2> class PooledDictionary_2; }

namespace Collections::Pooled
{
	inline static constexpr unsigned int PooledDictionary_2_KeyCollection_TypeDefinitionIndex = 5105;

	template <typename T1, typename T2>
	class PooledDictionary_2_KeyCollection : public ::System::Object
	{
	public:
		::Collections::Pooled::PooledDictionary_2<T1, T2>* _dictionary; // 0x0
	};
}
