#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OFLCECEFGIO.h"

class FICPDKBMDCK;
class NCOHFCFKLND;

#define LDAINACDOLA_LLIOGJLKLMO_OFFSET UNITYSDK_OFFSET(0x15BB7170)
#define LDAINACDOLA__CTOR_OFFSET UNITYSDK_OFFSET(0x15BB73C0)

inline static constexpr unsigned int LDAINACDOLA_TypeDefinitionIndex = 56253;

class LDAINACDOLA : public ::OFLCECEFGIO
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDAINACDOLA__CTOR_OFFSET))(this);
	}

	::System::Void LLIOGJLKLMO(::NCOHFCFKLND* BGALIBMPJMK, ::FICPDKBMDCK* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::NCOHFCFKLND*, ::FICPDKBMDCK*))((::PBYTE)hIl2Cpp + LDAINACDOLA_LLIOGJLKLMO_OFFSET))(this, BGALIBMPJMK, KOIBHLHLMFC);
	}
};
