#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EKCJFLKBCFK.h"
#include "unitysdk/DMKKOEINFKF.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define DFBAOAIINFP_BPLABGHMDIO_OFFSET UNITYSDK_OFFSET(0x124099F0)
#define DFBAOAIINFP_JKGLAJIKNBB_OFFSET UNITYSDK_OFFSET(0x124099A0)
#define DFBAOAIINFP__CTOR_OFFSET UNITYSDK_OFFSET(0x12409990)

inline static constexpr unsigned int DFBAOAIINFP_TypeDefinitionIndex = 73430;

class DFBAOAIINFP : public ::EKCJFLKBCFK
{
public:
	::System::Void _ctor(::DMKKOEINFKF LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DMKKOEINFKF, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DFBAOAIINFP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* JKGLAJIKNBB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBAOAIINFP_JKGLAJIKNBB_OFFSET))(this);
	}

	::System::String* BPLABGHMDIO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBAOAIINFP_BPLABGHMDIO_OFFSET))(this);
	}
};
