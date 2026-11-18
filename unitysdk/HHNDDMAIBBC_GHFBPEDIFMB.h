#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GEODLJNBBDA.h"
#include "unitysdk/HJDBFHLNIGO.h"
#include "unitysdk/MGLBBPGOGFK.h"
#include "unitysdk/System/ValueType.h"

#define HHNDDMAIBBC_GHFBPEDIFMB__CTOR_1_OFFSET UNITYSDK_OFFSET(0x4376A0)
#define HHNDDMAIBBC_GHFBPEDIFMB__CTOR_2_OFFSET UNITYSDK_OFFSET(0x7442F0)
#define HHNDDMAIBBC_GHFBPEDIFMB__CTOR_OFFSET UNITYSDK_OFFSET(0x7442C0)

inline static constexpr unsigned int HHNDDMAIBBC_GHFBPEDIFMB_TypeDefinitionIndex = 89445;

struct alignas(4) HHNDDMAIBBC_GHFBPEDIFMB
{
	::MGLBBPGOGFK LLINHLAGHCK; // 0x10
	::HJDBFHLNIGO KOJHOOEPCBN; // 0x10
	::GEODLJNBBDA PDOMJOMLMMM; // 0x10

	::System::Void _ctor(::MGLBBPGOGFK ABJOBELOMEE)
	{
		return ((::System::Void(*)(::PVOID, ::MGLBBPGOGFK))((::PBYTE)hIl2Cpp + HHNDDMAIBBC_GHFBPEDIFMB__CTOR_OFFSET))(this, ABJOBELOMEE);
	}

	::System::Void _ctor_1(::HJDBFHLNIGO GHGFHDOMJBL)
	{
		return ((::System::Void(*)(::PVOID, ::HJDBFHLNIGO))((::PBYTE)hIl2Cpp + HHNDDMAIBBC_GHFBPEDIFMB__CTOR_1_OFFSET))(this, GHGFHDOMJBL);
	}

	::System::Void _ctor_2(::GEODLJNBBDA DKMCMJOACMB)
	{
		return ((::System::Void(*)(::PVOID, ::GEODLJNBBDA))((::PBYTE)hIl2Cpp + HHNDDMAIBBC_GHFBPEDIFMB__CTOR_2_OFFSET))(this, DKMCMJOACMB);
	}
};
