#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define BC5A0D2F7F7DA416_F584841C8C081385_OFFSET UNITYSDK_OFFSET(0x3F43D40)

inline static constexpr unsigned int BC5A0D2F7F7DA416_TypeDefinitionIndex = 20600;

struct alignas(4) BC5A0D2F7F7DA416
{
	::System::IntPtr B16912B986A51D18; // 0x10
	::System::Int32 FC7EE09B5C8BD1A3; // 0x18
	::System::Int32 E775962F33F7006E; // 0x1C
	::System::Int32 AFB636175670F909; // 0x20

	::System::Void F584841C8C081385(::PVOID A6B5840567522F01)
	{
		return ((::System::Void(*)(::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + BC5A0D2F7F7DA416_F584841C8C081385_OFFSET))(this, A6B5840567522F01);
	}
};
