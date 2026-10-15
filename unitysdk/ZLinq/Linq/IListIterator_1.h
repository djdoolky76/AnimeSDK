#pragma once
#include "unitysdk/unitysdk.h"
namespace ZLinq::Linq { template <typename T> class IListIterator_1; }

namespace ZLinq::Linq
{
	template <typename T>
	class IListIterator_1
	{
	public:
		static ::ZLinq::Linq::IListIterator_1<T>** StaticGet_Instance()
		{
			return (::ZLinq::Linq::IListIterator_1<T>**)UnitySDK::FromName("ZLinq.Linq", "IListIterator`1")->GetStaticField(0x0);
		}

	};
}
