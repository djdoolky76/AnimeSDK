#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }

namespace System::Collections::Generic
{
	template <typename T1, typename T2>
	class SortedList_2 : public ::System::Object
	{
	public:
		::Il2CppArray<T1>* keys; // 0x0
		::Il2CppArray<T2>* values; // 0x0
		::System::Int32 _size; // 0x0
		::System::Int32 version; // 0x0
		::System::Collections::Generic::IComparer_1<T1>* comparer; // 0x0
		::System::Object* keyList; // 0x0
		::System::Object* valueList; // 0x0
		::System::Object* _syncRoot; // 0x0
	};
}
