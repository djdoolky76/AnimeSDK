#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OFLCECEFGIO.h"

class FICPDKBMDCK;
class NCOHFCFKLND;

#define PCHPABCILNN_LLIOGJLKLMO_OFFSET UNITYSDK_OFFSET(0x178B1A80)
#define PCHPABCILNN__CTOR_OFFSET UNITYSDK_OFFSET(0x178B1B70)

inline static constexpr unsigned int PCHPABCILNN_TypeDefinitionIndex = 72698;

class PCHPABCILNN : public ::OFLCECEFGIO
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCHPABCILNN__CTOR_OFFSET))(this);
	}

	::System::Void LLIOGJLKLMO(::NCOHFCFKLND* BGALIBMPJMK, ::FICPDKBMDCK* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::NCOHFCFKLND*, ::FICPDKBMDCK*))((::PBYTE)hIl2Cpp + PCHPABCILNN_LLIOGJLKLMO_OFFSET))(this, BGALIBMPJMK, KOIBHLHLMFC);
	}
};
