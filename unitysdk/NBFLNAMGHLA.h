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

#define NBFLNAMGHLA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12FDC790)
#define NBFLNAMGHLA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12FDC6A0)
#define NBFLNAMGHLA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12FDC4A0)
#define NBFLNAMGHLA__CTOR_OFFSET UNITYSDK_OFFSET(0x12FDC780)

inline static constexpr unsigned int NBFLNAMGHLA_TypeDefinitionIndex = 70134;

class NBFLNAMGHLA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* FANPGBEFGEG; // 0x18
	::UnityEngine::Transform* EKHMFMNONGI; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* HMEFCBHEEFG; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* KIDEAFMDDOB; // 0x30
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x38
	::UnityEngine::UI::Text* LHKDENMCKCA; // 0x40
	::UnityEngine::UI::Text* EMOJABAOCLE; // 0x48
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x50
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBFLNAMGHLA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NBFLNAMGHLA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NBFLNAMGHLA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBFLNAMGHLA_KGEBDLGBGNM_OFFSET))(this);
	}
};
