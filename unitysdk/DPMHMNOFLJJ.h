#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJCAJJEAJPC.h"

class EBEAAFHPBJG;
class MGDBHPOLPJG;
namespace Nap::NapECS { class EcsWorld; }

#define DPMHMNOFLJJ_BKJPMPBEHDO_OFFSET UNITYSDK_OFFSET(0xFDCCCA0)
#define DPMHMNOFLJJ_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xFDCC8D0)
#define DPMHMNOFLJJ_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0xFDCCF80)
#define DPMHMNOFLJJ_NIGDIMFIAEJ_OFFSET UNITYSDK_OFFSET(0xFDCD020)
#define DPMHMNOFLJJ_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0xFDCCD40)
#define DPMHMNOFLJJ_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0xFDCCA60)
#define DPMHMNOFLJJ_START_OFFSET UNITYSDK_OFFSET(0xFDCC870)
#define DPMHMNOFLJJ__CTOR_OFFSET UNITYSDK_OFFSET(0xFDCCC30)

inline static constexpr unsigned int DPMHMNOFLJJ_TypeDefinitionIndex = 42885;

class DPMHMNOFLJJ : public ::FJCAJJEAJPC
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPMHMNOFLJJ__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPMHMNOFLJJ_START_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + DPMHMNOFLJJ_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void PLPONJAKNEB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DPMHMNOFLJJ_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void BKJPMPBEHDO(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DPMHMNOFLJJ_BKJPMPBEHDO_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void OKJCHFGIKBH(::EBEAAFHPBJG* POBADKEDFOE, ::MGDBHPOLPJG* GDOICJMILFH)
	{
		return ((::System::Void(*)(::EBEAAFHPBJG*, ::MGDBHPOLPJG*))((::PBYTE)hIl2Cpp + DPMHMNOFLJJ_OKJCHFGIKBH_OFFSET))(POBADKEDFOE, GDOICJMILFH);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + DPMHMNOFLJJ_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void NIGDIMFIAEJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPMHMNOFLJJ_NIGDIMFIAEJ_OFFSET))(this);
	}
};
