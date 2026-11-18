#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int DefaultContractResolver_EnumerableDictionaryWrapper_2_TypeDefinitionIndex = 7109;

	template <typename T1, typename T2>
	class DefaultContractResolver_EnumerableDictionaryWrapper_2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<T1, T2>>* _e; // 0x0
	};
}
