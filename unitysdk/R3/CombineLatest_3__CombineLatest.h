#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace R3 { template <typename T> class Observable_1; }
namespace R3 { template <typename T> class Observer_1; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

namespace R3
{
	inline static constexpr unsigned int CombineLatest_3__CombineLatest_TypeDefinitionIndex = 35934;

	template <typename T1, typename T2, typename T3>
	class CombineLatest_3__CombineLatest : public ::System::Object
	{
	public:
		::R3::Observer_1<T1>* observer; // 0x0
		::R3::Observable_1<T2>* source1; // 0x0
		::R3::Observable_1<T3>* source2; // 0x0
		::System::Func_3<T2, T3, T1>* resultSelector; // 0x0
		::System::Object* observer1; // 0x0
		::System::Object* observer2; // 0x0
		::System::Object* gate; // 0x0
		::System::Boolean hasValueAll; // 0x0
		::System::Int32 completedCount; // 0x0
	};
}
