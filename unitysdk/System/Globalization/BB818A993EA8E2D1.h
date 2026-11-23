#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B49249DC2FFA1167.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_GLOBALIZATION_BB818A993EA8E2D1__CTOR_OFFSET UNITYSDK_OFFSET(0x3CCE840)

namespace System::Globalization
{
	inline static constexpr unsigned int BB818A993EA8E2D1_TypeDefinitionIndex = 10646;

	class BB818A993EA8E2D1 : public ::System::Object
	{
	public:
		::System::DateTime B5494B573D328F48; // 0x10
		::System::DateTime BE8B3756040D8942; // 0x18
		::B49249DC2FFA1167 F83910C640255471; // 0x20

		::System::Void _ctor(::System::DateTime BC37316376A565D9, ::System::DateTime F53169E3300C680F, ::B49249DC2FFA1167 FAE7AC8ADF38B0EF)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime, ::System::DateTime, ::B49249DC2FFA1167))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_BB818A993EA8E2D1__CTOR_OFFSET))(this, BC37316376A565D9, F53169E3300C680F, FAE7AC8ADF38B0EF);
		}
	};
}
