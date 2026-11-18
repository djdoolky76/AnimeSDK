#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NECFCJGAJML.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class CameraDataAccessor; }
namespace MoleMole::Config { class ConfigCameraComposer; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Canvas; }

#define ANEMGIKMMJI_AFNKMJDPILJ_OFFSET UNITYSDK_OFFSET(0x14C216D0)
#define ANEMGIKMMJI_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x14C21420)
#define ANEMGIKMMJI_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x14C21690)
#define ANEMGIKMMJI_FGFOFLIMDCC_OFFSET UNITYSDK_OFFSET(0x14C20EA0)
#define ANEMGIKMMJI_GFFHAMJEABP_OFFSET UNITYSDK_OFFSET(0x14C21A80)
#define ANEMGIKMMJI_GNIHOFFNLDL_OFFSET UNITYSDK_OFFSET(0x14C21980)
#define ANEMGIKMMJI_HJGDKILLAPN_OFFSET UNITYSDK_OFFSET(0x14C21930)
#define ANEMGIKMMJI_IFONLCGFAPN_OFFSET UNITYSDK_OFFSET(0x14C21A90)
#define ANEMGIKMMJI_JBLNLMJFPJD_OFFSET UNITYSDK_OFFSET(0x14C21160)
#define ANEMGIKMMJI_JCFJOKPIFPL_OFFSET UNITYSDK_OFFSET(0x14C21720)
#define ANEMGIKMMJI_JFICBDLMKBD_OFFSET UNITYSDK_OFFSET(0x14C218E0)
#define ANEMGIKMMJI_LKMGBPBKLBB_OFFSET UNITYSDK_OFFSET(0x14C21710)
#define ANEMGIKMMJI_OFGCDKHAAOF_OFFSET UNITYSDK_OFFSET(0x14C21BA0)
#define ANEMGIKMMJI_PAFFHKDNPKF_OFFSET UNITYSDK_OFFSET(0x14C210F0)
#define ANEMGIKMMJI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x14C20E30)
#define ANEMGIKMMJI_PLEBJJLHLIG_OFFSET UNITYSDK_OFFSET(0x14C20DE0)
#define ANEMGIKMMJI_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x14C21CB0)
#define ANEMGIKMMJI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x14C20940)
#define ANEMGIKMMJI__CTOR_OFFSET UNITYSDK_OFFSET(0x14C20DD0)

inline static constexpr unsigned int ANEMGIKMMJI_TypeDefinitionIndex = 67081;

class ANEMGIKMMJI : public ::System::Object
{
public:
	::UnityEngine::AnimationCurve* EJJCIOBPKEK; // 0x10
	::MoleMole::Config::ConfigCameraComposer* EIPJKILABDN; // 0x18
	::UnityEngine::Canvas* PENIAOLACHA; // 0x20
	::UnityEngine::AnimationCurve* KGMCDPCCOFE; // 0x28
	::MoleMole::Config::ConfigCameraComposer* IMGJNJIMPLG; // 0x30
	::System::String* OOJFGFNNOPH; // 0x38
	::MoleMole::Config::ConfigCameraComposer* AFJNAFAOFGH; // 0x40
	::System::Single LICOBAOKAFO; // 0x48
	::System::Single MLFLJOEKJDG; // 0x4C
	::System::Single LLHADIFDNDH; // 0x50
	::System::Single EODDDEDPMHA; // 0x54
	::System::Single KKBONFFNBHH; // 0x58
	::System::Single MDAOHNGIIPH; // 0x5C
	::System::Int32 DJKOFJDOCJJ; // 0x60
	::System::Boolean KHFOOHDFHGL; // 0x64
	::System::Boolean PMPHAABOANM; // 0x65
	::System::Boolean LLLCIPMAKMC; // 0x66
	::System::Boolean _GKPDAJADEHH_k__BackingField; // 0x67
	::System::Single KIHCHPOHCCF; // 0x68
	::System::Boolean PAGPNPIDNKE; // 0x6C
	::NECFCJGAJML FLAAAGDBBKO; // 0x6D
	::System::Single DBLMGBGFNFD; // 0x70
	::System::Single JOFGIANGHMK; // 0x74
	::System::Single JPOHDFGEFLP; // 0x78
	::System::Single CIIPCCLOHLH; // 0x7C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANEMGIKMMJI__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANEMGIKMMJI_TOSTRING_OFFSET))(this);
	}

	::System::Boolean PLEBJJLHLIG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANEMGIKMMJI_PLEBJJLHLIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANEMGIKMMJI_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void FGFOFLIMDCC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANEMGIKMMJI_FGFOFLIMDCC_OFFSET))(this);
	}

	::System::Boolean CNHBDOMKKDE(::MoleMole::Cameras::CameraDataAccessor* EAFGNHNNLBB)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + ANEMGIKMMJI_CNHBDOMKKDE_OFFSET))(this, EAFGNHNNLBB);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANEMGIKMMJI_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Void AFNKMJDPILJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANEMGIKMMJI_AFNKMJDPILJ_OFFSET))(this);
	}

	::System::Void LKMGBPBKLBB(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ANEMGIKMMJI_LKMGBPBKLBB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void JCFJOKPIFPL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANEMGIKMMJI_JCFJOKPIFPL_OFFSET))(this);
	}

	::System::Void HJGDKILLAPN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANEMGIKMMJI_HJGDKILLAPN_OFFSET))(this);
	}

	::System::Void GNIHOFFNLDL(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ANEMGIKMMJI_GNIHOFFNLDL_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Boolean GFFHAMJEABP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANEMGIKMMJI_GFFHAMJEABP_OFFSET))(this);
	}

	::System::Boolean JFICBDLMKBD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANEMGIKMMJI_JFICBDLMKBD_OFFSET))(this);
	}

	::System::Void IFONLCGFAPN(::MoleMole::Cameras::CameraDataAccessor* LJBPECKCCEA, ::System::Single IBDBABDPFEO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::CameraDataAccessor*, ::System::Single))((::PBYTE)hIl2Cpp + ANEMGIKMMJI_IFONLCGFAPN_OFFSET))(this, LJBPECKCCEA, IBDBABDPFEO);
	}

	::System::Void OFGCDKHAAOF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANEMGIKMMJI_OFGCDKHAAOF_OFFSET))(this);
	}

	::System::Boolean JBLNLMJFPJD(::System::Single& JMFOEGBMIOL)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + ANEMGIKMMJI_JBLNLMJFPJD_OFFSET))(this, JMFOEGBMIOL);
	}

	::System::Void PLPONJAKNEB(::System::Single PMNLNNGEIFM, ::MoleMole::Cameras::CameraDataAccessor* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + ANEMGIKMMJI_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM, LJBPECKCCEA);
	}

	::System::Void PAFFHKDNPKF(::NECFCJGAJML JBAAOKJHJMH, ::System::Boolean ONAEFLNLPEE)
	{
		return ((::System::Void(*)(::PVOID, ::NECFCJGAJML, ::System::Boolean))((::PBYTE)hIl2Cpp + ANEMGIKMMJI_PAFFHKDNPKF_OFFSET))(this, JBAAOKJHJMH, ONAEFLNLPEE);
	}
};
