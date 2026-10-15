#pragma once
#include "unitysdk/unitysdk.h"
namespace ZLinq::Linq { template <typename T> class IReadOnlyListIterator_1; }

namespace ZLinq::Linq
{
	template <typename T>
	class IReadOnlyListIterator_1
	{
	public:
		static ::ZLinq::Linq::IReadOnlyListIterator_1<T>** StaticGet_Instance()
		{
			return (::ZLinq::Linq::IReadOnlyListIterator_1<T>**)UnitySDK::FromName("ZLinq.Linq", "IReadOnlyListIterator`1")->GetStaticField(0x0);
		}

	};
}
