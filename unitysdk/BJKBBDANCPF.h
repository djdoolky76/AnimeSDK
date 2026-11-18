#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace MoleMole { class UIZenkovQuestTypeWidgetController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class MEKABAIJMNM_1;

#define BJKBBDANCPF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x18571290)
#define BJKBBDANCPF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x18571190)
#define BJKBBDANCPF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x18570EF0)
#define BJKBBDANCPF__CTOR_OFFSET UNITYSDK_OFFSET(0x18571280)

inline static constexpr unsigned int BJKBBDANCPF_TypeDefinitionIndex = 66490;

class BJKBBDANCPF : public ::GIBMJLOJLKD
{
public:
	::MoleMole::UIGeneralButtonController* KHOJKFHFKIJ; // 0x18
	::FGCOIBFFCHB* JNOGBOJONHO; // 0x20
	::MEKABAIJMNM_1<::MoleMole::UIZenkovQuestTypeWidgetController*>* PEEIKBALJKP; // 0x28
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x30
	::UnityEngine::UI::Extension::UITimeWidget* EAFAECECFFH; // 0x38
	::MoleMole::UIGeneralButtonController* HIEJKJBFFJI; // 0x40
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x48
	::UnityEngine::RectTransform* DDAEJLBFBJH; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x58
	::UnityEngine::RectTransform* ODALDIOFMPH; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* FOOPGFEHCDL; // 0x68
	::UnityEngine::RectTransform* DOLKIKNDPDO; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJKBBDANCPF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BJKBBDANCPF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJKBBDANCPF_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BJKBBDANCPF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
