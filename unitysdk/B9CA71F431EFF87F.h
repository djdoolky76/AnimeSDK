#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A8FA77E95A5D1550.h"

#define B9CA71F431EFF87F_BC8FCB218D25F8E8_OFFSET UNITYSDK_OFFSET(0x18EC2F0)
#define B9CA71F431EFF87F__CTOR_OFFSET UNITYSDK_OFFSET(0x1701570)

inline static constexpr unsigned int B9CA71F431EFF87F_TypeDefinitionIndex = 1415;

class B9CA71F431EFF87F : public ::A8FA77E95A5D1550
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B9CA71F431EFF87F__CTOR_OFFSET))(this);
	}

	::System::Boolean BC8FCB218D25F8E8(::System::Single EB5670302F34D4B7)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + B9CA71F431EFF87F_BC8FCB218D25F8E8_OFFSET))(this, EB5670302F34D4B7);
	}
};
