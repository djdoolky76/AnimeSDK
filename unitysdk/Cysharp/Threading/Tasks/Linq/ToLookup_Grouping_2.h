#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int ToLookup_Grouping_2_TypeDefinitionIndex = 45692;

	template <typename T1, typename T2>
	class ToLookup_Grouping_2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<T1>* elements; // 0x0
		T2 _Key_k__BackingField; // 0x0
	};
}
