#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Foundation
{
	inline static constexpr unsigned int TwoDimensionalTable_3_TypeDefinitionIndex = 8473;

	template <typename T1, typename T2, typename T3>
	class TwoDimensionalTable_3 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* _Data; // 0x0
	};
}
