#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIZenkovQuestTypeWidgetController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class MEKABAIJMNM_1;

#define CMEOOLCPMIJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15340400)
#define CMEOOLCPMIJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15340300)
#define CMEOOLCPMIJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x153400A0)
#define CMEOOLCPMIJ__CTOR_OFFSET UNITYSDK_OFFSET(0x153403F0)

inline static constexpr unsigned int CMEOOLCPMIJ_TypeDefinitionIndex = 41388;

class CMEOOLCPMIJ : public ::GIBMJLOJLKD
{
public:
	::MEKABAIJMNM_1<::MoleMole::UIZenkovQuestTypeWidgetController*>* PEEIKBALJKP; // 0x18
	::UnityEngine::GameObject* HBPOGNEJLDE; // 0x20
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* NHFGBLBKOMF; // 0x30
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* OAKAIIJLMIL; // 0x40
	::UnityEngine::RectTransform* KPKIHOKJHGP; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* FMAPBPHAGOE; // 0x50
	::FGCOIBFFCHB* JNOJJEPACMM; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMEOOLCPMIJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CMEOOLCPMIJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMEOOLCPMIJ_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CMEOOLCPMIJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
