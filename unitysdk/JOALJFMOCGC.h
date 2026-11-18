#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MPJNOECKPLH.h"
#include "unitysdk/KGEAJENDKCB.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define JOALJFMOCGC_HKFHGDMBLAK_OFFSET UNITYSDK_OFFSET(0x1B639F50)
#define JOALJFMOCGC_IFFKJJHOMOK_OFFSET UNITYSDK_OFFSET(0x1B639F40)
#define JOALJFMOCGC_MKFJDPFFOLB_OFFSET UNITYSDK_OFFSET(0x1B639F60)
#define JOALJFMOCGC__CTOR_OFFSET UNITYSDK_OFFSET(0x1B639F30)

inline static constexpr unsigned int JOALJFMOCGC_TypeDefinitionIndex = 17388;

class JOALJFMOCGC : public ::MPJNOECKPLH
{
public:
	::System::Void _ctor(::KGEAJENDKCB LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KGEAJENDKCB, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JOALJFMOCGC__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* IFFKJJHOMOK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOALJFMOCGC_IFFKJJHOMOK_OFFSET))(this);
	}

	::System::String* HKFHGDMBLAK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOALJFMOCGC_HKFHGDMBLAK_OFFSET))(this);
	}

	::System::String* MKFJDPFFOLB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOALJFMOCGC_MKFJDPFFOLB_OFFSET))(this);
	}
};
