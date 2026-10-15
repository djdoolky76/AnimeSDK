#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

namespace ZLinq::Internal
{
	template <typename T>
	class HashSetSlim_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEqualityComparer_1<T>* comparer; // 0x0
		::Il2CppArray<::System::Object*>* entries; // 0x0
		::Il2CppArray<::System::Int32>* buckets; // 0x0
		::System::Int32 bucketsLength; // 0x0
		::System::Int32 entryIndex; // 0x0
		::System::Int32 resizeThreshold; // 0x0
	};
}
