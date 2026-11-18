#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define NJNGHAOBGCA_DIGEIBDMKDO_OFFSET UNITYSDK_OFFSET(0x3CE9E0)
#define NJNGHAOBGCA_MCAEFJKLPLH_OFFSET UNITYSDK_OFFSET(0x411A70)
#define NJNGHAOBGCA_ODAPHGKCKCK_OFFSET UNITYSDK_OFFSET(0x359320)
#define NJNGHAOBGCA__CTOR_OFFSET UNITYSDK_OFFSET(0x731360)

inline static constexpr unsigned int NJNGHAOBGCA_TypeDefinitionIndex = 28935;

struct alignas(4) NJNGHAOBGCA
{
	::System::Int32 _JLLANNHFOHH_k__BackingField; // 0x10
	::System::Int32 _DGNFONGLMAB_k__BackingField; // 0x14
	::System::Single _NKALEKCIFNH_k__BackingField; // 0x18

	::System::Void _ctor(::System::Int32 EHGLECJLADK, ::System::Int32 JCEJDIHGDEA, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + NJNGHAOBGCA__CTOR_OFFSET))(this, EHGLECJLADK, JCEJDIHGDEA, PMNLNNGEIFM);
	}

	::System::Int32 ODAPHGKCKCK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJNGHAOBGCA_ODAPHGKCKCK_OFFSET))(this);
	}

	::System::Int32 DIGEIBDMKDO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJNGHAOBGCA_DIGEIBDMKDO_OFFSET))(this);
	}

	::System::Single MCAEFJKLPLH()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NJNGHAOBGCA_MCAEFJKLPLH_OFFSET))(this);
	}
};
