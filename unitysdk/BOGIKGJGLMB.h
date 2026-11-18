#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGKKLCAOCEA.h"

#define BOGIKGJGLMB_AIMAIGLGDBE_OFFSET UNITYSDK_OFFSET(0x1E2E35A0)
#define BOGIKGJGLMB__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2E35F0)

inline static constexpr unsigned int BOGIKGJGLMB_TypeDefinitionIndex = 94180;

class BOGIKGJGLMB
{
public:
	::JGKKLCAOCEA NOOLOILNGPL; // 0x28
	::System::Int32 DLCPIJDBOKP; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGIKGJGLMB__CTOR_OFFSET))(this);
	}

	::System::Void AIMAIGLGDBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGIKGJGLMB_AIMAIGLGDBE_OFFSET))(this);
	}
};
