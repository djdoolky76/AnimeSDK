#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

namespace System::Collections::Generic
{
	inline static constexpr unsigned int IDictionaryDebugView_2_TypeDefinitionIndex = 3948;

	template <typename T1, typename T2>
	class IDictionaryDebugView_2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IDictionary_2<::System::Object*, ::System::Object*>* _dict; // 0x0
	};
}
