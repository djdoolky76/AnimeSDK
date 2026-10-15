#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Linq { template <typename T1, typename T2> class IGrouping_2; }
namespace System::Linq { template <typename T1, typename T2> class Lookup_2; }

namespace System::Linq
{
	inline static constexpr unsigned int Lookup_2__GetEnumerator_d__12_TypeDefinitionIndex = 3173;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12>
	class Lookup_2__GetEnumerator_d__12 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		::System::Linq::IGrouping_2<T1, T2>* __2__current; // 0x0
		::System::Linq::Lookup_2<T1, T2>* __4__this; // 0x0
		::System::Object* _g_5__1; // 0x0
	};
}
