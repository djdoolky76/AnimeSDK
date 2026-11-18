#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UIToggleButton; }

#define MJGDBEGFNBL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16C911B0)
#define MJGDBEGFNBL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16C910E0)
#define MJGDBEGFNBL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16C90EF0)
#define MJGDBEGFNBL__CTOR_OFFSET UNITYSDK_OFFSET(0x16C911A0)

inline static constexpr unsigned int MJGDBEGFNBL_TypeDefinitionIndex = 84379;

class MJGDBEGFNBL : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* JKLABKIHBKP; // 0x18
	::FGCOIBFFCHB* DJKOBDEJNME; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* NEMJJKIFGJM; // 0x28
	::UnityEngine::UI::Extension::UIToggleButton* DMBAKHKINMH; // 0x30
	::UnityEngine::RectTransform* IMDLHCPGEDN; // 0x38
	::LGINJIKKBJA* IOIANILNPPI; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJGDBEGFNBL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MJGDBEGFNBL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MJGDBEGFNBL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJGDBEGFNBL_KGEBDLGBGNM_OFFSET))(this);
	}
};
