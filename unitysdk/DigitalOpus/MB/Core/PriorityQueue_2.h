#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IComparer_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int PriorityQueue_2_TypeDefinitionIndex = 96271;

	template <typename T1, typename T2>
	class PriorityQueue_2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<T1, T2>>* _baseHeap; // 0x0
		::System::Collections::Generic::IComparer_1<T1>* _comparer; // 0x0
	};
}
