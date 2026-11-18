#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LONAFLHKHBE.h"
#include "unitysdk/MPONGHENLLE.h"
#include "unitysdk/UnityEngine/Vector3.h"

class IBENDELLLAO;
class IPKMOLOAOEA;
namespace UnityEngine { class Transform; }

#define CKOMBDCNEHB_DEGAODLIHOF_OFFSET UNITYSDK_OFFSET(0x159DFB50)
#define CKOMBDCNEHB_EOAMBPDIAJD_OFFSET UNITYSDK_OFFSET(0x159DFAE0)
#define CKOMBDCNEHB_FDDFCGPAGAF_OFFSET UNITYSDK_OFFSET(0x159DFCB0)
#define CKOMBDCNEHB_FOEOGJIPOEO_OFFSET UNITYSDK_OFFSET(0x159DFA30)
#define CKOMBDCNEHB_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x159DFD50)
#define CKOMBDCNEHB_KIBKMMDLHFD_OFFSET UNITYSDK_OFFSET(0x159DFA90)
#define CKOMBDCNEHB_LJAPJFDPIKF_OFFSET UNITYSDK_OFFSET(0x159DFDF0)
#define CKOMBDCNEHB_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0x159DFC00)
#define CKOMBDCNEHB_MPDEHNMCAIM_OFFSET UNITYSDK_OFFSET(0x159DFAF0)
#define CKOMBDCNEHB_OAOOBACHAAD_OFFSET UNITYSDK_OFFSET(0x159DF950)
#define CKOMBDCNEHB__CTOR_OFFSET UNITYSDK_OFFSET(0x159DF900)

inline static constexpr unsigned int CKOMBDCNEHB_TypeDefinitionIndex = 90732;

class CKOMBDCNEHB : public ::LONAFLHKHBE
{
public:
	::UnityEngine::Transform* BMNGMPHOIJP; // 0x18
	::UnityEngine::Transform* CAIFHHKMNPG; // 0x20
	::IPKMOLOAOEA* KKONNIIEELK; // 0x28

	::System::Void _ctor(::UnityEngine::Transform* LFJAEIBHLOP, ::UnityEngine::Transform* NCDCDPOBDHF)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CKOMBDCNEHB__CTOR_OFFSET))(this, LFJAEIBHLOP, NCDCDPOBDHF);
	}

	::System::Void OAOOBACHAAD(::IBENDELLLAO* LMJBDKEEOHJ, ::System::Boolean BIHPGJIELBJ)
	{
		return ((::System::Void(*)(::PVOID, ::IBENDELLLAO*, ::System::Boolean))((::PBYTE)hIl2Cpp + CKOMBDCNEHB_OAOOBACHAAD_OFFSET))(this, LMJBDKEEOHJ, BIHPGJIELBJ);
	}

	::System::Void KIBKMMDLHFD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKOMBDCNEHB_KIBKMMDLHFD_OFFSET))(this);
	}

	::System::Void FOEOGJIPOEO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKOMBDCNEHB_FOEOGJIPOEO_OFFSET))(this);
	}

	::System::Void EOAMBPDIAJD(::IBENDELLLAO* MIALFKCCCPI, ::System::Boolean KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::IBENDELLLAO*, ::System::Boolean))((::PBYTE)hIl2Cpp + CKOMBDCNEHB_EOAMBPDIAJD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void MPDEHNMCAIM(::MPONGHENLLE INFCEADBHGL)
	{
		return ((::System::Void(*)(::PVOID, ::MPONGHENLLE))((::PBYTE)hIl2Cpp + CKOMBDCNEHB_MPDEHNMCAIM_OFFSET))(this, INFCEADBHGL);
	}

	::System::Void DEGAODLIHOF(::UnityEngine::Vector3 JEDKLKAFPCC, ::UnityEngine::Vector3 FDPBIEONAFD)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CKOMBDCNEHB_DEGAODLIHOF_OFFSET))(this, JEDKLKAFPCC, FDPBIEONAFD);
	}

	::System::Void LJMIPGJJELP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKOMBDCNEHB_LJMIPGJJELP_OFFSET))(this);
	}

	::System::Void FDDFCGPAGAF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKOMBDCNEHB_FDDFCGPAGAF_OFFSET))(this);
	}

	::System::Void HFBPONNNLBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKOMBDCNEHB_HFBPONNNLBA_OFFSET))(this);
	}

	::System::Void LJAPJFDPIKF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKOMBDCNEHB_LJAPJFDPIKF_OFFSET))(this);
	}
};
