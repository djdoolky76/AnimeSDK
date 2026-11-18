#pragma once
#include "unitysdk/unitysdk.h"

class FICPDKBMDCK;

#define MBOPKLBJPGM_IHNMBBNNECD_OFFSET UNITYSDK_OFFSET(0x13D14150)
#define MBOPKLBJPGM__CTOR_OFFSET UNITYSDK_OFFSET(0x13D14220)

inline static constexpr unsigned int MBOPKLBJPGM_TypeDefinitionIndex = 62118;

class MBOPKLBJPGM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBOPKLBJPGM__CTOR_OFFSET))(this);
	}

	::System::Void IHNMBBNNECD(::System::Int32 EGEGIMGMJHN, ::FICPDKBMDCK* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FICPDKBMDCK*))((::PBYTE)hIl2Cpp + MBOPKLBJPGM_IHNMBBNNECD_OFFSET))(this, EGEGIMGMJHN, KOIBHLHLMFC);
	}
};
