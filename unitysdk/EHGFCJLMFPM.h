#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define EHGFCJLMFPM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1710E3C0)
#define EHGFCJLMFPM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1710E2B0)
#define EHGFCJLMFPM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1710E080)
#define EHGFCJLMFPM__CTOR_OFFSET UNITYSDK_OFFSET(0x1710E3B0)

inline static constexpr unsigned int EHGFCJLMFPM_TypeDefinitionIndex = 64696;

class EHGFCJLMFPM : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* DEBFJDFPLCO; // 0x18
	::FGCOIBFFCHB* FCOCNDLFIKE; // 0x20
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x28
	::UnityEngine::GameObject* FFPCPJONELK; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* KKBCLLDCMBK; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* JJBCJGPICJO; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* NAKOOKMAJHG; // 0x48
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x50
	::UnityEngine::RectTransform* CJELMAIFPLA; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHGFCJLMFPM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EHGFCJLMFPM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EHGFCJLMFPM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHGFCJLMFPM_KGEBDLGBGNM_OFFSET))(this);
	}
};
