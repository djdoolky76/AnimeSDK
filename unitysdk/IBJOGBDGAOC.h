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

#define IBJOGBDGAOC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16F58170)
#define IBJOGBDGAOC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16F58010)
#define IBJOGBDGAOC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16F57D30)
#define IBJOGBDGAOC__CTOR_OFFSET UNITYSDK_OFFSET(0x16F58160)

inline static constexpr unsigned int IBJOGBDGAOC_TypeDefinitionIndex = 91148;

class IBJOGBDGAOC : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* GIFMHAOANMC; // 0x18
	::FGCOIBFFCHB* POFFKGDFEBG; // 0x20
	::UIControllerExtensionData* GNHHKKAAJAA; // 0x28
	::FGCOIBFFCHB* CIJAKOOOPNG; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* NMMCKDHAHHH; // 0x38
	::FGCOIBFFCHB* LEIGOPHEFHC; // 0x40
	::UnityEngine::Animator* KEMKOKGFIGM; // 0x48
	::UnityEngine::Animation* LPOAEPILCEI; // 0x50
	::FGCOIBFFCHB* HHAFPGEKOLK; // 0x58
	::UnityEngine::Animation* OIKFFMHNCHB; // 0x60
	::UnityEngine::Animation* EODPFKHDCFI; // 0x68
	::UnityEngine::Transform* LBIHJNDFLOI; // 0x70
	::UnityEngine::RectTransform* KJODNKPHIGL; // 0x78
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x80
	::UnityEngine::RectTransform* KANDJKBKJMG; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBJOGBDGAOC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IBJOGBDGAOC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IBJOGBDGAOC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBJOGBDGAOC_KGEBDLGBGNM_OFFSET))(this);
	}
};
