#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

namespace System::Linq
{
	template <typename T>
	class Set_1 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* buckets; // 0x0
		::Il2CppArray<::System::Object*>* slots; // 0x0
		::System::Int32 count; // 0x0
		::System::Int32 freeList; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<T>* comparer; // 0x0
	};
}
