#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LDDHJLCEFOJ.h"
#include "unitysdk/UnityEngine/Vector3.h"

class ACNLKLCDALA;

#define CEKNEPGKKGI_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1694CEF0)
#define CEKNEPGKKGI_EMCPPBMEKKK_OFFSET UNITYSDK_OFFSET(0x1694CE50)
#define CEKNEPGKKGI_LJNFANAEHHA_OFFSET UNITYSDK_OFFSET(0x1694D0B0)
#define CEKNEPGKKGI_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x1694CDA0)
#define CEKNEPGKKGI__CTOR_OFFSET UNITYSDK_OFFSET(0x1694CEE0)

inline static constexpr unsigned int CEKNEPGKKGI_TypeDefinitionIndex = 50544;

class CEKNEPGKKGI : public ::LDDHJLCEFOJ
{
public:
	::ACNLKLCDALA* HMKPMMCDECM; // 0x28
	::UnityEngine::Vector3 JEFMLMEJCBL; // 0x30
	::System::Single OANFCBEEIFO; // 0x3C
	::System::Byte BKAFKAJDHFI; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEKNEPGKKGI__CTOR_OFFSET))(this);
	}

	::System::Void PLPONJAKNEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEKNEPGKKGI_PLPONJAKNEB_OFFSET))(this);
	}

	::System::Void EMCPPBMEKKK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEKNEPGKKGI_EMCPPBMEKKK_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::ACNLKLCDALA* PAHAKIECKMN)
	{
		return ((::System::Void(*)(::PVOID, ::ACNLKLCDALA*))((::PBYTE)hIl2Cpp + CEKNEPGKKGI_BBOMJDBNHIC_OFFSET))(this, PAHAKIECKMN);
	}

	::System::Void LJNFANAEHHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEKNEPGKKGI_LJNFANAEHHA_OFFSET))(this);
	}
};
