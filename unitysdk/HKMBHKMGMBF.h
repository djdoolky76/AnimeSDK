#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigHollowCameraShake_ParamType.h"
#include "unitysdk/MoleMole/Config/ConfigHollowCameraShake_ShakeAtom.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DGKCAFEOPMP_2.h"
#include "unitysdk/EDPGEFBNECD.h"
#include "unitysdk/FPFOJOOOOKD.h"
#include "unitysdk/KLPLBODKAHP.h"

namespace MoleMole::Config { class ConfigHollowCameraShake; }
namespace UnityEngine { class AnimationCurve; }

#define HKMBHKMGMBF_BABPJDOFDDJ_OFFSET UNITYSDK_OFFSET(0x16CF8F80)
#define HKMBHKMGMBF_FCFOEJGPDNO_OFFSET UNITYSDK_OFFSET(0x16CF8BD0)
#define HKMBHKMGMBF_GFELOKJFLAH_OFFSET UNITYSDK_OFFSET(0x16CF8930)
#define HKMBHKMGMBF_GLFJAGMFONE_OFFSET UNITYSDK_OFFSET(0x16CF9610)
#define HKMBHKMGMBF_JDPEELLKPFL_OFFSET UNITYSDK_OFFSET(0x16CF9340)
#define HKMBHKMGMBF_KKGEIHIFFNC_OFFSET UNITYSDK_OFFSET(0x16CF8C90)
#define HKMBHKMGMBF_OFKILFNJGMC_OFFSET UNITYSDK_OFFSET(0x16CF94C0)
#define HKMBHKMGMBF_PDAADHDFGKP_OFFSET UNITYSDK_OFFSET(0x16CF8940)
#define HKMBHKMGMBF__CTOR_OFFSET UNITYSDK_OFFSET(0x16CF8950)

inline static constexpr unsigned int HKMBHKMGMBF_TypeDefinitionIndex = 89877;

class HKMBHKMGMBF : public ::System::Object
{
public:
	::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom EJGAMJFCAAF; // 0x10
	::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom HFEACOFAFAJ; // 0x30
	::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom EMBLHKCKDBM; // 0x50
	::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom APPEBIEKAEA; // 0x70
	::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom NPHHPOIIAKH; // 0x90
	::UnityEngine::AnimationCurve* JCPBCNOMKKD; // 0xB0
	::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom OACAPINOFPI; // 0xB8
	::System::Single DGKOJMOPCKF; // 0xD8
	::System::Single AKDBODMNIBH; // 0xDC
	::System::Single LKDGIABCFMK; // 0xE0
	::System::Single GJOILCEFIMI; // 0xE4
	::System::Boolean AHJHJKDDNMG; // 0xE8
	::System::Byte _padding0[0x3];
	::System::Single HAJACAFCHIM; // 0xEC
	::System::Single NKGLMPENCJB; // 0xF0
	::System::Single _KHJCCEKKPKE_k__BackingField; // 0xF4
	::System::Single KPKDDALEMFE; // 0xF8
	::System::Int32 MDFMBODCHIN; // 0xFC
	::MoleMole::Config::ConfigHollowCameraShake_ParamType OMJALKHKPKB; // 0x100
	::System::Single NBAGEKHLIMJ; // 0x104

	::System::Void _ctor(::MoleMole::Config::ConfigHollowCameraShake* AMJADGKJAPK, ::System::Int32 LOPMOALAPNE)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowCameraShake*, ::System::Int32))((::PBYTE)hIl2Cpp + HKMBHKMGMBF__CTOR_OFFSET))(this, AMJADGKJAPK, LOPMOALAPNE);
	}

	::System::Boolean GFELOKJFLAH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HKMBHKMGMBF_GFELOKJFLAH_OFFSET))(this);
	}

	::System::Single PDAADHDFGKP()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HKMBHKMGMBF_PDAADHDFGKP_OFFSET))(this);
	}

	::DGKCAFEOPMP_2<::KLPLBODKAHP, ::EDPGEFBNECD> FCFOEJGPDNO(::DGKCAFEOPMP_2<::KLPLBODKAHP, ::EDPGEFBNECD>& JKBLDFBGBPK, ::FPFOJOOOOKD& HBMGHPEPBNC)
	{
		return ((::DGKCAFEOPMP_2<::KLPLBODKAHP, ::EDPGEFBNECD>(*)(::PVOID, ::DGKCAFEOPMP_2<::KLPLBODKAHP, ::EDPGEFBNECD>&, ::FPFOJOOOOKD&))((::PBYTE)hIl2Cpp + HKMBHKMGMBF_FCFOEJGPDNO_OFFSET))(this, JKBLDFBGBPK, HBMGHPEPBNC);
	}

	::DGKCAFEOPMP_2<::KLPLBODKAHP, ::EDPGEFBNECD> KKGEIHIFFNC(::DGKCAFEOPMP_2<::KLPLBODKAHP, ::EDPGEFBNECD>& JKBLDFBGBPK, ::System::Single IMLLDOHDCNC)
	{
		return ((::DGKCAFEOPMP_2<::KLPLBODKAHP, ::EDPGEFBNECD>(*)(::PVOID, ::DGKCAFEOPMP_2<::KLPLBODKAHP, ::EDPGEFBNECD>&, ::System::Single))((::PBYTE)hIl2Cpp + HKMBHKMGMBF_KKGEIHIFFNC_OFFSET))(this, JKBLDFBGBPK, IMLLDOHDCNC);
	}

	::DGKCAFEOPMP_2<::KLPLBODKAHP, ::EDPGEFBNECD> JDPEELLKPFL(::DGKCAFEOPMP_2<::KLPLBODKAHP, ::EDPGEFBNECD>& JKBLDFBGBPK, ::System::Single IMLLDOHDCNC)
	{
		return ((::DGKCAFEOPMP_2<::KLPLBODKAHP, ::EDPGEFBNECD>(*)(::PVOID, ::DGKCAFEOPMP_2<::KLPLBODKAHP, ::EDPGEFBNECD>&, ::System::Single))((::PBYTE)hIl2Cpp + HKMBHKMGMBF_JDPEELLKPFL_OFFSET))(this, JKBLDFBGBPK, IMLLDOHDCNC);
	}

	static ::System::Single OFKILFNJGMC(::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom& EPJMPBNAHEO, ::System::Single IMLLDOHDCNC)
	{
		return ((::System::Single(*)(::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom&, ::System::Single))((::PBYTE)hIl2Cpp + HKMBHKMGMBF_OFKILFNJGMC_OFFSET))(EPJMPBNAHEO, IMLLDOHDCNC);
	}

	static ::DGKCAFEOPMP_2<::KLPLBODKAHP, ::EDPGEFBNECD> BABPJDOFDDJ(::DGKCAFEOPMP_2<::KLPLBODKAHP, ::EDPGEFBNECD>& JKBLDFBGBPK, ::System::Single FJGGCDDJMAK, ::System::Single EILJOKLHNEP, ::System::Single DCOFKDOEJAN, ::System::Single FODKJAIHDDA, ::System::Single JLDLNIHEPBB, ::System::Single IPFOOHIMMNG)
	{
		return ((::DGKCAFEOPMP_2<::KLPLBODKAHP, ::EDPGEFBNECD>(*)(::DGKCAFEOPMP_2<::KLPLBODKAHP, ::EDPGEFBNECD>&, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HKMBHKMGMBF_BABPJDOFDDJ_OFFSET))(JKBLDFBGBPK, FJGGCDDJMAK, EILJOKLHNEP, DCOFKDOEJAN, FODKJAIHDDA, JLDLNIHEPBB, IPFOOHIMMNG);
	}

	::DGKCAFEOPMP_2<::KLPLBODKAHP, ::EDPGEFBNECD> GLFJAGMFONE(::DGKCAFEOPMP_2<::KLPLBODKAHP, ::EDPGEFBNECD>& JKBLDFBGBPK, ::FPFOJOOOOKD& HBMGHPEPBNC)
	{
		return ((::DGKCAFEOPMP_2<::KLPLBODKAHP, ::EDPGEFBNECD>(*)(::PVOID, ::DGKCAFEOPMP_2<::KLPLBODKAHP, ::EDPGEFBNECD>&, ::FPFOJOOOOKD&))((::PBYTE)hIl2Cpp + HKMBHKMGMBF_GLFJAGMFONE_OFFSET))(this, JKBLDFBGBPK, HBMGHPEPBNC);
	}
};
