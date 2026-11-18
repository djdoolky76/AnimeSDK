#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CCPFJIOFEKC.h"
#include "unitysdk/EDGGFNEELGN.h"

#define FOEFBDLAEGP_MHCOEJFCDJH_OFFSET UNITYSDK_OFFSET(0x1F3084A0)
#define FOEFBDLAEGP_NIADMEBFPBA_OFFSET UNITYSDK_OFFSET(0x1F308490)
#define FOEFBDLAEGP__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3084F0)

inline static constexpr unsigned int FOEFBDLAEGP_TypeDefinitionIndex = 28779;

class FOEFBDLAEGP : public ::CCPFJIOFEKC
{
public:
	::System::Single AFIKJAIPLNG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOEFBDLAEGP__CTOR_OFFSET))(this);
	}

	::EDGGFNEELGN NIADMEBFPBA()
	{
		return ((::EDGGFNEELGN(*)(::PVOID))((::PBYTE)hIl2Cpp + FOEFBDLAEGP_NIADMEBFPBA_OFFSET))(this);
	}

	::System::Single MHCOEJFCDJH()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOEFBDLAEGP_MHCOEJFCDJH_OFFSET))(this);
	}
};
