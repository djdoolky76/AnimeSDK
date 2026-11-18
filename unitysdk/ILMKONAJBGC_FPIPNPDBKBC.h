#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGHIHCHCDEM.h"
#include "unitysdk/System/Object.h"

class ILMKONAJBGC;

#define ILMKONAJBGC_FPIPNPDBKBC_ACCKBMJGALP_OFFSET UNITYSDK_OFFSET(0x13C9B600)
#define ILMKONAJBGC_FPIPNPDBKBC__CTOR_OFFSET UNITYSDK_OFFSET(0x13C9B5F0)

inline static constexpr unsigned int ILMKONAJBGC_FPIPNPDBKBC_TypeDefinitionIndex = 88926;

class ILMKONAJBGC_FPIPNPDBKBC : public ::System::Object
{
public:
	::CGHIHCHCDEM NHADJLAJOFK; // 0x10
	::ILMKONAJBGC* KLHPEBKNIFB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILMKONAJBGC_FPIPNPDBKBC__CTOR_OFFSET))(this);
	}

	::System::Void ACCKBMJGALP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILMKONAJBGC_FPIPNPDBKBC_ACCKBMJGALP_OFFSET))(this);
	}
};
