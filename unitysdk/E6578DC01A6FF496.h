#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AF5FBA80BA4AF1CC/F1023100B8EFF9C3.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define E6578DC01A6FF496__CTOR_OFFSET UNITYSDK_OFFSET(0x22631D0)

inline static constexpr unsigned int E6578DC01A6FF496_TypeDefinitionIndex = 14667;

struct alignas(8) E6578DC01A6FF496
{
	::System::String* B93366ED403EDD35; // 0x10
	::AF5FBA80BA4AF1CC::F1023100B8EFF9C3 E62AC8ABE23BE41B; // 0x18

	::System::Void _ctor(::System::String* F79B4D487F303AB2, ::AF5FBA80BA4AF1CC::F1023100B8EFF9C3 AC5DC7146FF0D3C3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::AF5FBA80BA4AF1CC::F1023100B8EFF9C3))((::PBYTE)hIl2Cpp + E6578DC01A6FF496__CTOR_OFFSET))(this, F79B4D487F303AB2, AC5DC7146FF0D3C3);
	}
};
