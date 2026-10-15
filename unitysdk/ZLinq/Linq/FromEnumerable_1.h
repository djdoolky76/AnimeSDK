#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZLinq/Linq/FromEnumerableContent.h"
namespace ZLinq::Linq { template <typename T> class CollectionIterator_1; }

namespace ZLinq::Linq
{
	template <typename T>
	struct alignas(8) FromEnumerable_1
	{
		::ZLinq::Linq::CollectionIterator_1<T>* iterator; // 0x0
		::ZLinq::Linq::FromEnumerableContent content; // 0x0
	};
}
