#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
class UIControllerExtensionData;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }

#define OJNFJDBNLHL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14F889E0)
#define OJNFJDBNLHL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14F88930)
#define OJNFJDBNLHL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14F88720)
#define OJNFJDBNLHL__CTOR_OFFSET UNITYSDK_OFFSET(0x14F889D0)

inline static constexpr unsigned int OJNFJDBNLHL_TypeDefinitionIndex = 71436;

class OJNFJDBNLHL : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::CanvasGroup* ODALDIOFMPH; // 0x18
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x20
	::GCIMMDDIFBJ* IGGCKPBGFEA; // 0x28
	::LGINJIKKBJA* BCPJHNGIAKL; // 0x30
	::LGINJIKKBJA* KGAIBJBCCLN; // 0x38
	::UIControllerExtensionData* DOPJCLFPIAA; // 0x40
	::GCIMMDDIFBJ* OIKFFMHNCHB; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJNFJDBNLHL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OJNFJDBNLHL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJNFJDBNLHL_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OJNFJDBNLHL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
