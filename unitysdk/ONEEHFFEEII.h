#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDNMHHIKMIL.h"

class JMNDEAFIAAF;

#define ONEEHFFEEII_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11B49430)
#define ONEEHFFEEII_OMCCGHBCCNI_OFFSET UNITYSDK_OFFSET(0x11B49600)
#define ONEEHFFEEII__CTOR_OFFSET UNITYSDK_OFFSET(0x11B497C0)

inline static constexpr unsigned int ONEEHFFEEII_TypeDefinitionIndex = 62637;

class ONEEHFFEEII : public ::BDNMHHIKMIL
{
public:
	::System::Int32 CPACLBFMCAN; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONEEHFFEEII__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONEEHFFEEII_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void OMCCGHBCCNI(::JMNDEAFIAAF* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::JMNDEAFIAAF*))((::PBYTE)hIl2Cpp + ONEEHFFEEII_OMCCGHBCCNI_OFFSET))(this, AAOCANGHBDG);
	}
};
