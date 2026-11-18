#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define IMFJKNHMKHI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14A31F70)
#define IMFJKNHMKHI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14A31EE0)
#define IMFJKNHMKHI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14A31D10)
#define IMFJKNHMKHI__CTOR_OFFSET UNITYSDK_OFFSET(0x14A31F60)

inline static constexpr unsigned int IMFJKNHMKHI_TypeDefinitionIndex = 69148;

class IMFJKNHMKHI : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* NCGGNMHOCLF; // 0x18
	::UnityEngine::RectTransform* DEIPJONPFNG; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* OHHMBNJAEAP; // 0x30
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* CGNOPHFKKKN; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* PACAHOKGDMM; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMFJKNHMKHI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IMFJKNHMKHI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMFJKNHMKHI_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IMFJKNHMKHI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
