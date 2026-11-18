#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UIImgEventTrigger; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define PJNPCEEFPLA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15572F60)
#define PJNPCEEFPLA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15572E90)
#define PJNPCEEFPLA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15572C50)
#define PJNPCEEFPLA__CTOR_OFFSET UNITYSDK_OFFSET(0x15572F50)

inline static constexpr unsigned int PJNPCEEFPLA_TypeDefinitionIndex = 42279;

class PJNPCEEFPLA : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* IFPJJMBJDHL; // 0x18
	::UnityEngine::CanvasGroup* COPKFNAFGME; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* HMBAEGDOIKA; // 0x28
	::UnityEngine::UI::Extension::UIImgEventTrigger* KNHLOHIEIIL; // 0x30
	::UnityEngine::RectTransform* NMBPIIBENOE; // 0x38
	::UnityEngine::RectTransform* GIAMAGKKNDN; // 0x40
	::UnityEngine::RectTransform* HOJJGBJCFLG; // 0x48
	::FGCOIBFFCHB* GOJOCCCAOFL; // 0x50
	::UnityEngine::RectTransform* GAIEPMPKAEE; // 0x58
	::UnityEngine::GameObject* PDACHPLBKIE; // 0x60
	::FGCOIBFFCHB* IDAMPAGAHNI; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJNPCEEFPLA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PJNPCEEFPLA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PJNPCEEFPLA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJNPCEEFPLA_KGEBDLGBGNM_OFFSET))(this);
	}
};
