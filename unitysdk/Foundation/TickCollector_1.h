#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { template <typename T> class TickFunction_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Foundation
{
	inline static constexpr unsigned int TickCollector_1_TypeDefinitionIndex = 8736;

	template <typename T>
	class TickCollector_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* _nodes; // 0x0
		::System::Collections::Generic::List_1<::System::Object*>* _timeList; // 0x0
		::System::Collections::Generic::List_1<::System::Object*>* _functionList; // 0x0
		::System::Collections::Generic::Dictionary_2<::Foundation::TickFunction_1<T>*, ::System::Int32>* _functionListLookUpTable; // 0x0
		::System::Int32 _lastFunctionListIndex; // 0x0
		::System::Object* _lastTimeList; // 0x0
		::System::Object* _firstTimeHeader; // 0x0
	};
}
