#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CharacterFadeDitheringDataV2.h"
#include "unitysdk/NCIJAEIKGCN.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class AnimationCurve; }

#define LMCBEJIGFIN_AEJIEBCNDDD_OFFSET UNITYSDK_OFFSET(0x151A3F30)
#define LMCBEJIGFIN_AKNNHAKBHOL_OFFSET UNITYSDK_OFFSET(0x151A43D0)
#define LMCBEJIGFIN_BDAJEIPNNJO_OFFSET UNITYSDK_OFFSET(0x151A4440)
#define LMCBEJIGFIN_CBKCGMEBIBB_OFFSET UNITYSDK_OFFSET(0x151A4390)
#define LMCBEJIGFIN_CCKBEMBICNB_OFFSET UNITYSDK_OFFSET(0x151A4350)
#define LMCBEJIGFIN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x151A3CE0)
#define LMCBEJIGFIN_DMKDHBJKEHK_OFFSET UNITYSDK_OFFSET(0x151A4460)
#define LMCBEJIGFIN_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x151A4680)
#define LMCBEJIGFIN_GIMJLEILDPF_OFFSET UNITYSDK_OFFSET(0x151A3F10)
#define LMCBEJIGFIN_HBPLINHBFFK_OFFSET UNITYSDK_OFFSET(0x151A4590)
#define LMCBEJIGFIN_HCDDBFBJCLI_OFFSET UNITYSDK_OFFSET(0x151A4170)
#define LMCBEJIGFIN_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x151A4620)
#define LMCBEJIGFIN_HIDNOIJJPKB_OFFSET UNITYSDK_OFFSET(0x151A3FB0)
#define LMCBEJIGFIN_JINCFIGEAKM_OFFSET UNITYSDK_OFFSET(0x151A4530)
#define LMCBEJIGFIN_KALLHNFLIIL_OFFSET UNITYSDK_OFFSET(0x151A4450)
#define LMCBEJIGFIN_KDOKPICLDLO_OFFSET UNITYSDK_OFFSET(0x151A42D0)
#define LMCBEJIGFIN_LHPHJMHFOPF_OFFSET UNITYSDK_OFFSET(0x151A4880)
#define LMCBEJIGFIN_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0x151A3E80)
#define LMCBEJIGFIN_LKOGKNBNLIG_OFFSET UNITYSDK_OFFSET(0x151A3F20)
#define LMCBEJIGFIN_NKEIOGDKMJB_OFFSET UNITYSDK_OFFSET(0x151A4310)
#define LMCBEJIGFIN_OABAMPOILEE_OFFSET UNITYSDK_OFFSET(0x151A44C0)
#define LMCBEJIGFIN_OJAEKACEIFM_OFFSET UNITYSDK_OFFSET(0x151A3F40)
#define LMCBEJIGFIN_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x151A4A90)
#define LMCBEJIGFIN_OKLLFEIJKHN_OFFSET UNITYSDK_OFFSET(0x151A3E30)
#define LMCBEJIGFIN__CCTOR_OFFSET UNITYSDK_OFFSET(0x151A3F00)
#define LMCBEJIGFIN__CTOR_OFFSET UNITYSDK_OFFSET(0x151A3EF0)

inline static constexpr unsigned int LMCBEJIGFIN_TypeDefinitionIndex = 55317;

class LMCBEJIGFIN : public ::System::Object
{
public:
	static ::System::Single* StaticGet_OJLLHKIPKGN()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(LMCBEJIGFIN_TypeDefinitionIndex)->GetStaticField(0x12770);
	}
	::System::Action_1<::System::UInt32>* BHDKBKPLMLA; // 0x10
	::UnityEngine::AnimationCurve* OEPCPMKFAOM; // 0x18
	::UnityEngine::AnimationCurve* PFHLLIGJIJH; // 0x20
	::System::String* MCOHLHMKLIP; // 0x28
	::System::String* AELLPLBJELA; // 0x30
	::System::Action* HIAKKPAAKGE; // 0x38
	::MoleMole::Config::CharacterFadeDitheringDataV2 DFMKILICPFB; // 0x40
	::System::Int32 DKOFFFNEFJC; // 0x68
	::System::Single PEPJCFJMBGD; // 0x6C
	::NCIJAEIKGCN BOHBDHAPLDN; // 0x70
	::System::Single KDHOLANCDFP; // 0x74
	::System::Single FNEDNHBGJNC; // 0x78
	::System::UInt32 MGCMLBHOELA; // 0x7C
	::System::Single AMPBDHMOOFO; // 0x80
	::System::UInt32 BNNEAHHCIDE; // 0x84
	::System::Single KLIFMOFGBHM; // 0x88
	::System::Single JINFKPHIGJC; // 0x8C
	::System::Single LMBNLNBFOLA; // 0x90
	::System::Single NHKNILFDKGG; // 0x94
	::System::Boolean IBEOOBJMJJH; // 0x98
	::System::Boolean CIFLENFEEGN; // 0x99
	::System::Byte _padding0[0x2];
	::System::Single DPGFLPMIOFM; // 0x9C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMCBEJIGFIN__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMCBEJIGFIN__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMCBEJIGFIN_DISPOSE_OFFSET))(this);
	}

	::System::Void GIMJLEILDPF(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LMCBEJIGFIN_GIMJLEILDPF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single LKOGKNBNLIG()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LMCBEJIGFIN_LKOGKNBNLIG_OFFSET))(this);
	}

	::System::Void AEJIEBCNDDD(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LMCBEJIGFIN_AEJIEBCNDDD_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void OJAEKACEIFM(::System::Single HACJFKBLODH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LMCBEJIGFIN_OJAEKACEIFM_OFFSET))(this, HACJFKBLODH);
	}

	::System::Void HCDDBFBJCLI(::NCIJAEIKGCN EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::NCIJAEIKGCN))((::PBYTE)hIl2Cpp + LMCBEJIGFIN_HCDDBFBJCLI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void AKNNHAKBHOL(::System::Single HACJFKBLODH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LMCBEJIGFIN_AKNNHAKBHOL_OFFSET))(this, HACJFKBLODH);
	}

	::System::Void NKEIOGDKMJB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMCBEJIGFIN_NKEIOGDKMJB_OFFSET))(this);
	}

	::NCIJAEIKGCN BDAJEIPNNJO()
	{
		return ((::NCIJAEIKGCN(*)(::PVOID))((::PBYTE)hIl2Cpp + LMCBEJIGFIN_BDAJEIPNNJO_OFFSET))(this);
	}

	::System::Void CBKCGMEBIBB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMCBEJIGFIN_CBKCGMEBIBB_OFFSET))(this);
	}

	::System::Boolean KALLHNFLIIL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LMCBEJIGFIN_KALLHNFLIIL_OFFSET))(this);
	}

	::System::Void DMKDHBJKEHK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMCBEJIGFIN_DMKDHBJKEHK_OFFSET))(this);
	}

	::System::Void OABAMPOILEE(::System::Single HACJFKBLODH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LMCBEJIGFIN_OABAMPOILEE_OFFSET))(this, HACJFKBLODH);
	}

	::System::Void CCKBEMBICNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMCBEJIGFIN_CCKBEMBICNB_OFFSET))(this);
	}

	::System::Void JINCFIGEAKM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMCBEJIGFIN_JINCFIGEAKM_OFFSET))(this);
	}

	::System::Void LJMIPGJJELP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMCBEJIGFIN_LJMIPGJJELP_OFFSET))(this);
	}

	::System::Void HBPLINHBFFK(::System::Single NAIPHNDMNDI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LMCBEJIGFIN_HBPLINHBFFK_OFFSET))(this, NAIPHNDMNDI);
	}

	::System::Void HFBPONNNLBA(::System::Boolean AMGAAHMANDM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LMCBEJIGFIN_HFBPONNNLBA_OFFSET))(this, AMGAAHMANDM);
	}

	::System::Void EDEFLFIKNFK(::System::String* MCOHLHMKLIP, ::System::Int32 DKOFFFNEFJC, ::System::String* AELLPLBJELA, ::MoleMole::Config::CharacterFadeDitheringDataV2 DFMKILICPFB, ::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Action_1<::System::UInt32>* BFMCBEKBNGF, ::System::Action* OLNAGGLCCOM, ::System::UInt32 BNNEAHHCIDE)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::String*, ::MoleMole::Config::CharacterFadeDitheringDataV2, ::MoleMole::Battle::Entity*, ::System::Action_1<::System::UInt32>*, ::System::Action*, ::System::UInt32))((::PBYTE)hIl2Cpp + LMCBEJIGFIN_EDEFLFIKNFK_OFFSET))(this, MCOHLHMKLIP, DKOFFFNEFJC, AELLPLBJELA, DFMKILICPFB, KECKGDFIALJ, BFMCBEKBNGF, OLNAGGLCCOM, BNNEAHHCIDE);
	}

	::System::Void KDOKPICLDLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMCBEJIGFIN_KDOKPICLDLO_OFFSET))(this);
	}

	::System::Single HIDNOIJJPKB()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LMCBEJIGFIN_HIDNOIJJPKB_OFFSET))(this);
	}

	::System::Void LHPHJMHFOPF(::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LMCBEJIGFIN_LHPHJMHFOPF_OFFSET))(this, PBCAAADNEPK);
	}

	::System::Void OKLLFEIJKHN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMCBEJIGFIN_OKLLFEIJKHN_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH(::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LMCBEJIGFIN_OKJCHFGIKBH_OFFSET))(this, PBCAAADNEPK);
	}
};
