#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CFADGPICCIO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x139A7150)
#define CFADGPICCIO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x139A7080)
#define CFADGPICCIO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x139A6E50)
#define CFADGPICCIO__CTOR_OFFSET UNITYSDK_OFFSET(0x139A7140)

inline static constexpr unsigned int CFADGPICCIO_TypeDefinitionIndex = 59281;

class CFADGPICCIO : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* MPLLGKKNEGF; // 0x18
	::UnityEngine::GameObject* HOHNLJFOLLN; // 0x20
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x28
	::FGCOIBFFCHB* BONLEIHNDBN; // 0x30
	::UnityEngine::Transform* ONHFKJIDCBP; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* ODALDIOFMPH; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* GHMHNHFAOND; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* JHGGHHOJDPF; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFADGPICCIO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CFADGPICCIO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CFADGPICCIO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFADGPICCIO_KGEBDLGBGNM_OFFSET))(this);
	}
};
