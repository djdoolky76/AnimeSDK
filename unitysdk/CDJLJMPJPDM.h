#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CDJLJMPJPDM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x145482B0)
#define CDJLJMPJPDM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14548220)
#define CDJLJMPJPDM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14548020)
#define CDJLJMPJPDM__CTOR_OFFSET UNITYSDK_OFFSET(0x145482A0)

inline static constexpr unsigned int CDJLJMPJPDM_TypeDefinitionIndex = 75408;

class CDJLJMPJPDM : public ::GIBMJLOJLKD
{
public:
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x18
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x20
	::UnityEngine::UI::Text* MKAMEMNJEAM; // 0x28
	::UnityEngine::RectTransform* CHMCMCJHKCG; // 0x30
	::GCIMMDDIFBJ* OIKFFMHNCHB; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* FDOGGANACAP; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDJLJMPJPDM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CDJLJMPJPDM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CDJLJMPJPDM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDJLJMPJPDM_KGEBDLGBGNM_OFFSET))(this);
	}
};
