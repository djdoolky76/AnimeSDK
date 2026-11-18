#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AOJKLCGGPAK;
class CJIEIHEDMME;
class CJKHLPEHFLA;

#define OKPDMJIGIMH_PKNFNAIOOBM_CGHELJBPLGF_OFFSET UNITYSDK_OFFSET(0x14F89A20)
#define OKPDMJIGIMH_PKNFNAIOOBM__CTOR_OFFSET UNITYSDK_OFFSET(0x14F89A10)

inline static constexpr unsigned int OKPDMJIGIMH_PKNFNAIOOBM_TypeDefinitionIndex = 70747;

class OKPDMJIGIMH_PKNFNAIOOBM : public ::System::Object
{
public:
	::CJIEIHEDMME* LADPIPOMBJM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPDMJIGIMH_PKNFNAIOOBM__CTOR_OFFSET))(this);
	}

	::CJKHLPEHFLA* CGHELJBPLGF(::AOJKLCGGPAK* HAAEBCOBKFF)
	{
		return ((::CJKHLPEHFLA*(*)(::PVOID, ::AOJKLCGGPAK*))((::PBYTE)hIl2Cpp + OKPDMJIGIMH_PKNFNAIOOBM_CGHELJBPLGF_OFFSET))(this, HAAEBCOBKFF);
	}
};
