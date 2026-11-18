#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

namespace Foundation
{
	inline static constexpr unsigned int HashSetPoolInstance_1_TypeDefinitionIndex = 8299;

	template <typename T>
	class HashSetPoolInstance_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Collections::Generic::IEqualityComparer_1<T>*, ::System::Collections::Generic::Stack_1<::System::Collections::Generic::HashSet_1<T>*>*>* dict; // 0x0
	};
}
