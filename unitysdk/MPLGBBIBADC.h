#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MPLGBBIBADC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1C5A1760)
#define MPLGBBIBADC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1C5A16B0)
#define MPLGBBIBADC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1C5A1500)
#define MPLGBBIBADC__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5A1750)

inline static constexpr unsigned int MPLGBBIBADC_TypeDefinitionIndex = 68762;

class MPLGBBIBADC : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* IFAEDDINJCH; // 0x20
	::FGCOIBFFCHB* KOCMNCCAJKD; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* HHMKJPNDLDM; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPLGBBIBADC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MPLGBBIBADC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPLGBBIBADC_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MPLGBBIBADC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
