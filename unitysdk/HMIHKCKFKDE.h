#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }

#define HMIHKCKFKDE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1470B6A0)
#define HMIHKCKFKDE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1470B540)
#define HMIHKCKFKDE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1470B300)
#define HMIHKCKFKDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1470B690)

inline static constexpr unsigned int HMIHKCKFKDE_TypeDefinitionIndex = 50286;

class HMIHKCKFKDE : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* PNDHOGLJAHH; // 0x18
	::UnityEngine::UI::Extension::UITabButtonGroup* HJAHKAKOIAO; // 0x20
	::LGINJIKKBJA* LLJDDGLMOCH; // 0x28
	::LGINJIKKBJA* OKGBOAENDNC; // 0x30
	::LGINJIKKBJA* JAOGMBOINDH; // 0x38
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x40
	::UnityEngine::Transform* OCPFFNKLFKP; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* EDJNAHMLPJF; // 0x50
	::LGINJIKKBJA* DGMBCBMOKJP; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* GAEGHHINCPN; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMIHKCKFKDE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HMIHKCKFKDE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMIHKCKFKDE_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HMIHKCKFKDE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
