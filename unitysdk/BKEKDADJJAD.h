#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBDCJLOPPJO.h"

class AJAMLAJJNHA;
class EHPCBMLOBON;

#define BKEKDADJJAD_IBELDKINIOF_OFFSET UNITYSDK_OFFSET(0x113EE920)
#define BKEKDADJJAD_OFINMOFKGFI_OFFSET UNITYSDK_OFFSET(0x113EEA10)
#define BKEKDADJJAD__CTOR_OFFSET UNITYSDK_OFFSET(0x113EE880)

inline static constexpr unsigned int BKEKDADJJAD_TypeDefinitionIndex = 41858;

class BKEKDADJJAD : public ::BBDCJLOPPJO
{
public:
	::EHPCBMLOBON* KAMJNJMKADI; // 0x50

	::System::Void _ctor(::AJAMLAJJNHA* KAINLJMNCHE)
	{
		return ((::System::Void(*)(::PVOID, ::AJAMLAJJNHA*))((::PBYTE)hIl2Cpp + BKEKDADJJAD__CTOR_OFFSET))(this, KAINLJMNCHE);
	}

	::System::Void IBELDKINIOF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKEKDADJJAD_IBELDKINIOF_OFFSET))(this);
	}

	::System::Void OFINMOFKGFI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKEKDADJJAD_OFINMOFKGFI_OFFSET))(this);
	}
};
