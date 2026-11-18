#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/TimePeriodType.h"
#include "unitysdk/MoleMole/Config/WeatherType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define MOLEMOLE_WEATHERV1CASTV2ENTRY_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0x71EC80)

namespace MoleMole
{
	inline static constexpr unsigned int WeatherV1CastV2Entry_TypeDefinitionIndex = 55240;

	struct alignas(8) WeatherV1CastV2Entry
	{
		::MoleMole::Config::TimePeriodType timePeriodType; // 0x10
		::MoleMole::Config::WeatherType weatherType; // 0x14
		::System::String* castKey; // 0x18

		::System::Boolean FFCPIEDHBDP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WEATHERV1CASTV2ENTRY_FFCPIEDHBDP_OFFSET))(this);
		}
	};
}
