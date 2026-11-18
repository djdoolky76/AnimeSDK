#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJCAJJEAJPC.h"

class MBJCLLBMALO;
class PBGECGKKLKD;
namespace Nap::NapECS { class EcsWorld; }

#define HOIKIINAJLG_BKJPMPBEHDO_OFFSET UNITYSDK_OFFSET(0x15BE1920)
#define HOIKIINAJLG_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x15BE14D0)
#define HOIKIINAJLG_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x15BE1880)
#define HOIKIINAJLG_PEFAFELKFEL_OFFSET UNITYSDK_OFFSET(0x15BE19C0)
#define HOIKIINAJLG_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x15BE1660)
#define HOIKIINAJLG__CTOR_OFFSET UNITYSDK_OFFSET(0x15BE1810)

inline static constexpr unsigned int HOIKIINAJLG_TypeDefinitionIndex = 80399;

class HOIKIINAJLG : public ::FJCAJJEAJPC
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOIKIINAJLG__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + HOIKIINAJLG_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void PLPONJAKNEB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HOIKIINAJLG_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + HOIKIINAJLG_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void BKJPMPBEHDO(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HOIKIINAJLG_BKJPMPBEHDO_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void PEFAFELKFEL(::PBGECGKKLKD* GBELIHABEDH, ::MBJCLLBMALO* GKBJOPJKCLB)
	{
		return ((::System::Void(*)(::PBGECGKKLKD*, ::MBJCLLBMALO*))((::PBYTE)hIl2Cpp + HOIKIINAJLG_PEFAFELKFEL_OFFSET))(GBELIHABEDH, GKBJOPJKCLB);
	}
};
