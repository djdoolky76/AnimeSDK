#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

namespace Foundation
{
	inline static constexpr unsigned int DictionaryPoolInstance_2_TypeDefinitionIndex = 8037;

	template <typename T1, typename T2>
	class DictionaryPoolInstance_2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Collections::Generic::IEqualityComparer_1<T1>*, ::System::Collections::Generic::Stack_1<::System::Collections::Generic::Dictionary_2<T1, T2>*>*>* dict; // 0x0
	};
}
