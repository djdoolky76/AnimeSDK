#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNAFOIJOEDC.h"
#include "unitysdk/FAHLLDKNDAL.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define PDKBJLIIIEJ_IOIENACFPEP_OFFSET UNITYSDK_OFFSET(0x1EDBD6D0)
#define PDKBJLIIIEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1EDBD6C0)

inline static constexpr unsigned int PDKBJLIIIEJ_TypeDefinitionIndex = 15712;

class PDKBJLIIIEJ : public ::FNAFOIJOEDC
{
public:
	::System::Void _ctor(::FAHLLDKNDAL LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FAHLLDKNDAL, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + PDKBJLIIIEJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* IOIENACFPEP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDKBJLIIIEJ_IOIENACFPEP_OFFSET))(this);
	}
};
