#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EPECLFAEAHB.h"
#include "unitysdk/MoleMole/NAPInput/Attitude.h"
#include "unitysdk/MoleMole/NAPInput/IMUData.h"
#include "unitysdk/UnityEngine/Vector3.h"

class IIEBHCIFMKF_OCGCLPOHEDN;

#define IIEBHCIFMKF_BNENANLOEEN_OFFSET UNITYSDK_OFFSET(0x16A9E540)
#define IIEBHCIFMKF_DEPOFLHLLDC_OFFSET UNITYSDK_OFFSET(0x16A9E7F0)
#define IIEBHCIFMKF_DOKKJJNOBCF_OFFSET UNITYSDK_OFFSET(0x16A9E3B0)
#define IIEBHCIFMKF_GBFAIDIGHDN_OFFSET UNITYSDK_OFFSET(0x16A9E850)
#define IIEBHCIFMKF_GIAOBHOJCDP_OFFSET UNITYSDK_OFFSET(0x16A9E1E0)
#define IIEBHCIFMKF_GNFLPIIHBAI_OFFSET UNITYSDK_OFFSET(0x16A9E810)
#define IIEBHCIFMKF_HHMNKGDKFEP_OFFSET UNITYSDK_OFFSET(0x16A9E170)
#define IIEBHCIFMKF_KFLEGELNFEF_OFFSET UNITYSDK_OFFSET(0x16A9E650)
#define IIEBHCIFMKF_LFPCBFKJJAM_OFFSET UNITYSDK_OFFSET(0x16A9E830)
#define IIEBHCIFMKF_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x16A9E670)
#define IIEBHCIFMKF__CTOR_OFFSET UNITYSDK_OFFSET(0x16A9DFC0)

inline static constexpr unsigned int IIEBHCIFMKF_TypeDefinitionIndex = 43648;

class IIEBHCIFMKF : public ::EPECLFAEAHB
{
public:
	::IIEBHCIFMKF_OCGCLPOHEDN* CNMPNEAKLPB; // 0x10
	::MoleMole::NAPInput::Attitude _LPLALBALGJL_k__BackingField; // 0x18
	::MoleMole::NAPInput::Attitude _LJDANDPHNHD_k__BackingField; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIEBHCIFMKF__CTOR_OFFSET))(this);
	}

	::MoleMole::NAPInput::IMUData GIAOBHOJCDP(::MoleMole::NAPInput::IMUData BPIKCCNLPBD)
	{
		return ((::MoleMole::NAPInput::IMUData(*)(::PVOID, ::MoleMole::NAPInput::IMUData))((::PBYTE)hIl2Cpp + IIEBHCIFMKF_GIAOBHOJCDP_OFFSET))(this, BPIKCCNLPBD);
	}

	::System::Single KFLEGELNFEF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IIEBHCIFMKF_KFLEGELNFEF_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIEBHCIFMKF_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void DEPOFLHLLDC(::MoleMole::NAPInput::Attitude EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::NAPInput::Attitude))((::PBYTE)hIl2Cpp + IIEBHCIFMKF_DEPOFLHLLDC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void HHMNKGDKFEP(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IIEBHCIFMKF_HHMNKGDKFEP_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::NAPInput::Attitude GNFLPIIHBAI()
	{
		return ((::MoleMole::NAPInput::Attitude(*)(::PVOID))((::PBYTE)hIl2Cpp + IIEBHCIFMKF_GNFLPIIHBAI_OFFSET))(this);
	}

	::System::Void LFPCBFKJJAM(::MoleMole::NAPInput::Attitude EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::NAPInput::Attitude))((::PBYTE)hIl2Cpp + IIEBHCIFMKF_LFPCBFKJJAM_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void BNENANLOEEN(::UnityEngine::Vector3 MMGKMLFBMEM, ::UnityEngine::Vector3 NJJNJBLDLBC, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + IIEBHCIFMKF_BNENANLOEEN_OFFSET))(this, MMGKMLFBMEM, NJJNJBLDLBC, PMNLNNGEIFM);
	}

	::System::Void DOKKJJNOBCF(::UnityEngine::Vector3 MMGKMLFBMEM, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + IIEBHCIFMKF_DOKKJJNOBCF_OFFSET))(this, MMGKMLFBMEM, PMNLNNGEIFM);
	}

	::MoleMole::NAPInput::Attitude GBFAIDIGHDN()
	{
		return ((::MoleMole::NAPInput::Attitude(*)(::PVOID))((::PBYTE)hIl2Cpp + IIEBHCIFMKF_GBFAIDIGHDN_OFFSET))(this);
	}
};
