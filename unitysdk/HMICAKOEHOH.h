#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class ADEJAGFCBHK;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define HMICAKOEHOH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1470B080)
#define HMICAKOEHOH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1470AFB0)
#define HMICAKOEHOH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1470AD30)
#define HMICAKOEHOH__CTOR_OFFSET UNITYSDK_OFFSET(0x1470B070)

inline static constexpr unsigned int HMICAKOEHOH_TypeDefinitionIndex = 50016;

class HMICAKOEHOH : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* BGNLFLDLLHM; // 0x18
	::UnityEngine::GameObject* FDJHEBHLJLD; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* CGKOIBMEAFH; // 0x28
	::LGINJIKKBJA* EHANLMBGMGJ; // 0x30
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x38
	::UnityEngine::UI::Extension::UITabButton* JLJCPHDIPGG; // 0x40
	::ADEJAGFCBHK* FJPCAHJIAGA; // 0x48
	::UnityEngine::RectTransform* NLADLFCHHBO; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* PGIJAANEIIH; // 0x58
	::UnityEngine::UI::Extension::UITabButton* OGMNNBIHMOD; // 0x60
	::UnityEngine::Transform* JKCLIPFBFFP; // 0x68
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMICAKOEHOH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HMICAKOEHOH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HMICAKOEHOH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMICAKOEHOH_KGEBDLGBGNM_OFFSET))(this);
	}
};
