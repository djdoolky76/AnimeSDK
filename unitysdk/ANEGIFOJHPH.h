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

#define ANEGIFOJHPH_CPLNCDIFJAE_OFFSET UNITYSDK_OFFSET(0x14C20510)
#define ANEGIFOJHPH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14C207B0)
#define ANEGIFOJHPH_KDGMEFEJMGJ_1_OFFSET UNITYSDK_OFFSET(0x14C20850)
#define ANEGIFOJHPH_KDGMEFEJMGJ_OFFSET UNITYSDK_OFFSET(0x14C20640)
#define ANEGIFOJHPH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14C20380)
#define ANEGIFOJHPH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14C1FFA0)
#define ANEGIFOJHPH__CTOR_OFFSET UNITYSDK_OFFSET(0x14C20500)

inline static constexpr unsigned int ANEGIFOJHPH_TypeDefinitionIndex = 48824;

class ANEGIFOJHPH : public ::OFGBAENJIFM
{
public:
	// static const ::System::String* JANJOJNAKDI; // 0x0
	::UnityEngine::UI::Extension::UILocalizationText* FHCGJKMHAPA; // 0x18
	::FGCOIBFFCHB* OOEFGIHGILJ; // 0x20
	::UnityEngine::GameObject* PHLIAPNKIOK; // 0x28
	::UnityEngine::GameObject* FDJHEBHLJLD; // 0x30
	::UnityEngine::GameObject* EMHPEHBHJMM; // 0x38
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x40
	::FGCOIBFFCHB* KOPPLHNIALM; // 0x48
	::UnityEngine::RectTransform* JHOLMMDPKFP; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x58
	::FGCOIBFFCHB* MPFDMAPAHOO; // 0x60
	::UnityEngine::RectTransform* EBGGJKEIFIO; // 0x68
	::FGCOIBFFCHB* GKDKJDCGKOO; // 0x70
	::UnityEngine::UI::Extension::UITimeWidget* EAFAECECFFH; // 0x78
	::FGCOIBFFCHB* GLECAIADGMG; // 0x80
	::UnityEngine::GameObject* IODBDPOLPKA; // 0x88
	::FGCOIBFFCHB* ANAEFBINODG; // 0x90
	::UnityEngine::RectTransform* CINGGDEBMDC; // 0x98
	::UnityEngine::UI::Extension::UILocalizationText* ODPHGOMCFCI; // 0xA0
	::UnityEngine::RectTransform* CCKNEFBOCCI; // 0xA8
	::UnityEngine::RectTransform* OMDEJNDILEB; // 0xB0
	::GCIMMDDIFBJ* OIKFFMHNCHB; // 0xB8
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0xC0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANEGIFOJHPH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ANEGIFOJHPH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	static ::System::Boolean CPLNCDIFJAE(::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Boolean(*)(::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ANEGIFOJHPH_CPLNCDIFJAE_OFFSET))(FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANEGIFOJHPH_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void KDGMEFEJMGJ(::FLFBGFGDOEL* AEJAMJDBHAM)
	{
		return ((::System::Void(*)(::PVOID, ::FLFBGFGDOEL*))((::PBYTE)hIl2Cpp + ANEGIFOJHPH_KDGMEFEJMGJ_OFFSET))(this, AEJAMJDBHAM);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ANEGIFOJHPH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	static ::ANEGIFOJHPH* KDGMEFEJMGJ_1(::FLFBGFGDOEL* AEJAMJDBHAM, ::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::ANEGIFOJHPH*(*)(::FLFBGFGDOEL*, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ANEGIFOJHPH_KDGMEFEJMGJ_1_OFFSET))(AEJAMJDBHAM, JMJGHFAOMNH, FJHDNIKAKLO);
	}
};
