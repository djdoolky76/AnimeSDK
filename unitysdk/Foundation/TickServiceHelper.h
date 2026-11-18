#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/TickContext.h"
#include "unitysdk/Foundation/TickTime.h"

#define FOUNDATION_TICKSERVICEHELPER_GETTIMEHASH_OFFSET UNITYSDK_OFFSET(0x1F865240)
#define FOUNDATION_TICKSERVICEHELPER_PASS_OFFSET UNITYSDK_OFFSET(0x1F865250)

namespace Foundation
{
	inline static constexpr unsigned int TickServiceHelper_TypeDefinitionIndex = 9095;

	class TickServiceHelper : public ::System::Object
	{
	public:
		static ::System::Int64 GetTimeHash(::System::Double time)
		{
			return ((::System::Int64(*)(::System::Double))((::PBYTE)hIl2Cpp + FOUNDATION_TICKSERVICEHELPER_GETTIMEHASH_OFFSET))(time);
		}

		static ::System::Boolean Pass(::Foundation::TickContext& context, ::System::Int32 tickingGroup, ::Foundation::TickTime tickTime)
		{
			return ((::System::Boolean(*)(::Foundation::TickContext&, ::System::Int32, ::Foundation::TickTime))((::PBYTE)hIl2Cpp + FOUNDATION_TICKSERVICEHELPER_PASS_OFFSET))(context, tickingGroup, tickTime);
		}
	};
}
