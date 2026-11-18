#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPCBGBDIFDE_KPANOFKOKIK;

#define BPCBGBDIFDE_OPIOAFFGDHF_DCDOKNAGOKP_OFFSET UNITYSDK_OFFSET(0x10E1D0F0)
#define BPCBGBDIFDE_OPIOAFFGDHF_HEKFBNFJCPI_OFFSET UNITYSDK_OFFSET(0x10E1D070)
#define BPCBGBDIFDE_OPIOAFFGDHF__CTOR_OFFSET UNITYSDK_OFFSET(0x10E1D060)

inline static constexpr unsigned int BPCBGBDIFDE_OPIOAFFGDHF_TypeDefinitionIndex = 78650;

class BPCBGBDIFDE_OPIOAFFGDHF : public ::System::Object
{
public:
	::BPCBGBDIFDE_KPANOFKOKIK* FGBNBFHOKAA; // 0x10
	::System::Single IMLLDOHDCNC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_OPIOAFFGDHF__CTOR_OFFSET))(this);
	}

	::System::Void HEKFBNFJCPI(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_OPIOAFFGDHF_HEKFBNFJCPI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single DCDOKNAGOKP()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_OPIOAFFGDHF_DCDOKNAGOKP_OFFSET))(this);
	}
};
