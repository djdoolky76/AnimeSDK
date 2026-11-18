#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define NJADBOGPHMC_CKLBBHMGPJH_OFFSET UNITYSDK_OFFSET(0x10D7C120)
#define NJADBOGPHMC_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x10D7BF60)
#define NJADBOGPHMC_EEHCAEOKBPI_OFFSET UNITYSDK_OFFSET(0x10D7C100)
#define NJADBOGPHMC_FKBPHMONOHJ_OFFSET UNITYSDK_OFFSET(0x10D7C010)
#define NJADBOGPHMC_KAKPFIEJHDI_OFFSET UNITYSDK_OFFSET(0x10D7C1C0)
#define NJADBOGPHMC_LGOKJGILIBB_OFFSET UNITYSDK_OFFSET(0x10D7C0A0)
#define NJADBOGPHMC_MFBBMJEFJGG_OFFSET UNITYSDK_OFFSET(0x10D7C130)
#define NJADBOGPHMC_NDEOGGKBPIF_OFFSET UNITYSDK_OFFSET(0x10D7C250)
#define NJADBOGPHMC_NFGENOGIIJG_OFFSET UNITYSDK_OFFSET(0x10D7C220)
#define NJADBOGPHMC__CTOR_OFFSET UNITYSDK_OFFSET(0x10D7BF50)

inline static constexpr unsigned int NJADBOGPHMC_TypeDefinitionIndex = 92618;

class NJADBOGPHMC : public ::System::Object
{
public:
	::UnityEngine::Vector3 OCHPGJHLDLJ; // 0x10
	::UnityEngine::Vector3 OHOGDOMNHNK; // 0x1C
	::UnityEngine::Vector3 _OOALADFDJBL_k__BackingField; // 0x28
	::System::Single FNIOPKPHDEH; // 0x34
	::UnityEngine::Vector3 MJNOOFJLJCP; // 0x38
	::System::Boolean NNEFIMCKAMG; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJADBOGPHMC__CTOR_OFFSET))(this);
	}

	::NJADBOGPHMC* DGNAAPGKIPL()
	{
		return ((::NJADBOGPHMC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJADBOGPHMC_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Void FKBPHMONOHJ(::UnityEngine::Vector3 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NJADBOGPHMC_FKBPHMONOHJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void LGOKJGILIBB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJADBOGPHMC_LGOKJGILIBB_OFFSET))(this);
	}

	::UnityEngine::Vector3 EEHCAEOKBPI()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NJADBOGPHMC_EEHCAEOKBPI_OFFSET))(this);
	}

	::System::Void CKLBBHMGPJH(::UnityEngine::Vector3 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NJADBOGPHMC_CKLBBHMGPJH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void MFBBMJEFJGG(::UnityEngine::Vector3 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NJADBOGPHMC_MFBBMJEFJGG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void KAKPFIEJHDI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJADBOGPHMC_KAKPFIEJHDI_OFFSET))(this);
	}

	::UnityEngine::Vector3 NFGENOGIIJG()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NJADBOGPHMC_NFGENOGIIJG_OFFSET))(this);
	}

	::UnityEngine::Vector3 NDEOGGKBPIF()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NJADBOGPHMC_NDEOGGKBPIF_OFFSET))(this);
	}
};
