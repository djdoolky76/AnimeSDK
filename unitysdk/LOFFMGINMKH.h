#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHFDHMBEGJE.h"

class ALMMGOFACDF;

#define LOFFMGINMKH_DFJPMOOOLHM_OFFSET UNITYSDK_OFFSET(0xD43C3C0)
#define LOFFMGINMKH_LBCBMNCKDPG_OFFSET UNITYSDK_OFFSET(0xD43C660)
#define LOFFMGINMKH_MMGMBDMNCLF_OFFSET UNITYSDK_OFFSET(0xD43C180)
#define LOFFMGINMKH_PBGJKMAEINN_OFFSET UNITYSDK_OFFSET(0xD43C6F0)
#define LOFFMGINMKH__CTOR_OFFSET UNITYSDK_OFFSET(0xD43C170)

inline static constexpr unsigned int LOFFMGINMKH_TypeDefinitionIndex = 64764;

class LOFFMGINMKH : public ::CHFDHMBEGJE
{
public:
	::ALMMGOFACDF* LAHICADJJOB; // 0x50
	::System::Single MIALCGHPAAH; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOFFMGINMKH__CTOR_OFFSET))(this);
	}

	::System::Void MMGMBDMNCLF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOFFMGINMKH_MMGMBDMNCLF_OFFSET))(this);
	}

	::System::Void DFJPMOOOLHM(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LOFFMGINMKH_DFJPMOOOLHM_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void LBCBMNCKDPG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOFFMGINMKH_LBCBMNCKDPG_OFFSET))(this);
	}

	::System::Void PBGJKMAEINN(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LOFFMGINMKH_PBGJKMAEINN_OFFSET))(this, MIALFKCCCPI);
	}
};
