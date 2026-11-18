#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define EBOLIBBCDDD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xFDD0F70)
#define EBOLIBBCDDD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xFDD0E10)
#define EBOLIBBCDDD__CTOR_OFFSET UNITYSDK_OFFSET(0xFDD0F60)

inline static constexpr unsigned int EBOLIBBCDDD_TypeDefinitionIndex = 67989;

class EBOLIBBCDDD : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* DAKAOOLGEHH; // 0x18
	::UnityEngine::GameObject* INBKMONCEOM; // 0x20
	::UnityEngine::Animation* HBBOOGPIJOF; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* POJJCOHIENB; // 0x30
	::UnityEngine::UI::Text* MGEDBKBHJPM; // 0x38
	::MonoUITableScrollV2* GBDMPAFLBEB; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* INKOHOFLAHG; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* EHMLMJKEJMM; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBOLIBBCDDD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EBOLIBBCDDD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EBOLIBBCDDD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
