#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define E4E327654BC9DB4D_FB7841ED9C595492_OFFSET UNITYSDK_OFFSET(0x3F41C70)
#define E4E327654BC9DB4D_FF0997C535275E60_OFFSET UNITYSDK_OFFSET(0x3F41CC0)

inline static constexpr unsigned int E4E327654BC9DB4D_TypeDefinitionIndex = 20576;

struct alignas(4) E4E327654BC9DB4D
{
	::System::Int32 FF288CD3B2CE42EB; // 0x10

	::System::Void FB7841ED9C595492()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E4E327654BC9DB4D_FB7841ED9C595492_OFFSET))(this);
	}

	::System::Void FF0997C535275E60()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E4E327654BC9DB4D_FF0997C535275E60_OFFSET))(this);
	}
};
