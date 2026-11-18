#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DAJMNDHMNNO.h"

class KPLBGBHJFBK;

#define EFNFNPIGOLG_MGMLCIBHNNF_OFFSET UNITYSDK_OFFSET(0x13546F00)
#define EFNFNPIGOLG__CTOR_OFFSET UNITYSDK_OFFSET(0x13546EF0)

inline static constexpr unsigned int EFNFNPIGOLG_TypeDefinitionIndex = 88837;

class EFNFNPIGOLG : public ::DAJMNDHMNNO
{
public:
	::KPLBGBHJFBK* _OIHEJGPMIEB_k__BackingField; // 0x10

	::System::Void _ctor(::KPLBGBHJFBK* ICDHPEMOGGO)
	{
		return ((::System::Void(*)(::PVOID, ::KPLBGBHJFBK*))((::PBYTE)hIl2Cpp + EFNFNPIGOLG__CTOR_OFFSET))(this, ICDHPEMOGGO);
	}

	::KPLBGBHJFBK* MGMLCIBHNNF()
	{
		return ((::KPLBGBHJFBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFNFNPIGOLG_MGMLCIBHNNF_OFFSET))(this);
	}
};
