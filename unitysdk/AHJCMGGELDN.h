#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define AHJCMGGELDN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17DD7CC0)
#define AHJCMGGELDN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17DD7B00)
#define AHJCMGGELDN__CTOR_OFFSET UNITYSDK_OFFSET(0x17DD7CB0)

inline static constexpr unsigned int AHJCMGGELDN_TypeDefinitionIndex = 46468;

class AHJCMGGELDN : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Text* MGEJBEMACOK; // 0x18
	::UnityEngine::Transform* OOENDNEIFDO; // 0x20
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x28
	::UnityEngine::Transform* GACPJICKOFC; // 0x30
	::UnityEngine::Transform* KFMOIJKJEKP; // 0x38
	::UnityEngine::Transform* LAPGIPKCHMH; // 0x40
	::UnityEngine::UI::Text* KAGMIOALCFO; // 0x48
	::UnityEngine::Transform* OLPJDHBFAJK; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* BIKIBICDFJJ; // 0x58
	::UnityEngine::UI::Text* PAAGDDDGPAA; // 0x60
	::MonoUITableScrollV2* CFDDJINKOCB; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* ILLDGENJAHB; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHJCMGGELDN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AHJCMGGELDN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AHJCMGGELDN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
