#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class HorizontalLayoutGroup; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define BFBMBFNBBHP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x143D43A0)
#define BFBMBFNBBHP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x143D42D0)
#define BFBMBFNBBHP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x143D40C0)
#define BFBMBFNBBHP__CTOR_OFFSET UNITYSDK_OFFSET(0x143D4390)

inline static constexpr unsigned int BFBMBFNBBHP_TypeDefinitionIndex = 84169;

class BFBMBFNBBHP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* PPBDAOBPLCF; // 0x18
	::UnityEngine::UI::HorizontalLayoutGroup* APACFNEFFEF; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x28
	::UnityEngine::GameObject* EIJEIMDHAEH; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* IAEAGDGPJJN; // 0x38
	::UnityEngine::RectTransform* IKOFJEHPPAN; // 0x40
	::LGINJIKKBJA* OEIFHCEFEBG; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* ICBJLIKNENB; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* OMHKAHABPEL; // 0x58
	::UnityEngine::GameObject* FPKOIJKPFKK; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFBMBFNBBHP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BFBMBFNBBHP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFBMBFNBBHP_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BFBMBFNBBHP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
