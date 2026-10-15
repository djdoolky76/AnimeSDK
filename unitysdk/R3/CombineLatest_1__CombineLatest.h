#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace R3 { class Observable; }
namespace R3 { template <typename T> class Observer_1; }
namespace System { class Object; }

namespace R3
{
	template <typename T>
	class CombineLatest_1__CombineLatest : public ::System::Object
	{
	public:
		::R3::Observer_1<::Il2CppArray<T>*>* observer; // 0x0
		::Il2CppArray<::R3::Observable*>* sources; // 0x0
		::Il2CppArray<::System::Object*>* observers; // 0x0
		::System::Boolean hasValueAll; // 0x0
		::System::Int32 completedCount; // 0x0
	};
}
