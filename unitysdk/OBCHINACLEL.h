#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JEBOCOHOODG.h"
#include "unitysdk/NMOJPIMLNJB.h"

class KGBFLHNJHHN;

#define OBCHINACLEL_JHHPFGMDEPA_OFFSET UNITYSDK_OFFSET(0x1D0CFEA0)
#define OBCHINACLEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0CFE30)

inline static constexpr unsigned int OBCHINACLEL_TypeDefinitionIndex = 9475;

class OBCHINACLEL : public ::JEBOCOHOODG
{
public:
	::System::Int32 CEBOEKDJPGK; // 0xB8

	::System::Void _ctor(::NMOJPIMLNJB LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NMOJPIMLNJB, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + OBCHINACLEL__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 JHHPFGMDEPA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBCHINACLEL_JHHPFGMDEPA_OFFSET))(this);
	}
};
