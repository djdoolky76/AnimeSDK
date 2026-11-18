#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UIToggleButton; }

#define GJDCGPIOEDI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x181465D0)
#define GJDCGPIOEDI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x18146490)
#define GJDCGPIOEDI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x18146250)
#define GJDCGPIOEDI__CTOR_OFFSET UNITYSDK_OFFSET(0x181465C0)

inline static constexpr unsigned int GJDCGPIOEDI_TypeDefinitionIndex = 58901;

class GJDCGPIOEDI : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* NEMJJKIFGJM; // 0x20
	::UnityEngine::RectTransform* IMDLHCPGEDN; // 0x28
	::LGINJIKKBJA* IOIANILNPPI; // 0x30
	::FGCOIBFFCHB* DJKOBDEJNME; // 0x38
	::FGCOIBFFCHB* AJIBHBJNOCE; // 0x40
	::UnityEngine::Transform* IODBDPOLPKA; // 0x48
	::FGCOIBFFCHB* JKLABKIHBKP; // 0x50
	::UnityEngine::UI::Extension::UIToggleButton* DMBAKHKINMH; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJDCGPIOEDI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GJDCGPIOEDI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GJDCGPIOEDI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJDCGPIOEDI_KGEBDLGBGNM_OFFSET))(this);
	}
};
