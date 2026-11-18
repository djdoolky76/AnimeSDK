#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class HorizontalLayoutGroup; }
namespace UnityEngine::UI { class Text; }

#define OHAIMOBHAAL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16C148A0)
#define OHAIMOBHAAL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16C147C0)
#define OHAIMOBHAAL__CTOR_OFFSET UNITYSDK_OFFSET(0x16C14890)

inline static constexpr unsigned int OHAIMOBHAAL_TypeDefinitionIndex = 65511;

class OHAIMOBHAAL : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Text* AMEEMEPHGEL; // 0x18
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x20
	::UnityEngine::UI::HorizontalLayoutGroup* APACFNEFFEF; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHAIMOBHAAL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OHAIMOBHAAL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OHAIMOBHAAL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
