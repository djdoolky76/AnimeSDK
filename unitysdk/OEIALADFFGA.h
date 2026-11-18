#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define OEIALADFFGA__CTOR_OFFSET UNITYSDK_OFFSET(0x74C920)

inline static constexpr unsigned int OEIALADFFGA_TypeDefinitionIndex = 47941;

struct alignas(4) OEIALADFFGA
{
	::System::UInt64 HANIMNANBHH; // 0x10
	::System::Single LLBEKEFONPC; // 0x18

	::System::Void _ctor(::System::UInt64 CJGFBDDCELO, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + OEIALADFFGA__CTOR_OFFSET))(this, CJGFBDDCELO, PMNLNNGEIFM);
	}
};
