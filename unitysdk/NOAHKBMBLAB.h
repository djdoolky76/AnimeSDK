#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define NOAHKBMBLAB_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0xED3E3B0)
#define NOAHKBMBLAB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xED3E2A0)
#define NOAHKBMBLAB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xED3E000)
#define NOAHKBMBLAB__CTOR_OFFSET UNITYSDK_OFFSET(0xED3E8E0)

inline static constexpr unsigned int NOAHKBMBLAB_TypeDefinitionIndex = 58308;

class NOAHKBMBLAB : public ::IOOIHHOJOPI
{
public:
	::UnityEngine::RectTransform* IPCOIFBOEPA; // 0x28
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x30
	::UnityEngine::RectTransform* PHHAOAKBCKE; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* HBADNCJHEOJ; // 0x40
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x48
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* JDJKPGMLGDN; // 0x58
	::FGCOIBFFCHB* KKMCLPDAJKJ; // 0x60
	::FGCOIBFFCHB* HBPKENOFMAC; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* EPMEILNJMFF; // 0x70
	::UnityEngine::RectTransform* IKOFJEHPPAN; // 0x78
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOAHKBMBLAB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NOAHKBMBLAB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOAHKBMBLAB_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOAHKBMBLAB_EFKGNFCEENK_OFFSET))(this);
	}
};
