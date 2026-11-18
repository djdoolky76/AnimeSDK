#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKLNICNNLOA.h"
#include "unitysdk/ALKMJABFCCF.h"

class KGBFLHNJHHN;

#define ECEPHBDBGDG_ABLPMLFHCDI_OFFSET UNITYSDK_OFFSET(0x17F271B0)
#define ECEPHBDBGDG_OIAEDDPIFHD_OFFSET UNITYSDK_OFFSET(0x17F271A0)
#define ECEPHBDBGDG__CTOR_OFFSET UNITYSDK_OFFSET(0x17F27190)

inline static constexpr unsigned int ECEPHBDBGDG_TypeDefinitionIndex = 14378;

class ECEPHBDBGDG : public ::BKLNICNNLOA
{
public:
	::System::Void _ctor(::ALKMJABFCCF LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::ALKMJABFCCF, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + ECEPHBDBGDG__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean OIAEDDPIFHD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECEPHBDBGDG_OIAEDDPIFHD_OFFSET))(this);
	}

	::System::Int32 ABLPMLFHCDI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECEPHBDBGDG_ABLPMLFHCDI_OFFSET))(this);
	}
};
