#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/NAPInput/IMUData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/NAPInput/Attitude.h"
#include "unitysdk/UnityEngine/Vector3.h"

class PENGCIMGKAB;

#define GCDJNNKAEPI_CKFMJHHKLJL_OFFSET UNITYSDK_OFFSET(0x13DB6800)
#define GCDJNNKAEPI_DILABNGJPMN_OFFSET UNITYSDK_OFFSET(0x13DB6980)
#define GCDJNNKAEPI_EJAANMAEHON_OFFSET UNITYSDK_OFFSET(0x13DB6A20)
#define GCDJNNKAEPI_EJFFLOLJFON_OFFSET UNITYSDK_OFFSET(0x13DB68F0)
#define GCDJNNKAEPI_GPCJBHFMGGJ_OFFSET UNITYSDK_OFFSET(0x13DB6CA0)
#define GCDJNNKAEPI_HGMPDAFAOKC_OFFSET UNITYSDK_OFFSET(0x13DB6DA0)
#define GCDJNNKAEPI_ICODANAONCO_OFFSET UNITYSDK_OFFSET(0x13DB6D70)
#define GCDJNNKAEPI_KPNBBCDCPOA_OFFSET UNITYSDK_OFFSET(0x13DB6B60)
#define GCDJNNKAEPI_MEOJOJBGDPL_OFFSET UNITYSDK_OFFSET(0x13DB6990)
#define GCDJNNKAEPI_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x13DB6AE0)
#define GCDJNNKAEPI_OMCOBCMJFEO_OFFSET UNITYSDK_OFFSET(0x13DB6DD0)
#define GCDJNNKAEPI__CTOR_OFFSET UNITYSDK_OFFSET(0x13DB6780)

inline static constexpr unsigned int GCDJNNKAEPI_TypeDefinitionIndex = 83270;

class GCDJNNKAEPI : public ::System::Object
{
public:
	::PENGCIMGKAB* MMEFMDBKPBL; // 0x10
	::MoleMole::NAPInput::IMUData DFJOCNFBOGM; // 0x18
	::System::Boolean MHPABKFDIOI; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCDJNNKAEPI__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 CKFMJHHKLJL()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GCDJNNKAEPI_CKFMJHHKLJL_OFFSET))(this);
	}

	::UnityEngine::Vector3 EJFFLOLJFON()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GCDJNNKAEPI_EJFFLOLJFON_OFFSET))(this);
	}

	::System::Boolean DILABNGJPMN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GCDJNNKAEPI_DILABNGJPMN_OFFSET))(this);
	}

	::System::Void MEOJOJBGDPL(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GCDJNNKAEPI_MEOJOJBGDPL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EJAANMAEHON(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GCDJNNKAEPI_EJAANMAEHON_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCDJNNKAEPI_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void KPNBBCDCPOA(::UnityEngine::Vector3 MMGKMLFBMEM, ::UnityEngine::Vector3 NJJNJBLDLBC, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + GCDJNNKAEPI_KPNBBCDCPOA_OFFSET))(this, MMGKMLFBMEM, NJJNJBLDLBC, PMNLNNGEIFM);
	}

	::MoleMole::NAPInput::Attitude GPCJBHFMGGJ()
	{
		return ((::MoleMole::NAPInput::Attitude(*)(::PVOID))((::PBYTE)hIl2Cpp + GCDJNNKAEPI_GPCJBHFMGGJ_OFFSET))(this);
	}

	::System::Single ICODANAONCO()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GCDJNNKAEPI_ICODANAONCO_OFFSET))(this);
	}

	::System::Single HGMPDAFAOKC()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GCDJNNKAEPI_HGMPDAFAOKC_OFFSET))(this);
	}

	::System::Void OMCOBCMJFEO(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GCDJNNKAEPI_OMCOBCMJFEO_OFFSET))(this, EGEGIMGMJHN);
	}
};
