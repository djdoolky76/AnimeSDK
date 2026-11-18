#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define ILDKCGCLCOO_LOGMNFFOOCB_OFFSET UNITYSDK_OFFSET(0x165844D0)

inline static constexpr unsigned int ILDKCGCLCOO_TypeDefinitionIndex = 39523;

struct alignas(4) ILDKCGCLCOO
{
	::System::Boolean ANOJILHLNOH; // 0x10
	::System::Boolean PIMIFLONGPL; // 0x11
	::System::Boolean JJBNLKICDLL; // 0x12
	::System::Byte _padding0[0x1];
	::System::Int32 EDNKGCDJODE; // 0x14

	/*
	static ::ILDKCGCLCOO LOGMNFFOOCB()
	{
		return ((::ILDKCGCLCOO(*)())((::PBYTE)hIl2Cpp + ILDKCGCLCOO_LOGMNFFOOCB_OFFSET))();
	}
	*/
};
