#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Foundation
{
	inline static constexpr unsigned int WriteDeferredDictionary_2_TypeDefinitionIndex = 8691;

	template <typename T1, typename T2>
	class WriteDeferredDictionary_2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<T1, T2>* _dataStorage; // 0x0
		::System::Collections::Generic::List_1<::System::Object*>* _modifyRequests; // 0x0
		::System::UInt32 lockWrite; // 0x0
		::System::Boolean _alwaysLock; // 0x0
	};
}
