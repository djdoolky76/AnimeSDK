#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define GOEIPOMEHOA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13D6EFD0)
#define GOEIPOMEHOA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13D6EED0)
#define GOEIPOMEHOA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13D6EC20)
#define GOEIPOMEHOA__CTOR_OFFSET UNITYSDK_OFFSET(0x13D6EFC0)

inline static constexpr unsigned int GOEIPOMEHOA_TypeDefinitionIndex = 58356;

class GOEIPOMEHOA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* AHKNHJKFDCH; // 0x18
	::FGCOIBFFCHB* CHCCPCCKJBG; // 0x20
	::UnityEngine::GameObject* MCGPPADHCLJ; // 0x28
	::GCIMMDDIFBJ* CMCAKLMEKMP; // 0x30
	::UnityEngine::RectTransform* NIJMIHAPEEI; // 0x38
	::UnityEngine::GameObject* NLNAHDIJEDM; // 0x40
	::FGCOIBFFCHB* AAICEELJIIB; // 0x48
	::LGINJIKKBJA* HFOIKMDPJFA; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* EHALDAHKAGN; // 0x58
	::FGCOIBFFCHB* KEGNNHIHKOJ; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* PPPNOAPFDMN; // 0x68
	::MoleMole::MonoGamepadModule* GDEEPNOOCFH; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOEIPOMEHOA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GOEIPOMEHOA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GOEIPOMEHOA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOEIPOMEHOA_KGEBDLGBGNM_OFFSET))(this);
	}
};
