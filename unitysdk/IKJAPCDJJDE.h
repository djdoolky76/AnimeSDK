#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AFDDDPKKEFJ.h"
#include "unitysdk/PEBMGBOEAMI.h"
#include "unitysdk/System/ValueTuple_2.h"

class EAKHJNIMJIL;

#define IKJAPCDJJDE_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x13C8E5C0)
#define IKJAPCDJJDE_MBJFAHEBJDA_OFFSET UNITYSDK_OFFSET(0x13C8E5F0)
#define IKJAPCDJJDE__CTOR_OFFSET UNITYSDK_OFFSET(0x13C8E5D0)

inline static constexpr unsigned int IKJAPCDJJDE_TypeDefinitionIndex = 84132;

class IKJAPCDJJDE : public ::AFDDDPKKEFJ
{
public:
	::System::Single BMJBDKMOOLM; // 0x10
	::System::Single KKJKPJEGKJC; // 0x14
	::System::ValueTuple_2<::System::Single, ::System::Single> FGPIGDMMKBD; // 0x18

	::System::Void _ctor(::System::Single MDPPNMIPDMP, ::System::ValueTuple_2<::System::Single, ::System::Single> OHLOFIPMKAF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::ValueTuple_2<::System::Single, ::System::Single>))((::PBYTE)hIl2Cpp + IKJAPCDJJDE__CTOR_OFFSET))(this, MDPPNMIPDMP, OHLOFIPMKAF);
	}

	::PEBMGBOEAMI BKNKCFDBLGH()
	{
		return ((::PEBMGBOEAMI(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJAPCDJJDE_BKNKCFDBLGH_OFFSET))(this);
	}

	::System::Boolean MBJFAHEBJDA(::EAKHJNIMJIL* GCMKDONNBPM, ::System::Single PBCAAADNEPK)
	{
		return ((::System::Boolean(*)(::PVOID, ::EAKHJNIMJIL*, ::System::Single))((::PBYTE)hIl2Cpp + IKJAPCDJJDE_MBJFAHEBJDA_OFFSET))(this, GCMKDONNBPM, PBCAAADNEPK);
	}
};
