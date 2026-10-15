#pragma once
#include "unitysdk/unitysdk.h"
namespace ZLinq::Linq { template <typename T> class ListIterator_1; }

namespace ZLinq::Linq
{
	inline static constexpr unsigned int ListIterator_1_TypeDefinitionIndex = 6100;

	template <typename T>
	class ListIterator_1
	{
	public:
		static ::ZLinq::Linq::ListIterator_1<T>** StaticGet_Instance()
		{
			return (::ZLinq::Linq::ListIterator_1<T>**)UnitySDK::FromName("ZLinq.Linq", "ListIterator`1")->GetStaticField(0x0);
		}

	};
}
