#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

namespace MiHoYo::SDK::Protobuf::Collections
{
	template <typename T1, typename T2>
	class ReadOnlyDictionary_2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IDictionary_2<T1, T2>* wrapped; // 0x0
	};
}
