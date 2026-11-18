#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CANCDDCFPIA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11529330)
#define CANCDDCFPIA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11529240)
#define CANCDDCFPIA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11528F50)
#define CANCDDCFPIA__CTOR_OFFSET UNITYSDK_OFFSET(0x11529320)

inline static constexpr unsigned int CANCDDCFPIA_TypeDefinitionIndex = 46887;

class CANCDDCFPIA : public ::GIBMJLOJLKD
{
public:
	::MoleMole::NotificationBadge* GMABNNKNIIF; // 0x18
	::UnityEngine::Transform* FOGDDMCKIMH; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* NAMHGPIHELB; // 0x28
	::FGCOIBFFCHB* MOEIJFDDGAO; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* DKHEGNFOPKA; // 0x38
	::UnityEngine::GameObject* GFKJKBGDAOM; // 0x40
	::LGINJIKKBJA* PMBLECALCKB; // 0x48
	::UnityEngine::GameObject* NHIJHPOKDDB; // 0x50
	::UnityEngine::GameObject* GJLMPCMDOGD; // 0x58
	::MoleMole::NotificationBadge* LLFCKCPGLKG; // 0x60
	::UnityEngine::GameObject* LBMPDPJKNJH; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* GJHMOHDIJOC; // 0x70
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x78
	::UnityEngine::Transform* GDLCCFGKNBD; // 0x80
	::UnityEngine::UI::Extension::UILocalizationText* HFILCGNGJBK; // 0x88
	::UnityEngine::GameObject* BDOIAGAIMNC; // 0x90
	::UnityEngine::UI::Extension::UILocalizationText* FCIBGAJAIKH; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CANCDDCFPIA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CANCDDCFPIA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CANCDDCFPIA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CANCDDCFPIA_KGEBDLGBGNM_OFFSET))(this);
	}
};
