#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define BCMDLDKJIEB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1701ECB0)
#define BCMDLDKJIEB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1701EC20)
#define BCMDLDKJIEB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1701EA70)
#define BCMDLDKJIEB__CTOR_OFFSET UNITYSDK_OFFSET(0x1701ECA0)

inline static constexpr unsigned int BCMDLDKJIEB_TypeDefinitionIndex = 88427;

class BCMDLDKJIEB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* MDFGNBEFOJG; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* IPAFEODNDAL; // 0x20
	::UnityEngine::RectTransform* LKHNJLMCMOK; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* CPHFNAPJKIP; // 0x30
	::UnityEngine::RectTransform* ENDEKDLBNCD; // 0x38
	::LGINJIKKBJA* IANGJEEIJCP; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCMDLDKJIEB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BCMDLDKJIEB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCMDLDKJIEB_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BCMDLDKJIEB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
