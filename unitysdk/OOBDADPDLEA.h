#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UIImgEventTrigger; }
namespace UnityEngine::UI::Extension { class UISlider; }

#define OOBDADPDLEA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1551F0B0)
#define OOBDADPDLEA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1551EF50)
#define OOBDADPDLEA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1551ED20)
#define OOBDADPDLEA__CTOR_OFFSET UNITYSDK_OFFSET(0x1551F0A0)

inline static constexpr unsigned int OOBDADPDLEA_TypeDefinitionIndex = 76414;

class OOBDADPDLEA : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* LINJCKMHJNH; // 0x18
	::UnityEngine::UI::Extension::UISlider* ALHAABFMENH; // 0x20
	::UnityEngine::UI::Extension::UIImgEventTrigger* KNHLOHIEIIL; // 0x28
	::LGINJIKKBJA* GIBHAIDFFFE; // 0x30
	::UnityEngine::RectTransform* PLBHDNDOKEJ; // 0x38
	::LGINJIKKBJA* PLPMCNAOCMB; // 0x40
	::UnityEngine::UI::Extension::UISlider* HJIGBIHJAKE; // 0x48
	::LGINJIKKBJA* MHHGKIDOLEL; // 0x50
	::LGINJIKKBJA* NCFIHBBCGMF; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOBDADPDLEA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OOBDADPDLEA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOBDADPDLEA_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OOBDADPDLEA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
