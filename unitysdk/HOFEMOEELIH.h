#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define HOFEMOEELIH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15DCF490)
#define HOFEMOEELIH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15DCF3C0)
#define HOFEMOEELIH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15DCF1E0)
#define HOFEMOEELIH__CTOR_OFFSET UNITYSDK_OFFSET(0x15DCF480)

inline static constexpr unsigned int HOFEMOEELIH_TypeDefinitionIndex = 38999;

class HOFEMOEELIH : public ::GIBMJLOJLKD
{
public:
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x18
	::UnityEngine::UI::Text* LHKDENMCKCA; // 0x20
	::UnityEngine::Transform* OOENDNEIFDO; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* JKDHPEBMIOH; // 0x30
	::UnityEngine::UI::Text* GCEOJJFFDOO; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* FKIIMEJJPBB; // 0x40
	::LGINJIKKBJA* DAOIHCKDHOI; // 0x48
	::UnityEngine::Transform* MBKACMJJMBH; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOFEMOEELIH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HOFEMOEELIH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HOFEMOEELIH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOFEMOEELIH_KGEBDLGBGNM_OFFSET))(this);
	}
};
