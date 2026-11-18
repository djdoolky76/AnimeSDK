#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define GHAAOFEJIOD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x181419D0)
#define GHAAOFEJIOD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x181418C0)
#define GHAAOFEJIOD__CTOR_OFFSET UNITYSDK_OFFSET(0x181419C0)

inline static constexpr unsigned int GHAAOFEJIOD_TypeDefinitionIndex = 45321;

class GHAAOFEJIOD : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Text* ODALDIOFMPH; // 0x18
	::UnityEngine::RectTransform* KFKBKELPIOA; // 0x20
	::UnityEngine::RectTransform* IODBDPOLPKA; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* IDAFMBAEOAH; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* DFBFCEHJLOC; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHAAOFEJIOD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GHAAOFEJIOD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GHAAOFEJIOD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
