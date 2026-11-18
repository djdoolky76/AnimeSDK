#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define BEFAGNCHMJE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1506ECA0)
#define BEFAGNCHMJE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1506EBA0)
#define BEFAGNCHMJE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1506E830)
#define BEFAGNCHMJE__CTOR_OFFSET UNITYSDK_OFFSET(0x1506EC90)

inline static constexpr unsigned int BEFAGNCHMJE_TypeDefinitionIndex = 79813;

class BEFAGNCHMJE : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* GCIBNECGJBF; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* AIONHELBGBC; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* HLGGFKHCLLJ; // 0x30
	::UnityEngine::GameObject* CCCHAHECGOL; // 0x38
	::GCIMMDDIFBJ* HBBOOGPIJOF; // 0x40
	::LGINJIKKBJA* OEEDEBIOPBL; // 0x48
	::UnityEngine::GameObject* GFGJADHGMAP; // 0x50
	::UnityEngine::RectTransform* HMAADHLNOOO; // 0x58
	::UnityEngine::GameObject* FMLHPKIHFJC; // 0x60
	::LGINJIKKBJA* CFLLDCFLANB; // 0x68
	::MonoUITableScrollV2* JBCLMABGEEN; // 0x70
	::UnityEngine::GameObject* JAFNECNHCEG; // 0x78
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x80
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x88
	::UnityEngine::GameObject* MIPMGOPFHCK; // 0x90
	::UnityEngine::GameObject* HOHOCKDLPEG; // 0x98
	::FGCOIBFFCHB* HLCDLFHMHDF; // 0xA0
	::UnityEngine::UI::Extension::UILocalizationText* NGCOAFBJJKF; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFAGNCHMJE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BEFAGNCHMJE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BEFAGNCHMJE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFAGNCHMJE_KGEBDLGBGNM_OFFSET))(this);
	}
};
