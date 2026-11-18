#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Foundation
{
	inline static constexpr unsigned int TickSequencer_1_TypeDefinitionIndex = 8800;

	template <typename T>
	class TickSequencer_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* _tickingList; // 0x0
		::System::Object* _scheduler; // 0x0
	};
}
