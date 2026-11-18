#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define GCDKKJIJKLO_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x10EE1C60)
#define GCDKKJIJKLO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x10EE1BC0)
#define GCDKKJIJKLO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x10EE19A0)
#define GCDKKJIJKLO__CTOR_OFFSET UNITYSDK_OFFSET(0x10EE2000)

inline static constexpr unsigned int GCDKKJIJKLO_TypeDefinitionIndex = 55327;

class GCDKKJIJKLO : public ::IOOIHHOJOPI
{
public:
	::UnityEngine::RectTransform* IKDAMCDJKPI; // 0x28
	::UnityEngine::RectTransform* CGKGGEEGNKL; // 0x30
	::UnityEngine::RectTransform* GPCHMCJDOPE; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* BDKBBOKFMOB; // 0x40
	::FGCOIBFFCHB* MCJDMJHOBJO; // 0x48
	::LGINJIKKBJA* MNEINFFNPME; // 0x50
	::UnityEngine::RectTransform* POPDEICFJOE; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* INOKEAFJFNF; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCDKKJIJKLO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GCDKKJIJKLO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCDKKJIJKLO_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCDKKJIJKLO_EFKGNFCEENK_OFFSET))(this);
	}
};
