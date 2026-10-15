#pragma once
#include "unitysdk/unitysdk.h"
namespace ZLinq::Linq { template <typename T> class ArrayIterator_1; }

namespace ZLinq::Linq
{
	template <typename T>
	class ArrayIterator_1
	{
	public:
		static ::ZLinq::Linq::ArrayIterator_1<T>** StaticGet_Instance()
		{
			return (::ZLinq::Linq::ArrayIterator_1<T>**)UnitySDK::FromName("ZLinq.Linq", "ArrayIterator`1")->GetStaticField(0x0);
		}

	};
}
