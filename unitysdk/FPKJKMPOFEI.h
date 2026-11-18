#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OFGBAENJIFM.h"

class FGCOIBFFCHB;
class GEMEJEPJKDN;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define FPKJKMPOFEI_CPLNCDIFJAE_OFFSET UNITYSDK_OFFSET(0x11D936E0)
#define FPKJKMPOFEI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11D93640)
#define FPKJKMPOFEI_KDGMEFEJMGJ_1_OFFSET UNITYSDK_OFFSET(0x11D93560)
#define FPKJKMPOFEI_KDGMEFEJMGJ_OFFSET UNITYSDK_OFFSET(0x11D93470)
#define FPKJKMPOFEI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11D933A0)
#define FPKJKMPOFEI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11D93140)
#define FPKJKMPOFEI__CTOR_OFFSET UNITYSDK_OFFSET(0x11D93460)

inline static constexpr unsigned int FPKJKMPOFEI_TypeDefinitionIndex = 44473;

class FPKJKMPOFEI : public ::OFGBAENJIFM
{
public:
	// static const ::System::String* JANJOJNAKDI; // 0x0
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x18
	::FGCOIBFFCHB* LBMPDPJKNJH; // 0x20
	::UnityEngine::RectTransform* DPNLLKMJMMB; // 0x28
	::LGINJIKKBJA* JBAGBGPNPDL; // 0x30
	::UnityEngine::GameObject* JFDOOELFAOA; // 0x38
	::UnityEngine::GameObject* EKFNNJIKOPL; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x48
	::UnityEngine::GameObject* CONBBLDCMED; // 0x50
	::UnityEngine::GameObject* JFMEGBECFML; // 0x58
	::UnityEngine::RectTransform* IODBDPOLPKA; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPKJKMPOFEI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FPKJKMPOFEI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	static ::FPKJKMPOFEI* KDGMEFEJMGJ(::GEMEJEPJKDN* AEJAMJDBHAM, ::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::FPKJKMPOFEI*(*)(::GEMEJEPJKDN*, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FPKJKMPOFEI_KDGMEFEJMGJ_OFFSET))(AEJAMJDBHAM, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FPKJKMPOFEI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPKJKMPOFEI_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void KDGMEFEJMGJ_1(::GEMEJEPJKDN* AEJAMJDBHAM)
	{
		return ((::System::Void(*)(::PVOID, ::GEMEJEPJKDN*))((::PBYTE)hIl2Cpp + FPKJKMPOFEI_KDGMEFEJMGJ_1_OFFSET))(this, AEJAMJDBHAM);
	}

	static ::System::Boolean CPLNCDIFJAE(::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Boolean(*)(::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FPKJKMPOFEI_CPLNCDIFJAE_OFFSET))(FJHDNIKAKLO);
	}
};
