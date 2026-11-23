#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/F0CC6F06C208D16B.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define BF898477C93E128D_B51AC87E6C65F394_OFFSET UNITYSDK_OFFSET(0x235CE60)
#define BF898477C93E128D_FF25FDA9CB2889D7_OFFSET UNITYSDK_OFFSET(0x235CC40)
#define BF898477C93E128D__CTOR_OFFSET UNITYSDK_OFFSET(0x235CFB0)

inline static constexpr unsigned int BF898477C93E128D_TypeDefinitionIndex = 3341;

struct alignas(4) BF898477C93E128D
{
	::F0CC6F06C208D16B B076D6911116907A; // 0x10

	::System::String* B51AC87E6C65F394()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BF898477C93E128D_B51AC87E6C65F394_OFFSET))(this);
	}

	::System::Void FF25FDA9CB2889D7(::System::String* B9AEC57275825552)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BF898477C93E128D_FF25FDA9CB2889D7_OFFSET))(this, B9AEC57275825552);
	}

	::System::Void _ctor(::System::Int32 AC256667FDF6F7FE, ::System::Int32 A18E706520C81F80)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BF898477C93E128D__CTOR_OFFSET))(this, AC256667FDF6F7FE, A18E706520C81F80);
	}
};
