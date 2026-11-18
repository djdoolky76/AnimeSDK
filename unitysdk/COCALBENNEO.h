#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DAJMNDHMNNO.h"

class KCMOCJIKOBE;

#define COCALBENNEO_FIADNPNDGEL_OFFSET UNITYSDK_OFFSET(0x193EA290)
#define COCALBENNEO__CTOR_OFFSET UNITYSDK_OFFSET(0x193EA280)

inline static constexpr unsigned int COCALBENNEO_TypeDefinitionIndex = 57136;

class COCALBENNEO : public ::DAJMNDHMNNO
{
public:
	::KCMOCJIKOBE* _FMCBNHKGLEC_k__BackingField; // 0x10

	::System::Void _ctor(::KCMOCJIKOBE* CEOBKCCGGJK)
	{
		return ((::System::Void(*)(::PVOID, ::KCMOCJIKOBE*))((::PBYTE)hIl2Cpp + COCALBENNEO__CTOR_OFFSET))(this, CEOBKCCGGJK);
	}

	::KCMOCJIKOBE* FIADNPNDGEL()
	{
		return ((::KCMOCJIKOBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + COCALBENNEO_FIADNPNDGEL_OFFSET))(this);
	}
};
