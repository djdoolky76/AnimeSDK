#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

namespace System::Linq
{
	inline static constexpr unsigned int Lookup_2_TypeDefinitionIndex = 3170;

	template <typename T1, typename T2>
	class Lookup_2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEqualityComparer_1<T1>* comparer; // 0x0
		::Il2CppArray<::System::Object*>* groupings; // 0x0
		::System::Object* lastGrouping; // 0x0
		::System::Int32 count; // 0x0
	};
}
