#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace Foundation
{
	inline static constexpr unsigned int TriggerBase_2_TypeDefinitionIndex = 8443;

	template <typename T1, typename T2>
	class TriggerBase_2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>* triggers_; // 0x0
	};
}
