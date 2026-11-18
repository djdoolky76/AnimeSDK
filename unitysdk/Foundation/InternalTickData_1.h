#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { template <typename T> class ITickService_1; }

namespace Foundation
{
	inline static constexpr unsigned int InternalTickData_1_TypeDefinitionIndex = 8944;

	template <typename T>
	class InternalTickData_1 : public ::System::Object
	{
	public:
		::System::Boolean IsRegistered; // 0x0
		::System::Int32 TickGroup; // 0x0
		::System::Double LastTickTime; // 0x0
		::Foundation::ITickService_1<T>* Service; // 0x0
		::System::Int32 TickOrder; // 0x0
		::System::Int32 ScheduleIndex; // 0x0
	};
}
