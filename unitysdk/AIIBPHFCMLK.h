#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class UIControllerExtensionData;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define AIIBPHFCMLK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14358C20)
#define AIIBPHFCMLK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14358AC0)
#define AIIBPHFCMLK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x143587E0)
#define AIIBPHFCMLK__CTOR_OFFSET UNITYSDK_OFFSET(0x14358C10)

inline static constexpr unsigned int AIIBPHFCMLK_TypeDefinitionIndex = 88656;

class AIIBPHFCMLK : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Animation* LPOAEPILCEI; // 0x18
	::UnityEngine::Animation* OIKFFMHNCHB; // 0x20
	::UnityEngine::Animation* EODPFKHDCFI; // 0x28
	::UnityEngine::RectTransform* KANDJKBKJMG; // 0x30
	::UnityEngine::RectTransform* KJODNKPHIGL; // 0x38
	::FGCOIBFFCHB* HHAFPGEKOLK; // 0x40
	::UnityEngine::Transform* LBIHJNDFLOI; // 0x48
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x50
	::UIControllerExtensionData* GNHHKKAAJAA; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* NMMCKDHAHHH; // 0x60
	::FGCOIBFFCHB* POFFKGDFEBG; // 0x68
	::FGCOIBFFCHB* CIJAKOOOPNG; // 0x70
	::FGCOIBFFCHB* LEIGOPHEFHC; // 0x78
	::UnityEngine::RectTransform* GIFMHAOANMC; // 0x80
	::UnityEngine::Animator* KEMKOKGFIGM; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIIBPHFCMLK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AIIBPHFCMLK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIIBPHFCMLK_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AIIBPHFCMLK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
