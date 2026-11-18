#pragma once
#include "unitysdk/unitysdk.h"

#define BBBKJBIGPOP_AIMAIGLGDBE_OFFSET UNITYSDK_OFFSET(0x1E4C08A0)
#define BBBKJBIGPOP__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4C08F0)

inline static constexpr unsigned int BBBKJBIGPOP_TypeDefinitionIndex = 93952;

class BBBKJBIGPOP
{
public:
	::System::Int32 DLCPIJDBOKP; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBBKJBIGPOP__CTOR_OFFSET))(this);
	}

	::System::Void AIMAIGLGDBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBBKJBIGPOP_AIMAIGLGDBE_OFFSET))(this);
	}
};
