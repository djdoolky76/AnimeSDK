#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EPECLFAEAHB.h"
#include "unitysdk/MoleMole/NAPInput/Attitude.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/MoleMole/NAPInput/IMUData.h"

#define CJOJLPEKIAF_AAANGDMAADK_OFFSET UNITYSDK_OFFSET(0x16964D90)
#define CJOJLPEKIAF_CBIOBCOPMAM_OFFSET UNITYSDK_OFFSET(0x16964680)
#define CJOJLPEKIAF_CLHMDILECDC_OFFSET UNITYSDK_OFFSET(0x16964D10)
#define CJOJLPEKIAF_DLKJNJJPOGJ_OFFSET UNITYSDK_OFFSET(0x16964930)
#define CJOJLPEKIAF_DOKKJJNOBCF_OFFSET UNITYSDK_OFFSET(0x169644F0)
#define CJOJLPEKIAF_EINLDHDDHNB_OFFSET UNITYSDK_OFFSET(0x16964D30)
#define CJOJLPEKIAF_EKPNBLNOIIK_OFFSET UNITYSDK_OFFSET(0x16964D70)
#define CJOJLPEKIAF_GIAOBHOJCDP_OFFSET UNITYSDK_OFFSET(0x16964190)
#define CJOJLPEKIAF_KBHCDENJNCE_OFFSET UNITYSDK_OFFSET(0x16964D50)
#define CJOJLPEKIAF_LJMJEBOOIIL_OFFSET UNITYSDK_OFFSET(0x16964750)
#define CJOJLPEKIAF_MIJNCBKECAJ_OFFSET UNITYSDK_OFFSET(0x16964CD0)
#define CJOJLPEKIAF_NGAGODADMMJ_OFFSET UNITYSDK_OFFSET(0x16964CF0)
#define CJOJLPEKIAF_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x16964DD0)
#define CJOJLPEKIAF_OHNKKKDIPHP_OFFSET UNITYSDK_OFFSET(0x16964DB0)
#define CJOJLPEKIAF_PBDOFFKCALB_OFFSET UNITYSDK_OFFSET(0x16964480)
#define CJOJLPEKIAF__CTOR_OFFSET UNITYSDK_OFFSET(0x16963DD0)

inline static constexpr unsigned int CJOJLPEKIAF_TypeDefinitionIndex = 54406;

class CJOJLPEKIAF : public ::EPECLFAEAHB
{
public:
	::UnityEngine::Quaternion KOIJDOGBIFJ; // 0x10
	::UnityEngine::Vector3 OFLGICJNAIG; // 0x20
	::MoleMole::NAPInput::Attitude _AJJBIOKMOAE_k__BackingField; // 0x2C
	::MoleMole::NAPInput::Attitude _JIABPNDAHHI_k__BackingField; // 0x48
	::MoleMole::NAPInput::Attitude _EAEKCGLPJAI_k__BackingField; // 0x64
	::MoleMole::NAPInput::Attitude _KDCNGDNNHCH_k__BackingField; // 0x80
	::System::Single LOCPLJKFBBC; // 0x9C
	::System::Single JDGJPOLCNBM; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJOJLPEKIAF__CTOR_OFFSET))(this);
	}

	::MoleMole::NAPInput::IMUData GIAOBHOJCDP(::MoleMole::NAPInput::IMUData BPIKCCNLPBD)
	{
		return ((::MoleMole::NAPInput::IMUData(*)(::PVOID, ::MoleMole::NAPInput::IMUData))((::PBYTE)hIl2Cpp + CJOJLPEKIAF_GIAOBHOJCDP_OFFSET))(this, BPIKCCNLPBD);
	}

	::System::Void MIJNCBKECAJ(::MoleMole::NAPInput::Attitude EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::NAPInput::Attitude))((::PBYTE)hIl2Cpp + CJOJLPEKIAF_MIJNCBKECAJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::NAPInput::Attitude NGAGODADMMJ()
	{
		return ((::MoleMole::NAPInput::Attitude(*)(::PVOID))((::PBYTE)hIl2Cpp + CJOJLPEKIAF_NGAGODADMMJ_OFFSET))(this);
	}

	::System::Void CLHMDILECDC(::MoleMole::NAPInput::Attitude EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::NAPInput::Attitude))((::PBYTE)hIl2Cpp + CJOJLPEKIAF_CLHMDILECDC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void DOKKJJNOBCF(::UnityEngine::Vector3 MMGKMLFBMEM, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CJOJLPEKIAF_DOKKJJNOBCF_OFFSET))(this, MMGKMLFBMEM, PMNLNNGEIFM);
	}

	::MoleMole::NAPInput::Attitude EINLDHDDHNB()
	{
		return ((::MoleMole::NAPInput::Attitude(*)(::PVOID))((::PBYTE)hIl2Cpp + CJOJLPEKIAF_EINLDHDDHNB_OFFSET))(this);
	}

	::System::Void CBIOBCOPMAM(::UnityEngine::Vector3 NJJNJBLDLBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CJOJLPEKIAF_CBIOBCOPMAM_OFFSET))(this, NJJNJBLDLBC);
	}

	::MoleMole::NAPInput::Attitude KBHCDENJNCE()
	{
		return ((::MoleMole::NAPInput::Attitude(*)(::PVOID))((::PBYTE)hIl2Cpp + CJOJLPEKIAF_KBHCDENJNCE_OFFSET))(this);
	}

	::System::Void EKPNBLNOIIK(::MoleMole::NAPInput::Attitude EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::NAPInput::Attitude))((::PBYTE)hIl2Cpp + CJOJLPEKIAF_EKPNBLNOIIK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void DLKJNJJPOGJ(::UnityEngine::Vector3 MMGKMLFBMEM, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CJOJLPEKIAF_DLKJNJJPOGJ_OFFSET))(this, MMGKMLFBMEM, PMNLNNGEIFM);
	}

	::System::Void AAANGDMAADK(::MoleMole::NAPInput::Attitude EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::NAPInput::Attitude))((::PBYTE)hIl2Cpp + CJOJLPEKIAF_AAANGDMAADK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single PBDOFFKCALB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CJOJLPEKIAF_PBDOFFKCALB_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void LJMJEBOOIIL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJOJLPEKIAF_LJMJEBOOIIL_OFFSET))(this);
	}

	::MoleMole::NAPInput::Attitude OHNKKKDIPHP()
	{
		return ((::MoleMole::NAPInput::Attitude(*)(::PVOID))((::PBYTE)hIl2Cpp + CJOJLPEKIAF_OHNKKKDIPHP_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJOJLPEKIAF_NPOLNFDBOOD_OFFSET))(this);
	}
};
