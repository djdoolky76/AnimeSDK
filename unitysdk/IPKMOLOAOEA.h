#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFGOBPJPGBE.h"
#include "unitysdk/MPONGHENLLE.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class IBENDELLLAO;
class NNHCKAIIBKD;
namespace UnityEngine { class Transform; }

#define IPKMOLOAOEA_BOANDCDOFDF_OFFSET UNITYSDK_OFFSET(0x13CA28E0)
#define IPKMOLOAOEA_DEGAODLIHOF_OFFSET UNITYSDK_OFFSET(0x13CA2520)
#define IPKMOLOAOEA_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x13CA2870)
#define IPKMOLOAOEA_HFPALAEFDOE_OFFSET UNITYSDK_OFFSET(0x13CA2600)
#define IPKMOLOAOEA_HHMPPADLEEL_OFFSET UNITYSDK_OFFSET(0x13CA2AD0)
#define IPKMOLOAOEA_LJAPJFDPIKF_OFFSET UNITYSDK_OFFSET(0x13CA2770)
#define IPKMOLOAOEA_PDEMODKIMME_OFFSET UNITYSDK_OFFSET(0x13CA2670)
#define IPKMOLOAOEA_PHHFAIOGAFC_OFFSET UNITYSDK_OFFSET(0x13CA2B40)
#define IPKMOLOAOEA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x13CA27E0)
#define IPKMOLOAOEA_PHOFFDLOEMB_OFFSET UNITYSDK_OFFSET(0x13CA2C30)
#define IPKMOLOAOEA__CTOR_OFFSET UNITYSDK_OFFSET(0x13CA2510)

inline static constexpr unsigned int IPKMOLOAOEA_TypeDefinitionIndex = 62102;

class IPKMOLOAOEA : public ::System::Object
{
public:
	::NNHCKAIIBKD* IDKNKLMBNMB; // 0x10
	::NNHCKAIIBKD* GJPPIKEKODN; // 0x18
	::NNHCKAIIBKD* FGPEKAEECEI; // 0x20
	::System::Boolean IAOJECCOMPN; // 0x28
	::System::Byte _padding0[0x1];
	::MPONGHENLLE INFCEADBHGL; // 0x2A

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPKMOLOAOEA__CTOR_OFFSET))(this);
	}

	::System::Void DEGAODLIHOF(::UnityEngine::Vector3 JEDKLKAFPCC, ::UnityEngine::Vector3 FDPBIEONAFD)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IPKMOLOAOEA_DEGAODLIHOF_OFFSET))(this, JEDKLKAFPCC, FDPBIEONAFD);
	}

	::System::Void HFPALAEFDOE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPKMOLOAOEA_HFPALAEFDOE_OFFSET))(this);
	}

	::System::Void PDEMODKIMME(::UnityEngine::Transform* LFJAEIBHLOP, ::UnityEngine::Transform* NCDCDPOBDHF)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + IPKMOLOAOEA_PDEMODKIMME_OFFSET))(this, LFJAEIBHLOP, NCDCDPOBDHF);
	}

	::System::Void LJAPJFDPIKF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPKMOLOAOEA_LJAPJFDPIKF_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPKMOLOAOEA_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void HFBPONNNLBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPKMOLOAOEA_HFBPONNNLBA_OFFSET))(this);
	}

	::System::Void BOANDCDOFDF(::IBENDELLLAO* LMJBDKEEOHJ)
	{
		return ((::System::Void(*)(::PVOID, ::IBENDELLLAO*))((::PBYTE)hIl2Cpp + IPKMOLOAOEA_BOANDCDOFDF_OFFSET))(this, LMJBDKEEOHJ);
	}

	::System::Void HHMPPADLEEL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPKMOLOAOEA_HHMPPADLEEL_OFFSET))(this);
	}

	::System::Void PHHFAIOGAFC(::BFGOBPJPGBE CIAHAAKLADN)
	{
		return ((::System::Void(*)(::PVOID, ::BFGOBPJPGBE))((::PBYTE)hIl2Cpp + IPKMOLOAOEA_PHHFAIOGAFC_OFFSET))(this, CIAHAAKLADN);
	}

	::System::Void PHOFFDLOEMB(::IBENDELLLAO* LMJBDKEEOHJ)
	{
		return ((::System::Void(*)(::PVOID, ::IBENDELLLAO*))((::PBYTE)hIl2Cpp + IPKMOLOAOEA_PHOFFDLOEMB_OFFSET))(this, LMJBDKEEOHJ);
	}
};
