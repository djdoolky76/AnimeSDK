#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EPECLFAEAHB.h"
#include "unitysdk/MoleMole/NAPInput/Attitude.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/MoleMole/NAPInput/IMUData.h"

#define NLMMHKFICCB_CBIOBCOPMAM_OFFSET UNITYSDK_OFFSET(0x114AD140)
#define NLMMHKFICCB_CFBGGOFABIC_OFFSET UNITYSDK_OFFSET(0x114ADCF0)
#define NLMMHKFICCB_DEPOFLHLLDC_OFFSET UNITYSDK_OFFSET(0x114ADE40)
#define NLMMHKFICCB_DOKKJJNOBCF_OFFSET UNITYSDK_OFFSET(0x114ACFA0)
#define NLMMHKFICCB_EOOMMCOGDDP_OFFSET UNITYSDK_OFFSET(0x114ADD50)
#define NLMMHKFICCB_GEDHHAOBFFN_OFFSET UNITYSDK_OFFSET(0x114ADD10)
#define NLMMHKFICCB_GIAOBHOJCDP_OFFSET UNITYSDK_OFFSET(0x114ACB70)
#define NLMMHKFICCB_GNFLPIIHBAI_OFFSET UNITYSDK_OFFSET(0x114ADCD0)
#define NLMMHKFICCB_HOPLFIFBJHO_OFFSET UNITYSDK_OFFSET(0x114ADC90)
#define NLMMHKFICCB_IFIAKHCKGFJ_OFFSET UNITYSDK_OFFSET(0x114ADE20)
#define NLMMHKFICCB_JICDBEOPMMD_OFFSET UNITYSDK_OFFSET(0x114AD3F0)
#define NLMMHKFICCB_KLHHMFCBAFE_OFFSET UNITYSDK_OFFSET(0x114ADD70)
#define NLMMHKFICCB_LJMJEBOOIIL_OFFSET UNITYSDK_OFFSET(0x114AD210)
#define NLMMHKFICCB_LOAEIIFCPEF_OFFSET UNITYSDK_OFFSET(0x114ADC70)
#define NLMMHKFICCB_MOBGLNIEJCK_OFFSET UNITYSDK_OFFSET(0x114ADA10)
#define NLMMHKFICCB_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x114ADDB0)
#define NLMMHKFICCB_OAGLFBCNAKP_OFFSET UNITYSDK_OFFSET(0x114AD720)
#define NLMMHKFICCB_PBDOFFKCALB_OFFSET UNITYSDK_OFFSET(0x114ACF30)
#define NLMMHKFICCB_PDPBLABNIEF_OFFSET UNITYSDK_OFFSET(0x114ADCB0)
#define NLMMHKFICCB_PFHJHJDKELI_OFFSET UNITYSDK_OFFSET(0x114ADD90)
#define NLMMHKFICCB_PPJGKGGPOPI_OFFSET UNITYSDK_OFFSET(0x114ADD30)
#define NLMMHKFICCB__CTOR_OFFSET UNITYSDK_OFFSET(0x114AC7A0)

inline static constexpr unsigned int NLMMHKFICCB_TypeDefinitionIndex = 64047;

class NLMMHKFICCB : public ::EPECLFAEAHB
{
public:
	::UnityEngine::Vector3 OFLGICJNAIG; // 0x10
	::UnityEngine::Quaternion KOIJDOGBIFJ; // 0x1C
	::MoleMole::NAPInput::Attitude _AIONMFLHIGL_k__BackingField; // 0x2C
	::MoleMole::NAPInput::Attitude _MHPEOPPANLP_k__BackingField; // 0x48
	::MoleMole::NAPInput::Attitude _MGNJPONJEJC_k__BackingField; // 0x64
	::MoleMole::NAPInput::Attitude _LJDANDPHNHD_k__BackingField; // 0x80
	::MoleMole::NAPInput::Attitude _KCEPMJCGMBH_k__BackingField; // 0x9C
	::MoleMole::NAPInput::Attitude _CIIDMLCLGHN_k__BackingField; // 0xB8
	::System::Single LOCPLJKFBBC; // 0xD4
	::System::Single JDGJPOLCNBM; // 0xD8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLMMHKFICCB__CTOR_OFFSET))(this);
	}

	::MoleMole::NAPInput::IMUData GIAOBHOJCDP(::MoleMole::NAPInput::IMUData BPIKCCNLPBD)
	{
		return ((::MoleMole::NAPInput::IMUData(*)(::PVOID, ::MoleMole::NAPInput::IMUData))((::PBYTE)hIl2Cpp + NLMMHKFICCB_GIAOBHOJCDP_OFFSET))(this, BPIKCCNLPBD);
	}

	::MoleMole::NAPInput::Attitude LOAEIIFCPEF()
	{
		return ((::MoleMole::NAPInput::Attitude(*)(::PVOID))((::PBYTE)hIl2Cpp + NLMMHKFICCB_LOAEIIFCPEF_OFFSET))(this);
	}

	::System::Void MOBGLNIEJCK(::UnityEngine::Vector3 MMGKMLFBMEM, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + NLMMHKFICCB_MOBGLNIEJCK_OFFSET))(this, MMGKMLFBMEM, PMNLNNGEIFM);
	}

	::MoleMole::NAPInput::Attitude HOPLFIFBJHO()
	{
		return ((::MoleMole::NAPInput::Attitude(*)(::PVOID))((::PBYTE)hIl2Cpp + NLMMHKFICCB_HOPLFIFBJHO_OFFSET))(this);
	}

	::System::Single PBDOFFKCALB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NLMMHKFICCB_PBDOFFKCALB_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void PDPBLABNIEF(::MoleMole::NAPInput::Attitude EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::NAPInput::Attitude))((::PBYTE)hIl2Cpp + NLMMHKFICCB_PDPBLABNIEF_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::NAPInput::Attitude GNFLPIIHBAI()
	{
		return ((::MoleMole::NAPInput::Attitude(*)(::PVOID))((::PBYTE)hIl2Cpp + NLMMHKFICCB_GNFLPIIHBAI_OFFSET))(this);
	}

	::MoleMole::NAPInput::Attitude CFBGGOFABIC()
	{
		return ((::MoleMole::NAPInput::Attitude(*)(::PVOID))((::PBYTE)hIl2Cpp + NLMMHKFICCB_CFBGGOFABIC_OFFSET))(this);
	}

	::System::Void GEDHHAOBFFN(::MoleMole::NAPInput::Attitude EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::NAPInput::Attitude))((::PBYTE)hIl2Cpp + NLMMHKFICCB_GEDHHAOBFFN_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void CBIOBCOPMAM(::UnityEngine::Vector3 NJJNJBLDLBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NLMMHKFICCB_CBIOBCOPMAM_OFFSET))(this, NJJNJBLDLBC);
	}

	::MoleMole::NAPInput::Attitude PPJGKGGPOPI()
	{
		return ((::MoleMole::NAPInput::Attitude(*)(::PVOID))((::PBYTE)hIl2Cpp + NLMMHKFICCB_PPJGKGGPOPI_OFFSET))(this);
	}

	::System::Void EOOMMCOGDDP(::MoleMole::NAPInput::Attitude EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::NAPInput::Attitude))((::PBYTE)hIl2Cpp + NLMMHKFICCB_EOOMMCOGDDP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void JICDBEOPMMD(::UnityEngine::Vector3 MMGKMLFBMEM, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + NLMMHKFICCB_JICDBEOPMMD_OFFSET))(this, MMGKMLFBMEM, PMNLNNGEIFM);
	}

	::System::Void OAGLFBCNAKP(::UnityEngine::Vector3 MMGKMLFBMEM, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + NLMMHKFICCB_OAGLFBCNAKP_OFFSET))(this, MMGKMLFBMEM, PMNLNNGEIFM);
	}

	::System::Void DOKKJJNOBCF(::UnityEngine::Vector3 MMGKMLFBMEM, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + NLMMHKFICCB_DOKKJJNOBCF_OFFSET))(this, MMGKMLFBMEM, PMNLNNGEIFM);
	}

	::System::Void KLHHMFCBAFE(::MoleMole::NAPInput::Attitude EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::NAPInput::Attitude))((::PBYTE)hIl2Cpp + NLMMHKFICCB_KLHHMFCBAFE_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::NAPInput::Attitude PFHJHJDKELI()
	{
		return ((::MoleMole::NAPInput::Attitude(*)(::PVOID))((::PBYTE)hIl2Cpp + NLMMHKFICCB_PFHJHJDKELI_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLMMHKFICCB_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void IFIAKHCKGFJ(::MoleMole::NAPInput::Attitude EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::NAPInput::Attitude))((::PBYTE)hIl2Cpp + NLMMHKFICCB_IFIAKHCKGFJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void DEPOFLHLLDC(::MoleMole::NAPInput::Attitude EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::NAPInput::Attitude))((::PBYTE)hIl2Cpp + NLMMHKFICCB_DEPOFLHLLDC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void LJMJEBOOIIL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLMMHKFICCB_LJMJEBOOIIL_OFFSET))(this);
	}
};
