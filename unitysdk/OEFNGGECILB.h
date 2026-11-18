#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define OEFNGGECILB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xF17C2D0)
#define OEFNGGECILB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xF17C1C0)
#define OEFNGGECILB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xF17C000)
#define OEFNGGECILB__CTOR_OFFSET UNITYSDK_OFFSET(0xF17C2C0)

inline static constexpr unsigned int OEFNGGECILB_TypeDefinitionIndex = 50441;

class OEFNGGECILB : public ::GIBMJLOJLKD
{
public:
	::MoleMole::UIGeneralButtonController* DDPMCFOFMFA; // 0x18
	::UnityEngine::RectTransform* IJLCFNIBMLP; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* KIMKLBMFHCE; // 0x28
	::LGINJIKKBJA* JDMMGAMPIKL; // 0x30
	::LGINJIKKBJA* DAOIHCKDHOI; // 0x38
	::UnityEngine::UI::Extension::UITimeWidget* EAFAECECFFH; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEFNGGECILB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OEFNGGECILB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEFNGGECILB_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OEFNGGECILB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
