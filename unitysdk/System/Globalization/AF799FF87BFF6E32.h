#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B49249DC2FFA1167.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/ValueType.h"

#define SYSTEM_GLOBALIZATION_AF799FF87BFF6E32__CTOR_OFFSET UNITYSDK_OFFSET(0x2767A50)

namespace System::Globalization
{
	inline static constexpr unsigned int AF799FF87BFF6E32_TypeDefinitionIndex = 10446;

	struct alignas(4) AF799FF87BFF6E32
	{
		::System::DateTime F328E4D8818B1E12; // 0x10
		::System::DateTime BB358CFF026A8B5B; // 0x18
		::B49249DC2FFA1167 F2A47BB74A6B0EC1; // 0x20

		::System::Void _ctor(::System::DateTime BC37316376A565D9, ::System::DateTime F53169E3300C680F, ::B49249DC2FFA1167 FAE7AC8ADF38B0EF)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime, ::System::DateTime, ::B49249DC2FFA1167))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_AF799FF87BFF6E32__CTOR_OFFSET))(this, BC37316376A565D9, F53169E3300C680F, FAE7AC8ADF38B0EF);
		}
	};
}
