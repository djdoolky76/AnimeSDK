#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define ENOKLCJCGOG__CTOR_OFFSET UNITYSDK_OFFSET(0x610070)

inline static constexpr unsigned int ENOKLCJCGOG_TypeDefinitionIndex = 63227;

struct alignas(4) ENOKLCJCGOG
{
	::System::Int32 CFEDGEMOCBL; // 0x10
	::System::Byte _padding0[0x4];
	::System::Int64 EICMHOLCPPA; // 0x18
	::System::Int32 CBFAEHGKIEN; // 0x20

	::System::Void _ctor(::System::Int32 GIAOKGFENJD, ::System::Int64 KKAPCLLGMII, ::System::Int32 NGEPGANANFG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + ENOKLCJCGOG__CTOR_OFFSET))(this, GIAOKGFENJD, KKAPCLLGMII, NGEPGANANFG);
	}
};
