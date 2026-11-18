#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJCAJJEAJPC.h"

class BCLLIAMENNM_HEFGMOHKDLP;
class PJBICAOMDLN;
namespace Nap::NapECS { class EcsWorld; }
namespace System { class EventArgs; }

#define BCLLIAMENNM_CNMLPKHPFFP_OFFSET UNITYSDK_OFFSET(0x1423F750)
#define BCLLIAMENNM_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x1423ED90)
#define BCLLIAMENNM_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x1423F620)
#define BCLLIAMENNM_NEAEDLAMBAP_OFFSET UNITYSDK_OFFSET(0x1423F340)
#define BCLLIAMENNM_NIGDIMFIAEJ_OFFSET UNITYSDK_OFFSET(0x1423F6C0)
#define BCLLIAMENNM_PBKCPNFNJGN_OFFSET UNITYSDK_OFFSET(0x1423EF90)
#define BCLLIAMENNM_PMLNEEOCDPO_OFFSET UNITYSDK_OFFSET(0x1423F2F0)
#define BCLLIAMENNM_START_OFFSET UNITYSDK_OFFSET(0x1423EC80)
#define BCLLIAMENNM__CTOR_OFFSET UNITYSDK_OFFSET(0x1423EF20)

inline static constexpr unsigned int BCLLIAMENNM_TypeDefinitionIndex = 74572;

class BCLLIAMENNM : public ::FJCAJJEAJPC
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLLIAMENNM__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLLIAMENNM_START_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + BCLLIAMENNM_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	static ::System::Void PBKCPNFNJGN(::System::EventArgs* OJPFHPALLHG)
	{
		return ((::System::Void(*)(::System::EventArgs*))((::PBYTE)hIl2Cpp + BCLLIAMENNM_PBKCPNFNJGN_OFFSET))(OJPFHPALLHG);
	}

	static ::System::Boolean PMLNEEOCDPO(::PJBICAOMDLN* OALCOHFBEAB)
	{
		return ((::System::Boolean(*)(::PJBICAOMDLN*))((::PBYTE)hIl2Cpp + BCLLIAMENNM_PMLNEEOCDPO_OFFSET))(OALCOHFBEAB);
	}

	static ::System::Void NEAEDLAMBAP(::PJBICAOMDLN* MEIKMBGDJPD, ::BCLLIAMENNM_HEFGMOHKDLP* CMAOBDOAKEI)
	{
		return ((::System::Void(*)(::PJBICAOMDLN*, ::BCLLIAMENNM_HEFGMOHKDLP*))((::PBYTE)hIl2Cpp + BCLLIAMENNM_NEAEDLAMBAP_OFFSET))(MEIKMBGDJPD, CMAOBDOAKEI);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + BCLLIAMENNM_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void NIGDIMFIAEJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLLIAMENNM_NIGDIMFIAEJ_OFFSET))(this);
	}

	static ::System::Void CNMLPKHPFFP(::System::EventArgs* OJPFHPALLHG)
	{
		return ((::System::Void(*)(::System::EventArgs*))((::PBYTE)hIl2Cpp + BCLLIAMENNM_CNMLPKHPFFP_OFFSET))(OJPFHPALLHG);
	}
};
