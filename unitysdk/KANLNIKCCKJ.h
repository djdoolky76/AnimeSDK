#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KANLNIKCCKJ_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x18A2CEC0)
#define KANLNIKCCKJ_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x18A2CE10)
#define KANLNIKCCKJ_PDMLIDFIGFL_OFFSET UNITYSDK_OFFSET(0x18A2CE60)
#define KANLNIKCCKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x18A2CE00)

inline static constexpr unsigned int KANLNIKCCKJ_TypeDefinitionIndex = 82906;

class KANLNIKCCKJ : public ::System::Object
{
public:
	::System::Int32 GFLGLCKEMOL; // 0x10
	::System::Int32 PNBPAMAPJGH; // 0x14
	::System::Int32 EHENJKAIEFF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KANLNIKCCKJ__CTOR_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KANLNIKCCKJ_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void PDMLIDFIGFL(::System::Int32 HBEKKMCBGBK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KANLNIKCCKJ_PDMLIDFIGFL_OFFSET))(this, HBEKKMCBGBK);
	}

	::System::Void BBOMJDBNHIC(::System::Int32 PNJNAAHKAIB, ::System::Int32 IHHAAFKBJFC, ::System::Int32 DNFNKBNBJHM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KANLNIKCCKJ_BBOMJDBNHIC_OFFSET))(this, PNJNAAHKAIB, IHHAAFKBJFC, DNFNKBNBJHM);
	}
};
