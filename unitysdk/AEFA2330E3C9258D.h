#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define AEFA2330E3C9258D__CTOR_OFFSET UNITYSDK_OFFSET(0x26DD470)

inline static constexpr unsigned int AEFA2330E3C9258D_TypeDefinitionIndex = 2698;

struct alignas(4) AEFA2330E3C9258D
{
	::System::Int32 B8B68AE86C3B4F73; // 0x10
	::System::Byte _padding0[0x4];
	::System::Int64 F97357FE9E2A01E0; // 0x18
	::System::Int64 A2806E3B96B949C1; // 0x20

	::System::Void _ctor(::System::Int32 B48C66E5FB2449C6, ::System::Int64 B62BE9DEE0CB9423, ::System::Int64 FC08C69B0993F9AE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + AEFA2330E3C9258D__CTOR_OFFSET))(this, B48C66E5FB2449C6, B62BE9DEE0CB9423, FC08C69B0993F9AE);
	}
};
