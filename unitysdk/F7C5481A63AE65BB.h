#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FCC2F8EABCD6F945.h"
#include "unitysdk/System/B6CFF87FC0ABE753.h"
#include "unitysdk/System/ValueType.h"

#define F7C5481A63AE65BB_FEFD5298862EC8D2_OFFSET UNITYSDK_OFFSET(0x3C927F0)

inline static constexpr unsigned int F7C5481A63AE65BB_TypeDefinitionIndex = 11725;

struct alignas(8) F7C5481A63AE65BB
{
	::FCC2F8EABCD6F945<::System::Char> B9AEC57275825552; // 0x10
	::System::Byte _padding0[0x8];
	::System::Int32 B48C66E5FB2449C6; // 0x20
	::System::Int32 A96B867D8BBB8B00; // 0x24
	::System::B6CFF87FC0ABE753 A288CB28FC2A6DA3; // 0x28
	::System::Int32 E937D4885DAA1AE8; // 0x2C

	::System::Char FEFD5298862EC8D2(::System::Int32 E49AF8675FC3D841)
	{
		return ((::System::Char(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + F7C5481A63AE65BB_FEFD5298862EC8D2_OFFSET))(this, E49AF8675FC3D841);
	}
};
