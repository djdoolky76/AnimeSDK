#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define E0042CB132622EB1_EAB396B4364C175F__CTOR_OFFSET UNITYSDK_OFFSET(0x2A95E10)

inline static constexpr unsigned int E0042CB132622EB1_EAB396B4364C175F_TypeDefinitionIndex = 19159;

struct alignas(4) E0042CB132622EB1_EAB396B4364C175F
{
	::System::Boolean B7C3A3DE35DE4714; // 0x10
	::System::Byte _padding0[0x3];
	::System::UInt32 B313EBE15B4F5CFC; // 0x14

	::System::Void _ctor(::System::Boolean B7C3A3DE35DE4714, ::System::UInt32 B313EBE15B4F5CFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + E0042CB132622EB1_EAB396B4364C175F__CTOR_OFFSET))(this, B7C3A3DE35DE4714, B313EBE15B4F5CFC);
	}
};
