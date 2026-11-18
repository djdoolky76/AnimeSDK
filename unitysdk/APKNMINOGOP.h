#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI { class ScrollRect; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define APKNMINOGOP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13875280)
#define APKNMINOGOP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13875190)
#define APKNMINOGOP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13874FA0)
#define APKNMINOGOP__CTOR_OFFSET UNITYSDK_OFFSET(0x13875270)

inline static constexpr unsigned int APKNMINOGOP_TypeDefinitionIndex = 53388;

class APKNMINOGOP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Text* GDILPDALNJE; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* FBIAJEDCOCN; // 0x20
	::UnityEngine::UI::Text* DHCAINJHMKN; // 0x28
	::LGINJIKKBJA* JMHHAMNACPK; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* GGGHMELIJKA; // 0x38
	::UnityEngine::UI::Text* DODGBFBFEJC; // 0x40
	::LGINJIKKBJA* AECEKBHHHHO; // 0x48
	::UnityEngine::UI::ScrollRect* GACCPICFIMN; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APKNMINOGOP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + APKNMINOGOP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APKNMINOGOP_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + APKNMINOGOP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
