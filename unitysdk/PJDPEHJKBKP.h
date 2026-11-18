#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GGDEOGMMIHL.h"
#include "unitysdk/MHKJLCGGJMK.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define PJDPEHJKBKP_FFFNHAPNICI_OFFSET UNITYSDK_OFFSET(0x1C0B1C00)
#define PJDPEHJKBKP__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0B1BF0)

inline static constexpr unsigned int PJDPEHJKBKP_TypeDefinitionIndex = 13461;

class PJDPEHJKBKP : public ::GGDEOGMMIHL
{
public:
	::System::Void _ctor(::MHKJLCGGJMK LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::MHKJLCGGJMK, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + PJDPEHJKBKP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* FFFNHAPNICI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJDPEHJKBKP_FFFNHAPNICI_OFFSET))(this);
	}
};
