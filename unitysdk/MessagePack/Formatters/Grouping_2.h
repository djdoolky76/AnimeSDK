#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

namespace MessagePack::Formatters
{
	template <typename T1, typename T2>
	class Grouping_2 : public ::System::Object
	{
	public:
		T1 key; // 0x0
		::System::Collections::Generic::IEnumerable_1<T2>* elements; // 0x0
	};
}
