#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LCDFBMKOIDL.h"
#include "unitysdk/OBMJICILCHE.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define ECPEBMKLBBN_ADAGNMFNONL_OFFSET UNITYSDK_OFFSET(0x19F46040)
#define ECPEBMKLBBN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19F46050)
#define ECPEBMKLBBN__CTOR_OFFSET UNITYSDK_OFFSET(0x19F46030)

inline static constexpr unsigned int ECPEBMKLBBN_TypeDefinitionIndex = 14495;

class ECPEBMKLBBN : public ::LCDFBMKOIDL
{
public:
	::System::Void _ctor(::OBMJICILCHE LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::OBMJICILCHE, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + ECPEBMKLBBN__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 ADAGNMFNONL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPEBMKLBBN_ADAGNMFNONL_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPEBMKLBBN_TOSTRING_OFFSET))(this);
	}
};
