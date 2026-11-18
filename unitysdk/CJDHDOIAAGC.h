#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJCAJJEAJPC.h"

class GBAJCFMAIHG;
class MBJCLLBMALO;
namespace Nap::NapECS { class EcsWorld; }

#define CJDHDOIAAGC_BKJPMPBEHDO_OFFSET UNITYSDK_OFFSET(0x1A1AB740)
#define CJDHDOIAAGC_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x1A1AB0D0)
#define CJDHDOIAAGC_MDMHCKNLDBB_OFFSET UNITYSDK_OFFSET(0x1A1AB460)
#define CJDHDOIAAGC_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x1A1AB7E0)
#define CJDHDOIAAGC_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x1A1AB260)
#define CJDHDOIAAGC__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1AB3F0)

inline static constexpr unsigned int CJDHDOIAAGC_TypeDefinitionIndex = 40821;

class CJDHDOIAAGC : public ::FJCAJJEAJPC
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJDHDOIAAGC__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CJDHDOIAAGC_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void PLPONJAKNEB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CJDHDOIAAGC_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM);
	}

	static ::System::Void MDMHCKNLDBB(::MBJCLLBMALO* EFEBFFCEJEF, ::GBAJCFMAIHG* DAELFOBJJHM)
	{
		return ((::System::Void(*)(::MBJCLLBMALO*, ::GBAJCFMAIHG*))((::PBYTE)hIl2Cpp + CJDHDOIAAGC_MDMHCKNLDBB_OFFSET))(EFEBFFCEJEF, DAELFOBJJHM);
	}

	::System::Void BKJPMPBEHDO(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CJDHDOIAAGC_BKJPMPBEHDO_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CJDHDOIAAGC_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}
};
