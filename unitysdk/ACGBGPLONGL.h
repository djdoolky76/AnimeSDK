#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace MoleMole { class UIZenkovQuestTypeWidgetController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class MEKABAIJMNM_1;

#define ACGBGPLONGL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12643080)
#define ACGBGPLONGL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12642F30)
#define ACGBGPLONGL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12642BF0)
#define ACGBGPLONGL__CTOR_OFFSET UNITYSDK_OFFSET(0x12643070)

inline static constexpr unsigned int ACGBGPLONGL_TypeDefinitionIndex = 68328;

class ACGBGPLONGL : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* IAOCBIHABLH; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* NHFGBLBKOMF; // 0x20
	::UnityEngine::RectTransform* KPKIHOKJHGP; // 0x28
	::UnityEngine::RectTransform* JFDOOELFAOA; // 0x30
	::UnityEngine::RectTransform* NBIKKACIPJH; // 0x38
	::UnityEngine::GameObject* HBPOGNEJLDE; // 0x40
	::MEKABAIJMNM_1<::MoleMole::UIZenkovQuestTypeWidgetController*>* PEEIKBALJKP; // 0x48
	::FGCOIBFFCHB* JOBJDBBKHBM; // 0x50
	::UnityEngine::RectTransform* DDAEJLBFBJH; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* HOBLJJDMPPD; // 0x60
	::MoleMole::UIGeneralButtonController* MOCNJCHDCPO; // 0x68
	::FGCOIBFFCHB* JNOJJEPACMM; // 0x70
	::UnityEngine::UI::Extension::UILocalizationText* OAKAIIJLMIL; // 0x78
	::UnityEngine::UI::Extension::UILocalizationText* FMAPBPHAGOE; // 0x80
	::UnityEngine::RectTransform* FIOPMNMJBCG; // 0x88
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x90
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGBGPLONGL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ACGBGPLONGL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ACGBGPLONGL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGBGPLONGL_KGEBDLGBGNM_OFFSET))(this);
	}
};
