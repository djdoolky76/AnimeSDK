#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CCDPCPAFLBD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x18DC4610)
#define CCDPCPAFLBD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x18DC44D0)
#define CCDPCPAFLBD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x18DC41E0)
#define CCDPCPAFLBD__CTOR_OFFSET UNITYSDK_OFFSET(0x18DC4600)

inline static constexpr unsigned int CCDPCPAFLBD_TypeDefinitionIndex = 61955;

class CCDPCPAFLBD : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Animation* BIDJJMDBPHA; // 0x18
	::FGCOIBFFCHB* DONHNNAHHPM; // 0x20
	::UnityEngine::GameObject* MCGPPADHCLJ; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* NHCHJOAOOHE; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* POMNJJEJKDI; // 0x38
	::UnityEngine::GameObject* IJFNGGOHFIO; // 0x40
	::FGCOIBFFCHB* ALIDFGKMGBF; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* GGNHJNGACLH; // 0x50
	::UnityEngine::Animation* DHCKPIBEKNB; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* LKIHDIDNCJL; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* IEDBMJNONLN; // 0x68
	::FGCOIBFFCHB* MPFDMAPAHOO; // 0x70
	::MoleMole::NotificationBadge* IMDLHCPGEDN; // 0x78
	::LGINJIKKBJA* ICPJFJLCCHB; // 0x80
	::UnityEngine::CanvasGroup* KHMGJLMKPHB; // 0x88
	::UnityEngine::UI::Extension::UILocalizationText* PEPDPICKGGE; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCDPCPAFLBD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CCDPCPAFLBD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CCDPCPAFLBD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCDPCPAFLBD_KGEBDLGBGNM_OFFSET))(this);
	}
};
