#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJCAJJEAJPC.h"

class GNDEANADMGH;
class KKOCDIKKHAG;
class PNHAEMFHHEB;
namespace Nap::NapECS { class EcsWorld; }

#define KHBEBKBAKEF_BKJPMPBEHDO_OFFSET UNITYSDK_OFFSET(0x13C5F990)
#define KHBEBKBAKEF_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x13C5ECE0)
#define KHBEBKBAKEF_ICJAPOEFOLI_OFFSET UNITYSDK_OFFSET(0x13C5F090)
#define KHBEBKBAKEF_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x13C5F8F0)
#define KHBEBKBAKEF_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x13C5EE90)
#define KHBEBKBAKEF__CTOR_OFFSET UNITYSDK_OFFSET(0x13C5F020)

inline static constexpr unsigned int KHBEBKBAKEF_TypeDefinitionIndex = 71729;

class KHBEBKBAKEF : public ::FJCAJJEAJPC
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHBEBKBAKEF__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + KHBEBKBAKEF_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void PLPONJAKNEB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KHBEBKBAKEF_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM);
	}

	static ::System::Void ICJAPOEFOLI(::KKOCDIKKHAG* DLFOBFANLOF, ::GNDEANADMGH* KKPFEIGFAKK, ::PNHAEMFHHEB* KNENMPAIHBJ)
	{
		return ((::System::Void(*)(::KKOCDIKKHAG*, ::GNDEANADMGH*, ::PNHAEMFHHEB*))((::PBYTE)hIl2Cpp + KHBEBKBAKEF_ICJAPOEFOLI_OFFSET))(DLFOBFANLOF, KKPFEIGFAKK, KNENMPAIHBJ);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + KHBEBKBAKEF_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void BKJPMPBEHDO(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KHBEBKBAKEF_BKJPMPBEHDO_OFFSET))(this, MIALFKCCCPI);
	}
};
