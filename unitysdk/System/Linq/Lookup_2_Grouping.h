#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

namespace System::Linq
{
	template <typename T1, typename T2>
	class Lookup_2_Grouping : public ::System::Object
	{
	public:
		T1 key; // 0x0
		::System::Int32 hashCode; // 0x0
		::Il2CppArray<T2>* elements; // 0x0
		::System::Int32 count; // 0x0
		::System::Object* hashNext; // 0x0
		::System::Object* next; // 0x0
	};
}
