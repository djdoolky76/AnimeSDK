#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIOngoingTipsWidgetController; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
template <typename T> class MEKABAIJMNM_1;

#define EHIOIDAPPPH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16BE3140)
#define EHIOIDAPPPH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16BE3070)
#define EHIOIDAPPPH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16BE2E50)
#define EHIOIDAPPPH__CTOR_OFFSET UNITYSDK_OFFSET(0x16BE3130)

inline static constexpr unsigned int EHIOIDAPPPH_TypeDefinitionIndex = 81057;

class EHIOIDAPPPH : public ::GIBMJLOJLKD
{
public:
	::MEKABAIJMNM_1<::MoleMole::UIOngoingTipsWidgetController*>* FLCHJHADKDD; // 0x18
	::UnityEngine::CanvasGroup* BJELHLLICGG; // 0x20
	::LGINJIKKBJA* DAOIHCKDHOI; // 0x28
	::LGINJIKKBJA* PHGKPEKNFMF; // 0x30
	::UnityEngine::RectTransform* AOHMILCHEIA; // 0x38
	::UnityEngine::RectTransform* DPEBFKFIKCL; // 0x40
	::UnityEngine::RectTransform* MGANIIFBFOB; // 0x48
	::UnityEngine::RectTransform* KAAJNKNDKNI; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHIOIDAPPPH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EHIOIDAPPPH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EHIOIDAPPPH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHIOIDAPPPH_KGEBDLGBGNM_OFFSET))(this);
	}
};
