#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define PHFEHGFLMEO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14B9DAF0)
#define PHFEHGFLMEO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14B9D9E0)
#define PHFEHGFLMEO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14B9D7E0)
#define PHFEHGFLMEO__CTOR_OFFSET UNITYSDK_OFFSET(0x14B9DAE0)

inline static constexpr unsigned int PHFEHGFLMEO_TypeDefinitionIndex = 52016;

class PHFEHGFLMEO : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Animation* IJCDJPIPCCN; // 0x18
	::LGINJIKKBJA* BKDDKDMILCA; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* BADFAMNNBDO; // 0x28
	::UnityEngine::CanvasGroup* FLLGCBJMAMI; // 0x30
	::UnityEngine::CanvasGroup* NKDNEFFOHCM; // 0x38
	::LGINJIKKBJA* GEAJLNMCGJG; // 0x40
	::LGINJIKKBJA* BJGFDPEJLLB; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* BMJDGHKDAIA; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHFEHGFLMEO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PHFEHGFLMEO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PHFEHGFLMEO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHFEHGFLMEO_KGEBDLGBGNM_OFFSET))(this);
	}
};
