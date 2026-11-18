#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CCPFJIOFEKC.h"
#include "unitysdk/EDGGFNEELGN.h"

#define AOKLDCLHADK_MHCOEJFCDJH_OFFSET UNITYSDK_OFFSET(0x1F5427C0)
#define AOKLDCLHADK_NIADMEBFPBA_OFFSET UNITYSDK_OFFSET(0x1F5427B0)
#define AOKLDCLHADK__CTOR_OFFSET UNITYSDK_OFFSET(0x1F542830)

inline static constexpr unsigned int AOKLDCLHADK_TypeDefinitionIndex = 29081;

class AOKLDCLHADK : public ::CCPFJIOFEKC
{
public:
	::System::Single KNLPBKDIJCO; // 0x10
	::System::Single CMAGKICODDF; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOKLDCLHADK__CTOR_OFFSET))(this);
	}

	::EDGGFNEELGN NIADMEBFPBA()
	{
		return ((::EDGGFNEELGN(*)(::PVOID))((::PBYTE)hIl2Cpp + AOKLDCLHADK_NIADMEBFPBA_OFFSET))(this);
	}

	::System::Single MHCOEJFCDJH()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AOKLDCLHADK_MHCOEJFCDJH_OFFSET))(this);
	}
};
