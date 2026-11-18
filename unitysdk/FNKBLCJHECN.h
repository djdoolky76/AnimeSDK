#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define FNKBLCJHECN_BILMHGGOBBJ_OFFSET UNITYSDK_OFFSET(0x8EAAA0)
#define FNKBLCJHECN_MJIFJLLBNEN_OFFSET UNITYSDK_OFFSET(0x8EAB50)

inline static constexpr unsigned int FNKBLCJHECN_TypeDefinitionIndex = 93837;

struct alignas(4) FNKBLCJHECN
{
	::System::Int32 KHAEIPMALIL; // 0x10

	::System::Boolean BILMHGGOBBJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FNKBLCJHECN_BILMHGGOBBJ_OFFSET))(this);
	}

	::System::Void MJIFJLLBNEN(::System::Int32 IKADKEFDLIJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FNKBLCJHECN_MJIFJLLBNEN_OFFSET))(this, IKADKEFDLIJ);
	}
};
