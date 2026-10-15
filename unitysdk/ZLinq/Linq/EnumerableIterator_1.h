#pragma once
#include "unitysdk/unitysdk.h"
namespace ZLinq::Linq { template <typename T> class EnumerableIterator_1; }

namespace ZLinq::Linq
{
	template <typename T>
	class EnumerableIterator_1
	{
	public:
		static ::ZLinq::Linq::EnumerableIterator_1<T>** StaticGet_Instance()
		{
			return (::ZLinq::Linq::EnumerableIterator_1<T>**)UnitySDK::FromName("ZLinq.Linq", "EnumerableIterator`1")->GetStaticField(0x0);
		}

	};
}
