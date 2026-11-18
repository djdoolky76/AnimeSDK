#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMDLEABINEN.h"

#define LKHLOPHBDLB__CTOR_OFFSET UNITYSDK_OFFSET(0x184FCFE0)

inline static constexpr unsigned int LKHLOPHBDLB_TypeDefinitionIndex = 60207;

class LKHLOPHBDLB : public ::FMDLEABINEN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKHLOPHBDLB__CTOR_OFFSET))(this);
	}
};
