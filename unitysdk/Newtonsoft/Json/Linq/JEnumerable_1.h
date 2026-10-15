#pragma once
#include "unitysdk/unitysdk.h"
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

namespace Newtonsoft::Json::Linq
{
	template <typename T>
	struct alignas(8) JEnumerable_1
	{
		::System::Collections::Generic::IEnumerable_1<T>* _enumerable; // 0x0
		static ::Newtonsoft::Json::Linq::JEnumerable_1<T>* StaticGet_Empty()
		{
			return (::Newtonsoft::Json::Linq::JEnumerable_1<T>*)UnitySDK::FromName("Newtonsoft.Json.Linq", "JEnumerable`1")->GetStaticField(0x0);
		}

	};
}
