#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LDDHJLCEFOJ.h"
#include "unitysdk/UnityEngine/Vector3.h"

class ACNLKLCDALA;

#define BEMJBLHDDOP_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1424BEF0)
#define BEMJBLHDDOP_EMCPPBMEKKK_OFFSET UNITYSDK_OFFSET(0x1424BE50)
#define BEMJBLHDDOP_LJNFANAEHHA_OFFSET UNITYSDK_OFFSET(0x1424C0B0)
#define BEMJBLHDDOP_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x1424BDA0)
#define BEMJBLHDDOP__CTOR_OFFSET UNITYSDK_OFFSET(0x1424BEE0)

inline static constexpr unsigned int BEMJBLHDDOP_TypeDefinitionIndex = 82326;

class BEMJBLHDDOP : public ::LDDHJLCEFOJ
{
public:
	::ACNLKLCDALA* HMKPMMCDECM; // 0x28
	::System::Single OANFCBEEIFO; // 0x30
	::UnityEngine::Vector3 JEFMLMEJCBL; // 0x34
	::System::Byte BKAFKAJDHFI; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEMJBLHDDOP__CTOR_OFFSET))(this);
	}

	::System::Void PLPONJAKNEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEMJBLHDDOP_PLPONJAKNEB_OFFSET))(this);
	}

	::System::Void EMCPPBMEKKK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEMJBLHDDOP_EMCPPBMEKKK_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::ACNLKLCDALA* PAHAKIECKMN)
	{
		return ((::System::Void(*)(::PVOID, ::ACNLKLCDALA*))((::PBYTE)hIl2Cpp + BEMJBLHDDOP_BBOMJDBNHIC_OFFSET))(this, PAHAKIECKMN);
	}

	::System::Void LJNFANAEHHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEMJBLHDDOP_LJNFANAEHHA_OFFSET))(this);
	}
};
