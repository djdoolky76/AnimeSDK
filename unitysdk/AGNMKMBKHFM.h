#pragma once
#include "unitysdk/unitysdk.h"

class FICPDKBMDCK;

#define AGNMKMBKHFM_IHNMBBNNECD_OFFSET UNITYSDK_OFFSET(0x126557C0)
#define AGNMKMBKHFM__CTOR_OFFSET UNITYSDK_OFFSET(0x12655AA0)

inline static constexpr unsigned int AGNMKMBKHFM_TypeDefinitionIndex = 77004;

class AGNMKMBKHFM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGNMKMBKHFM__CTOR_OFFSET))(this);
	}

	::System::Void IHNMBBNNECD(::System::Int32 EGEGIMGMJHN, ::FICPDKBMDCK* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FICPDKBMDCK*))((::PBYTE)hIl2Cpp + AGNMKMBKHFM_IHNMBBNNECD_OFFSET))(this, EGEGIMGMJHN, KOIBHLHLMFC);
	}
};
