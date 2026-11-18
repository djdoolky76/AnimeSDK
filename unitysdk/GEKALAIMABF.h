#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define GEKALAIMABF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15CE0B80)
#define GEKALAIMABF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15CE0AD0)
#define GEKALAIMABF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15CE0890)
#define GEKALAIMABF__CTOR_OFFSET UNITYSDK_OFFSET(0x15CE0B70)

inline static constexpr unsigned int GEKALAIMABF_TypeDefinitionIndex = 69277;

class GEKALAIMABF : public ::GIBMJLOJLKD
{
public:
	::GCIMMDDIFBJ* OIKFFMHNCHB; // 0x18
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x20
	::UnityEngine::UI::Text* EMOJABAOCLE; // 0x28
	::UnityEngine::RectTransform* CHMCMCJHKCG; // 0x30
	::FGCOIBFFCHB* LMDHIPBAKMO; // 0x38
	::UnityEngine::UI::Text* MKAMEMNJEAM; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x48
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEKALAIMABF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GEKALAIMABF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEKALAIMABF_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GEKALAIMABF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
