#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CCPFJIOFEKC.h"
#include "unitysdk/EDGGFNEELGN.h"

#define IBNKNEJOEGF_MHCOEJFCDJH_OFFSET UNITYSDK_OFFSET(0x1FBB5DE0)
#define IBNKNEJOEGF_NIADMEBFPBA_OFFSET UNITYSDK_OFFSET(0x1FBB5DD0)
#define IBNKNEJOEGF__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBB5E30)

inline static constexpr unsigned int IBNKNEJOEGF_TypeDefinitionIndex = 28862;

class IBNKNEJOEGF : public ::CCPFJIOFEKC
{
public:
	::System::Single AAEBAFAMFCC; // 0x10
	::System::Single AFIKJAIPLNG; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBNKNEJOEGF__CTOR_OFFSET))(this);
	}

	::EDGGFNEELGN NIADMEBFPBA()
	{
		return ((::EDGGFNEELGN(*)(::PVOID))((::PBYTE)hIl2Cpp + IBNKNEJOEGF_NIADMEBFPBA_OFFSET))(this);
	}

	::System::Single MHCOEJFCDJH()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IBNKNEJOEGF_MHCOEJFCDJH_OFFSET))(this);
	}
};
