#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace System::Collections::Generic
{
	inline static constexpr unsigned int Dictionary_2_ValueCollection_TypeDefinitionIndex = 1540;

	template <typename T1, typename T2>
	class Dictionary_2_ValueCollection : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<T1, T2>* dictionary; // 0x0
	};
}
