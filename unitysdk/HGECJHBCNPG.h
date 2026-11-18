#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OFGBAENJIFM.h"

class FGCOIBFFCHB;
class FLFBGFGDOEL;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define HGECJHBCNPG_CPLNCDIFJAE_OFFSET UNITYSDK_OFFSET(0x16F30FC0)
#define HGECJHBCNPG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16F30F20)
#define HGECJHBCNPG_KDGMEFEJMGJ_1_OFFSET UNITYSDK_OFFSET(0x16F30DB0)
#define HGECJHBCNPG_KDGMEFEJMGJ_OFFSET UNITYSDK_OFFSET(0x16F30CC0)
#define HGECJHBCNPG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16F30B20)
#define HGECJHBCNPG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16F30740)
#define HGECJHBCNPG__CTOR_OFFSET UNITYSDK_OFFSET(0x16F30CB0)

inline static constexpr unsigned int HGECJHBCNPG_TypeDefinitionIndex = 63158;

class HGECJHBCNPG : public ::OFGBAENJIFM
{
public:
	// static const ::System::String* JANJOJNAKDI; // 0x0
	::UnityEngine::RectTransform* CINGGDEBMDC; // 0x18
	::UnityEngine::RectTransform* EBGGJKEIFIO; // 0x20
	::UnityEngine::RectTransform* OMDEJNDILEB; // 0x28
	::UnityEngine::GameObject* FDJHEBHLJLD; // 0x30
	::UnityEngine::RectTransform* JHOLMMDPKFP; // 0x38
	::FGCOIBFFCHB* GKDKJDCGKOO; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* ODPHGOMCFCI; // 0x48
	::UnityEngine::GameObject* IODBDPOLPKA; // 0x50
	::UnityEngine::RectTransform* CCKNEFBOCCI; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* FHCGJKMHAPA; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x68
	::FGCOIBFFCHB* ANAEFBINODG; // 0x70
	::UnityEngine::GameObject* EMHPEHBHJMM; // 0x78
	::FGCOIBFFCHB* OOEFGIHGILJ; // 0x80
	::UnityEngine::UI::Extension::UITimeWidget* EAFAECECFFH; // 0x88
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x90
	::GCIMMDDIFBJ* OIKFFMHNCHB; // 0x98
	::FGCOIBFFCHB* MPFDMAPAHOO; // 0xA0
	::FGCOIBFFCHB* GLECAIADGMG; // 0xA8
	::FGCOIBFFCHB* KOPPLHNIALM; // 0xB0
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0xB8
	::UnityEngine::GameObject* PHLIAPNKIOK; // 0xC0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGECJHBCNPG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HGECJHBCNPG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	static ::HGECJHBCNPG* KDGMEFEJMGJ(::FLFBGFGDOEL* AEJAMJDBHAM, ::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::HGECJHBCNPG*(*)(::FLFBGFGDOEL*, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HGECJHBCNPG_KDGMEFEJMGJ_OFFSET))(AEJAMJDBHAM, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGECJHBCNPG_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HGECJHBCNPG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	static ::System::Boolean CPLNCDIFJAE(::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Boolean(*)(::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HGECJHBCNPG_CPLNCDIFJAE_OFFSET))(FJHDNIKAKLO);
	}

	::System::Void KDGMEFEJMGJ_1(::FLFBGFGDOEL* AEJAMJDBHAM)
	{
		return ((::System::Void(*)(::PVOID, ::FLFBGFGDOEL*))((::PBYTE)hIl2Cpp + HGECJHBCNPG_KDGMEFEJMGJ_1_OFFSET))(this, AEJAMJDBHAM);
	}
};
