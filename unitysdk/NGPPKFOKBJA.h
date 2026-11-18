#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define NGPPKFOKBJA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x10D76E00)
#define NGPPKFOKBJA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x10D76D30)
#define NGPPKFOKBJA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x10D76B40)
#define NGPPKFOKBJA__CTOR_OFFSET UNITYSDK_OFFSET(0x10D76DF0)

inline static constexpr unsigned int NGPPKFOKBJA_TypeDefinitionIndex = 70766;

class NGPPKFOKBJA : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x18
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x28
	::LGINJIKKBJA* EADDCKNAFGG; // 0x30
	::UnityEngine::RectTransform* AHKNHJKFDCH; // 0x38
	::UnityEngine::RectTransform* GDLCCFGKNBD; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGPPKFOKBJA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NGPPKFOKBJA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NGPPKFOKBJA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGPPKFOKBJA_KGEBDLGBGNM_OFFSET))(this);
	}
};
