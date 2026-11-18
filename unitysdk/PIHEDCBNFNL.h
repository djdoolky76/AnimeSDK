#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }

#define PIHEDCBNFNL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14B9E0F0)
#define PIHEDCBNFNL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14B9DFF0)
#define PIHEDCBNFNL__CTOR_OFFSET UNITYSDK_OFFSET(0x14B9E0E0)

inline static constexpr unsigned int PIHEDCBNFNL_TypeDefinitionIndex = 91468;

class PIHEDCBNFNL : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Text* EKMLAACMEPH; // 0x18
	::UnityEngine::RectTransform* ODALDIOFMPH; // 0x20
	::UnityEngine::Animation* HEFEMOOKKPP; // 0x28
	::UnityEngine::CanvasGroup* IAHNJHLMKCH; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHEDCBNFNL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PIHEDCBNFNL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PIHEDCBNFNL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
