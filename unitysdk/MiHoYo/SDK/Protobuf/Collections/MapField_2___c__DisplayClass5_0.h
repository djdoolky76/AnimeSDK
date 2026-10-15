#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class EqualityComparer_1; }

namespace MiHoYo::SDK::Protobuf::Collections
{
	template <typename T1, typename T2>
	class MapField_2___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::EqualityComparer_1<T1>* comparer; // 0x0
		T2 value; // 0x0
	};
}
