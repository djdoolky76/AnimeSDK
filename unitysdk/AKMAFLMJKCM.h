#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AFDDDPKKEFJ.h"
#include "unitysdk/PEBMGBOEAMI.h"

class EAKHJNIMJIL;

#define AKMAFLMJKCM_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x14225470)
#define AKMAFLMJKCM_MBJFAHEBJDA_OFFSET UNITYSDK_OFFSET(0x14225480)
#define AKMAFLMJKCM__CTOR_OFFSET UNITYSDK_OFFSET(0x14225510)

inline static constexpr unsigned int AKMAFLMJKCM_TypeDefinitionIndex = 38993;

class AKMAFLMJKCM : public ::AFDDDPKKEFJ
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMAFLMJKCM__CTOR_OFFSET))(this);
	}

	::PEBMGBOEAMI BKNKCFDBLGH()
	{
		return ((::PEBMGBOEAMI(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMAFLMJKCM_BKNKCFDBLGH_OFFSET))(this);
	}

	::System::Boolean MBJFAHEBJDA(::EAKHJNIMJIL* GCMKDONNBPM, ::System::Single PBCAAADNEPK)
	{
		return ((::System::Boolean(*)(::PVOID, ::EAKHJNIMJIL*, ::System::Single))((::PBYTE)hIl2Cpp + AKMAFLMJKCM_MBJFAHEBJDA_OFFSET))(this, GCMKDONNBPM, PBCAAADNEPK);
	}
};
