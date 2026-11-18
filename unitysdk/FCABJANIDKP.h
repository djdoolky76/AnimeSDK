#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define FCABJANIDKP__CTOR_OFFSET UNITYSDK_OFFSET(0x744EE0)

inline static constexpr unsigned int FCABJANIDKP_TypeDefinitionIndex = 89465;

struct alignas(4) FCABJANIDKP
{
	::System::Boolean LLJGJPOPEOE; // 0x10
	::System::Byte _padding0[0x3];
	::System::Int32 FJJMHFPINHO; // 0x14

	::System::Void _ctor(::System::Int32 FFJGPKNMBBP, ::System::Boolean FIEDPDAJPBB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + FCABJANIDKP__CTOR_OFFSET))(this, FFJGPKNMBBP, FIEDPDAJPBB);
	}
};
