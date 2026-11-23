#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E9F992A59B502E6F.h"

#define AB7EFEBADE786B6D_E2C6F2285659D216_OFFSET UNITYSDK_OFFSET(0x1C6FBA0)
#define AB7EFEBADE786B6D__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int AB7EFEBADE786B6D_TypeDefinitionIndex = 9632;

class AB7EFEBADE786B6D : public ::E9F992A59B502E6F
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AB7EFEBADE786B6D__CTOR_OFFSET))(this);
	}

	::System::Boolean E2C6F2285659D216(::System::UInt32 BC184AAB30730354)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AB7EFEBADE786B6D_E2C6F2285659D216_OFFSET))(this, BC184AAB30730354);
	}
};
