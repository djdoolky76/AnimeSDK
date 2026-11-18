#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CameraConfigDataStacking.h"
#include "unitysdk/MoleMole/Config/ConfigDataPlayStacking.h"
#include "unitysdk/MoleMole/Config/ConfigDataPriority.h"
#include "unitysdk/MoleMole/Config/ValueVariationType.h"
#include "unitysdk/NECFCJGAJML.h"
#include "unitysdk/System/Object.h"

class ALMMGOFACDF;
namespace MoleMole { class CameraModuleAvatarDataConfigExt; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Cameras { class CameraDataAccessor; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define IPGHPLEKLGJ_AFNKMJDPILJ_OFFSET UNITYSDK_OFFSET(0x197E8020)
#define IPGHPLEKLGJ_CEPJDIIKMCG_OFFSET UNITYSDK_OFFSET(0x197E7EF0)
#define IPGHPLEKLGJ_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x197E8060)
#define IPGHPLEKLGJ_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x197E89F0)
#define IPGHPLEKLGJ_FDDKGKOBOOL_OFFSET UNITYSDK_OFFSET(0x197E7EA0)
#define IPGHPLEKLGJ_FGFOFLIMDCC_OFFSET UNITYSDK_OFFSET(0x197E7920)
#define IPGHPLEKLGJ_GFFHAMJEABP_OFFSET UNITYSDK_OFFSET(0x197E8980)
#define IPGHPLEKLGJ_GNIHOFFNLDL_OFFSET UNITYSDK_OFFSET(0x197E86F0)
#define IPGHPLEKLGJ_HIHAONBOOPF_OFFSET UNITYSDK_OFFSET(0x197E8890)
#define IPGHPLEKLGJ_HJGDKILLAPN_OFFSET UNITYSDK_OFFSET(0x197E8A30)
#define IPGHPLEKLGJ_IFONLCGFAPN_OFFSET UNITYSDK_OFFSET(0x197E81A0)
#define IPGHPLEKLGJ_JCFJOKPIFPL_OFFSET UNITYSDK_OFFSET(0x197E8900)
#define IPGHPLEKLGJ_JFICBDLMKBD_OFFSET UNITYSDK_OFFSET(0x197E88B0)
#define IPGHPLEKLGJ_KPHCLINKAGI_OFFSET UNITYSDK_OFFSET(0x197E7AC0)
#define IPGHPLEKLGJ_LKAJMALAFNK_OFFSET UNITYSDK_OFFSET(0x197E85C0)
#define IPGHPLEKLGJ_LKMGBPBKLBB_OFFSET UNITYSDK_OFFSET(0x197E88A0)
#define IPGHPLEKLGJ_NLLECMAHBAF_OFFSET UNITYSDK_OFFSET(0x197E8820)
#define IPGHPLEKLGJ_OFGCDKHAAOF_OFFSET UNITYSDK_OFFSET(0x197E7D50)
#define IPGHPLEKLGJ_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x197E82C0)
#define IPGHPLEKLGJ_PAFFHKDNPKF_OFFSET UNITYSDK_OFFSET(0x197E7CD0)
#define IPGHPLEKLGJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x197E8990)
#define IPGHPLEKLGJ_PKMMBGFIDHK_OFFSET UNITYSDK_OFFSET(0x197E7D40)
#define IPGHPLEKLGJ_PLEBJJLHLIG_OFFSET UNITYSDK_OFFSET(0x197E8570)
#define IPGHPLEKLGJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x197E6C80)
#define IPGHPLEKLGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x197E7910)

inline static constexpr unsigned int IPGHPLEKLGJ_TypeDefinitionIndex = 75394;

class IPGHPLEKLGJ : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* PIIOPOOEHEL; // 0x10
	::ALMMGOFACDF* BGIFONKCDEK; // 0x18
	::UnityEngine::AnimationCurve* EJJCIOBPKEK; // 0x20
	::UnityEngine::AnimationCurve* KGMCDPCCOFE; // 0x28
	::System::String* OOJFGFNNOPH; // 0x30
	::System::Boolean _GKPDAJADEHH_k__BackingField; // 0x38
	::NECFCJGAJML FLAAAGDBBKO; // 0x39
	::System::Boolean EJMAJAPJMAA; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Single JLCKOCEMBPP; // 0x3C
	::System::Single CIIPCCLOHLH; // 0x40
	::System::Int32 DJKOFJDOCJJ; // 0x44
	::System::Single JOFGIANGHMK; // 0x48
	::System::Single FCIKOCHKHKN; // 0x4C
	::System::Single KPLNONDDECM; // 0x50
	::System::Single BINIACPMMNI; // 0x54
	::MoleMole::Config::ConfigDataPlayStacking HGJGKFEKNFL; // 0x58
	::System::Single _FCCMOIPDPIL_k__BackingField; // 0x5C
	::System::Boolean LLLCIPMAKMC; // 0x60
	::System::Boolean OOJMPMOHEMB; // 0x61
	::System::Boolean MCMFEKBLKDJ; // 0x62
	::System::Boolean CMCDLGGGEMG; // 0x63
	::MoleMole::Config::ValueVariationType NGCECIOMIGK; // 0x64
	::System::Single EODDDEDPMHA; // 0x68
	::System::Single BGCFPBDNDNF; // 0x6C
	::MoleMole::Config::CameraConfigDataStacking AGJAPLENLIK; // 0x70
	::System::Single LLHADIFDNDH; // 0x74
	::System::Single ECMOEENIHME; // 0x78
	::MoleMole::Config::ConfigDataPriority PFDADPAOAEK; // 0x7C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPGHPLEKLGJ__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPGHPLEKLGJ_TOSTRING_OFFSET))(this);
	}

	::System::Single FGFOFLIMDCC(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IPGHPLEKLGJ_FGFOFLIMDCC_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Single PKMMBGFIDHK()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IPGHPLEKLGJ_PKMMBGFIDHK_OFFSET))(this);
	}

	::System::Single OFGCDKHAAOF(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IPGHPLEKLGJ_OFGCDKHAAOF_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Boolean FDDKGKOBOOL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IPGHPLEKLGJ_FDDKGKOBOOL_OFFSET))(this);
	}

	::System::Void CEPJDIIKMCG(::MoleMole::Battle::Entity* HOLFNDIMGJJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + IPGHPLEKLGJ_CEPJDIIKMCG_OFFSET))(this, HOLFNDIMGJJ);
	}

	::System::Boolean KPHCLINKAGI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IPGHPLEKLGJ_KPHCLINKAGI_OFFSET))(this);
	}

	::System::Void AFNKMJDPILJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPGHPLEKLGJ_AFNKMJDPILJ_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::MoleMole::Cameras::CameraDataAccessor* LJBPECKCCEA, ::System::Single KLNIKPAMIKD, ::System::Single FNNCMJANHFC, ::System::Single EPOMOEFDCGD)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::CameraDataAccessor*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + IPGHPLEKLGJ_CNHBDOMKKDE_OFFSET))(this, LJBPECKCCEA, KLNIKPAMIKD, FNNCMJANHFC, EPOMOEFDCGD);
	}

	::System::Single IFONLCGFAPN(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IPGHPLEKLGJ_IFONLCGFAPN_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void OKJCHFGIKBH(::System::Single PMNLNNGEIFM, ::MoleMole::Cameras::CameraDataAccessor* LJBPECKCCEA, ::MoleMole::CameraModuleAvatarDataConfigExt* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::MoleMole::Cameras::CameraDataAccessor*, ::MoleMole::CameraModuleAvatarDataConfigExt*))((::PBYTE)hIl2Cpp + IPGHPLEKLGJ_OKJCHFGIKBH_OFFSET))(this, PMNLNNGEIFM, LJBPECKCCEA, DFMKILICPFB);
	}

	::System::Void HIHAONBOOPF(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IPGHPLEKLGJ_HIHAONBOOPF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void LKMGBPBKLBB(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IPGHPLEKLGJ_LKMGBPBKLBB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean JFICBDLMKBD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IPGHPLEKLGJ_JFICBDLMKBD_OFFSET))(this);
	}

	::System::Single LKAJMALAFNK()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IPGHPLEKLGJ_LKAJMALAFNK_OFFSET))(this);
	}

	::System::Void PAFFHKDNPKF(::NECFCJGAJML JBAAOKJHJMH, ::System::Boolean ONAEFLNLPEE)
	{
		return ((::System::Void(*)(::PVOID, ::NECFCJGAJML, ::System::Boolean))((::PBYTE)hIl2Cpp + IPGHPLEKLGJ_PAFFHKDNPKF_OFFSET))(this, JBAAOKJHJMH, ONAEFLNLPEE);
	}

	::System::Void JCFJOKPIFPL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPGHPLEKLGJ_JCFJOKPIFPL_OFFSET))(this);
	}

	::System::Boolean GFFHAMJEABP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IPGHPLEKLGJ_GFFHAMJEABP_OFFSET))(this);
	}

	::System::Single GNIHOFFNLDL(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IPGHPLEKLGJ_GNIHOFFNLDL_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPGHPLEKLGJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPGHPLEKLGJ_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Void NLLECMAHBAF(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IPGHPLEKLGJ_NLLECMAHBAF_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Boolean PLEBJJLHLIG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IPGHPLEKLGJ_PLEBJJLHLIG_OFFSET))(this);
	}

	::System::Void HJGDKILLAPN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPGHPLEKLGJ_HJGDKILLAPN_OFFSET))(this);
	}
};
