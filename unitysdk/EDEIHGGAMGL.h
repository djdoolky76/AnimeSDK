#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define EDEIHGGAMGL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x6EED40)
#define EDEIHGGAMGL__CTOR_OFFSET UNITYSDK_OFFSET(0x359150)

inline static constexpr unsigned int EDEIHGGAMGL_TypeDefinitionIndex = 93237;

struct alignas(4) EDEIHGGAMGL
{
	::System::UInt32 MGCMLBHOELA; // 0x10

	::System::Void _ctor(::System::UInt32 NJNCGJLHLKC)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EDEIHGGAMGL__CTOR_OFFSET))(this, NJNCGJLHLKC);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDEIHGGAMGL_DISPOSE_OFFSET))(this);
	}
};
