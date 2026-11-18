#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJCAJJEAJPC.h"

class BAANNHAOKEL;
namespace Nap::NapECS { class EcsWorld; }

#define DHCJMINJNHD_BKJPMPBEHDO_OFFSET UNITYSDK_OFFSET(0x12411750)
#define DHCJMINJNHD_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x12411340)
#define DHCJMINJNHD_JDDMFEELKDH_OFFSET UNITYSDK_OFFSET(0x124116B0)
#define DHCJMINJNHD_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x124117F0)
#define DHCJMINJNHD_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x124114B0)
#define DHCJMINJNHD__CTOR_OFFSET UNITYSDK_OFFSET(0x12411640)

inline static constexpr unsigned int DHCJMINJNHD_TypeDefinitionIndex = 44335;

class DHCJMINJNHD : public ::FJCAJJEAJPC
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHCJMINJNHD__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + DHCJMINJNHD_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void PLPONJAKNEB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DHCJMINJNHD_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM);
	}

	static ::System::Void JDDMFEELKDH(::BAANNHAOKEL* AOFAGECOBKL)
	{
		return ((::System::Void(*)(::BAANNHAOKEL*))((::PBYTE)hIl2Cpp + DHCJMINJNHD_JDDMFEELKDH_OFFSET))(AOFAGECOBKL);
	}

	::System::Void BKJPMPBEHDO(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DHCJMINJNHD_BKJPMPBEHDO_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + DHCJMINJNHD_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}
};
