#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CCPFJIOFEKC.h"
#include "unitysdk/EDGGFNEELGN.h"
#include "unitysdk/JGLIFHIAIEH.h"

#define ACFBFFKHNPC_MHCOEJFCDJH_OFFSET UNITYSDK_OFFSET(0x1FB0FE10)
#define ACFBFFKHNPC_NIADMEBFPBA_OFFSET UNITYSDK_OFFSET(0x1FB0FE00)
#define ACFBFFKHNPC__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB0FE60)

inline static constexpr unsigned int ACFBFFKHNPC_TypeDefinitionIndex = 29022;

class ACFBFFKHNPC : public ::CCPFJIOFEKC
{
public:
	::System::Single AFIKJAIPLNG; // 0x10
	::System::Single CMAGKICODDF; // 0x14
	::JGLIFHIAIEH BDPOBPDKLHJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACFBFFKHNPC__CTOR_OFFSET))(this);
	}

	::EDGGFNEELGN NIADMEBFPBA()
	{
		return ((::EDGGFNEELGN(*)(::PVOID))((::PBYTE)hIl2Cpp + ACFBFFKHNPC_NIADMEBFPBA_OFFSET))(this);
	}

	::System::Single MHCOEJFCDJH()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ACFBFFKHNPC_MHCOEJFCDJH_OFFSET))(this);
	}
};
