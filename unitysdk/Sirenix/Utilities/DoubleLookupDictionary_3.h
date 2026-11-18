#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

namespace Sirenix::Utilities
{
	inline static constexpr unsigned int DoubleLookupDictionary_3_TypeDefinitionIndex = 6488;

	template <typename T1, typename T2, typename T3>
	class DoubleLookupDictionary_3
	{
	public:
		::System::Collections::Generic::IEqualityComparer_1<T1>* secondKeyComparer; // 0x0
	};
}
