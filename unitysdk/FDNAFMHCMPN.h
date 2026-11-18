#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDNMHHIKMIL.h"

class JMNDEAFIAAF;

#define FDNAFMHCMPN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11ACB1A0)
#define FDNAFMHCMPN_OMCCGHBCCNI_OFFSET UNITYSDK_OFFSET(0x11ACB1E0)
#define FDNAFMHCMPN__CTOR_OFFSET UNITYSDK_OFFSET(0x11ACC490)

inline static constexpr unsigned int FDNAFMHCMPN_TypeDefinitionIndex = 76993;

class FDNAFMHCMPN : public ::BDNMHHIKMIL
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDNAFMHCMPN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDNAFMHCMPN_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void OMCCGHBCCNI(::JMNDEAFIAAF* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::JMNDEAFIAAF*))((::PBYTE)hIl2Cpp + FDNAFMHCMPN_OMCCGHBCCNI_OFFSET))(this, AAOCANGHBDG);
	}
};
