#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define HKOAPFIIJGB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14D330F0)
#define HKOAPFIIJGB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14D32F70)
#define HKOAPFIIJGB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14D32C40)
#define HKOAPFIIJGB__CTOR_OFFSET UNITYSDK_OFFSET(0x14D330E0)

inline static constexpr unsigned int HKOAPFIIJGB_TypeDefinitionIndex = 71728;

class HKOAPFIIJGB : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* BLIKEMLDOCL; // 0x18
	::UnityEngine::UI::Extension::UITimeWidget* EAFAECECFFH; // 0x20
	::MoleMole::MonoGamepadCustomList* HDCAKKPKCDG; // 0x28
	::UnityEngine::GameObject* AGFKPKLMJEL; // 0x30
	::UnityEngine::GameObject* DJCBFNMKDOF; // 0x38
	::MoleMole::UIGeneralButtonController* NHJONBIFNNA; // 0x40
	::LGINJIKKBJA* DAOIHCKDHOI; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* PFKCCCFBHAG; // 0x50
	::UnityEngine::GameObject* ICILPAHPMLG; // 0x58
	::UnityEngine::GameObject* LNGKNJIMMME; // 0x60
	::UnityEngine::GameObject* DAJBFHNEDJG; // 0x68
	::LGINJIKKBJA* ACBHLJPFBBC; // 0x70
	::LGINJIKKBJA* ODLOPPBGBBF; // 0x78
	::LGINJIKKBJA* DDLILIHKOMG; // 0x80
	::MonoUITableScrollV2* PJIHELJFIIC; // 0x88
	::MonoUITableScrollV2* DKIAABMDFOK; // 0x90
	::UnityEngine::RectTransform* JPLLKCNCEJF; // 0x98
	::UnityEngine::RectTransform* HJIKFFIOAAM; // 0xA0
	::UnityEngine::UI::Extension::UILocalizationText* LLBDHLJMPEC; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKOAPFIIJGB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HKOAPFIIJGB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKOAPFIIJGB_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HKOAPFIIJGB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
