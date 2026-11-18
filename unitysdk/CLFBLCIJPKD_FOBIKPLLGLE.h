#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CLFBLCIJPKD_LEPOLDOBOGO.h"

#define CLFBLCIJPKD_FOBIKPLLGLE_NCMCOPHKPJN_OFFSET UNITYSDK_OFFSET(0x145D1880)
#define CLFBLCIJPKD_FOBIKPLLGLE__CTOR_OFFSET UNITYSDK_OFFSET(0x145D1870)

inline static constexpr unsigned int CLFBLCIJPKD_FOBIKPLLGLE_TypeDefinitionIndex = 88462;

class CLFBLCIJPKD_FOBIKPLLGLE : public ::CLFBLCIJPKD_LEPOLDOBOGO
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLFBLCIJPKD_FOBIKPLLGLE__CTOR_OFFSET))(this);
	}

	::System::Void NCMCOPHKPJN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLFBLCIJPKD_FOBIKPLLGLE_NCMCOPHKPJN_OFFSET))(this);
	}
};
