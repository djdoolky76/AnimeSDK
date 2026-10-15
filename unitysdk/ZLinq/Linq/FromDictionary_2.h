#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace ZLinq::Linq
{
	template <typename T1, typename T2>
	struct alignas(8) FromDictionary_2
	{
		::System::Collections::Generic::Dictionary_2<T1, T2>* _source_P; // 0x0
		::System::Boolean isInit; // 0x0
		::System::Object* enumerator; // 0x0
	};
}
