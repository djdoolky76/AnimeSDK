#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define GJMCDLLNHJC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x10EFDB30)
#define GJMCDLLNHJC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x10EFDA80)
#define GJMCDLLNHJC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x10EFD8C0)
#define GJMCDLLNHJC__CTOR_OFFSET UNITYSDK_OFFSET(0x10EFDB20)

inline static constexpr unsigned int GJMCDLLNHJC_TypeDefinitionIndex = 76436;

class GJMCDLLNHJC : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* CCPLIMCODMH; // 0x18
	::FGCOIBFFCHB* GMDAJPJHDLG; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* LFBMJMODNKN; // 0x28
	::UnityEngine::GameObject* FGFHALJAFBE; // 0x30
	::FGCOIBFFCHB* HKGLBJHDCMO; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJMCDLLNHJC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GJMCDLLNHJC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJMCDLLNHJC_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GJMCDLLNHJC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
