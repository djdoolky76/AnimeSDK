#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PFHAJOLBMAD.h"
#include "unitysdk/System/ValueType.h"

#define MEPJPKKGEBN_EQUALS_OFFSET UNITYSDK_OFFSET(0x795560)
#define MEPJPKKGEBN_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0x7955C0)

inline static constexpr unsigned int MEPJPKKGEBN_TypeDefinitionIndex = 81464;

struct alignas(4) MEPJPKKGEBN
{
	// static const ::System::Byte PHLJJGMPKMG = 0x0; // 0x0
	// static const ::System::Byte FKOJDELJLHJ = 0x1; // 0x0
	// static const ::System::Byte IILDJONEODN = 0x2; // 0x0
	::PFHAJOLBMAD BGHHFAJHGEG; // 0x10
	::PFHAJOLBMAD CCEIIILNJAJ; // 0x12

	/*
	::System::Boolean Equals(::MEPJPKKGEBN LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::MEPJPKKGEBN))((::PBYTE)hIl2Cpp + MEPJPKKGEBN_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean FFCPIEDHBDP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPJPKKGEBN_FFCPIEDHBDP_OFFSET))(this);
	}
};
