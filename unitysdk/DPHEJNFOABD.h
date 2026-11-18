#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define DPHEJNFOABD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x7FE0870)
#define DPHEJNFOABD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x7FE0730)
#define DPHEJNFOABD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x7FE04B0)
#define DPHEJNFOABD__CTOR_OFFSET UNITYSDK_OFFSET(0x7FE0860)

inline static constexpr unsigned int DPHEJNFOABD_TypeDefinitionIndex = 42016;

class DPHEJNFOABD : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* BKDDKDMILCA; // 0x18
	::LGINJIKKBJA* GPJIEHCKFMB; // 0x20
	::UnityEngine::Transform* CKEKMDOEMPC; // 0x28
	::UnityEngine::RectTransform* FBCCELIOCPK; // 0x30
	::MoleMole::MonoGamepadModule* KDIDFDPHEBN; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* ECKOCKKFHLO; // 0x40
	::UnityEngine::Transform* OCBNLOAGKNC; // 0x48
	::MoleMole::MonoGamepadModule* JODKLLLCLCL; // 0x50
	::UnityEngine::RectTransform* JKKKCPGFHLC; // 0x58
	::LGINJIKKBJA* MFLEBPBJGLH; // 0x60
	::LGINJIKKBJA* OFDHNHIKGEP; // 0x68
	::UnityEngine::Animation* CMCAKLMEKMP; // 0x70
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPHEJNFOABD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DPHEJNFOABD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DPHEJNFOABD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPHEJNFOABD_KGEBDLGBGNM_OFFSET))(this);
	}
};
