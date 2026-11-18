#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define NEAMLNAGEMB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x18FB1D20)
#define NEAMLNAGEMB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x18FB1C50)
#define NEAMLNAGEMB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x18FB1AE0)
#define NEAMLNAGEMB__CTOR_OFFSET UNITYSDK_OFFSET(0x18FB1D10)

inline static constexpr unsigned int NEAMLNAGEMB_TypeDefinitionIndex = 88519;

class NEAMLNAGEMB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* OGDHHANGGIG; // 0x18
	::LGINJIKKBJA* JACOINAGBIP; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* IGMLLFPCOGE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEAMLNAGEMB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NEAMLNAGEMB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NEAMLNAGEMB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEAMLNAGEMB_KGEBDLGBGNM_OFFSET))(this);
	}
};
