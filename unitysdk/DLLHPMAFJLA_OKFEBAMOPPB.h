#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define DLLHPMAFJLA_OKFEBAMOPPB_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0x850C40)

inline static constexpr unsigned int DLLHPMAFJLA_OKFEBAMOPPB_TypeDefinitionIndex = 61036;

	struct alignas(8) DLLHPMAFJLA_OKFEBAMOPPB
	{
		::System::String* ICGKFDEILKA; // 0x10
		::System::String* OLCHHDKKPLI; // 0x18
		::System::String* LGNNAOLPNIP; // 0x20
		::System::Int32 OFJOAMHKCBO; // 0x28
		::System::Boolean ANDIMGMEJED; // 0x2C
		::System::Boolean LDAMHBBILAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLHPMAFJLA_OKFEBAMOPPB_LDAMHBBILAD_OFFSET))(this);
		}

	};
