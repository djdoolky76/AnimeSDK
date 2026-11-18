#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define ICBOCOHGMBL_BHACEOBOJFJ_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0xEBAF620)
#define ICBOCOHGMBL_BHACEOBOJFJ__CTOR_OFFSET UNITYSDK_OFFSET(0xEBAF610)

inline static constexpr unsigned int ICBOCOHGMBL_BHACEOBOJFJ_TypeDefinitionIndex = 61148;

class ICBOCOHGMBL_BHACEOBOJFJ : public ::System::Object
{
public:
	::HOCDHMEPPEG AJHFDMLOGIF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICBOCOHGMBL_BHACEOBOJFJ__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICBOCOHGMBL_BHACEOBOJFJ_LIDNPLMPHAL_OFFSET))(this);
	}
};
