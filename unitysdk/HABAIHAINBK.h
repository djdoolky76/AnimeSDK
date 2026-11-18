#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HABAIHAINBK_AIAAOFJMDKB.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class DriftOverrideConfig; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Rigidbody; }

#define HABAIHAINBK_AKPBLJFHJOI_OFFSET UNITYSDK_OFFSET(0x742650)
#define HABAIHAINBK_CEJGHAIDJLH_OFFSET UNITYSDK_OFFSET(0x742400)
#define HABAIHAINBK_GDJBDGPKOND_OFFSET UNITYSDK_OFFSET(0x742640)
#define HABAIHAINBK_HNKGBGPLNCB_OFFSET UNITYSDK_OFFSET(0x7423C0)
#define HABAIHAINBK_JOFDANMDEBN_OFFSET UNITYSDK_OFFSET(0x742470)
#define HABAIHAINBK_NIJDJIFIFPC_OFFSET UNITYSDK_OFFSET(0x7423E0)
#define HABAIHAINBK_NIJFCJLIBEE_OFFSET UNITYSDK_OFFSET(0x7423F0)
#define HABAIHAINBK_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x742480)

inline static constexpr unsigned int HABAIHAINBK_TypeDefinitionIndex = 69341;

struct alignas(8) HABAIHAINBK
{
	::UnityEngine::Rigidbody* MGKPIHJJGKG; // 0x10
	::UnityEngine::Vector3 OPAOHNJAALO; // 0x18
	::UnityEngine::Quaternion OLMAIHLDGKD; // 0x24
	::System::Byte _padding0[0x4];
	::UnityEngine::AnimationCurve* PAPBPGBLPNH; // 0x38
	::System::Single IKMBOAKEDHF; // 0x40
	::System::Single IAKPGBCAAKM; // 0x44
	::System::Single DKDDBPDGPOM; // 0x48
	::System::Single OIGEFAAFELB; // 0x4C
	::System::Single FBONHJCEHOD; // 0x50
	::System::Single HIPKHDKLPAC; // 0x54
	::System::Boolean AIJJKJEJNOH; // 0x58
	::System::Byte _padding1[0x3];
	::System::Single NFDNGPGFAFC; // 0x5C
	::System::Single PAHGBBFHNDI; // 0x60
	::System::Single MKIGHGFHEJO; // 0x64
	::System::Single CDPEIGOKGHM; // 0x68
	::HABAIHAINBK_AIAAOFJMDKB HFNAFIOJAFO; // 0x6C
	::System::Single CJKKNDNNJEK; // 0x70
	::System::Single FJGLJCOOHFP; // 0x74
	::System::Single KIEEDKCODDN; // 0x78
	::System::Single FHKAJJMNFDE; // 0x7C
	::System::Single ANBGEDGDIMA; // 0x80
	::System::Single DKOCBAIALJD; // 0x84
	::System::Single EJBGHEGLDKD; // 0x88
	::System::Single IPMEKEBNILD; // 0x8C
	::System::Single NOHNGMENFEK; // 0x90
	::System::Single NGPCNHLAHNB; // 0x94
	::System::Int32 IGBGODKLMPB; // 0x98
	::System::Single BDBBFBLBJLL; // 0x9C
	::System::Single FEOGIDOJOLI; // 0xA0
	::System::Single FBJJJBECAAH; // 0xA4
	::MoleMole::Config::DriftOverrideConfig* NIJJFLKBBDL; // 0xA8
	::MoleMole::Config::DriftOverrideConfig* KLLNLPIBHOH; // 0xB0
	::System::Int32 BFEKOHNEKMM; // 0xB8
	::System::Byte _padding2[0x4];
	::MoleMole::Config::DriftOverrideConfig* MEAJACFHPML; // 0xC0
	::UnityEngine::Vector3 DNHDHICBFHP; // 0xC8
	::UnityEngine::Vector3 CHHBADNDGAM; // 0xD4
	::System::Boolean CBKDALCDDEB; // 0xE0
	::System::Byte _padding3[0x3];
	::System::Single PMEFKCBGKLL; // 0xE4
	::UnityEngine::Vector3 FFOJOBBIOJG; // 0xE8
	::System::Single KCFLGFGAKFK; // 0xF4
	::UnityEngine::AnimationCurve* BHANMIFDNJI; // 0xF8
	::System::Boolean KOFJCAGGCMF; // 0x100
	::System::Byte _padding4[0x3];
	::System::Single FOMDKMLICNK; // 0x104
	::System::Single AFNHBFJNKBB; // 0x108
	::System::Single HOIIELIIAJL; // 0x10C
	::System::Single GKEPOPOCAGB; // 0x110
	::System::Single KBPKAJCPIHC; // 0x114
	::System::Single PDBKOMBJIEO; // 0x118
	::System::Single CKJLALAGBJC; // 0x11C

	::System::Boolean HNKGBGPLNCB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HABAIHAINBK_HNKGBGPLNCB_OFFSET))(this);
	}

	::System::Boolean NIJDJIFIFPC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HABAIHAINBK_NIJDJIFIFPC_OFFSET))(this);
	}

	::System::Boolean NIJFCJLIBEE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HABAIHAINBK_NIJFCJLIBEE_OFFSET))(this);
	}

	::System::Boolean CEJGHAIDJLH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HABAIHAINBK_CEJGHAIDJLH_OFFSET))(this);
	}

	::System::Boolean JOFDANMDEBN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HABAIHAINBK_JOFDANMDEBN_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HABAIHAINBK_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Boolean GDJBDGPKOND()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HABAIHAINBK_GDJBDGPKOND_OFFSET))(this);
	}

	::System::Boolean AKPBLJFHJOI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HABAIHAINBK_AKPBLJFHJOI_OFFSET))(this);
	}
};
