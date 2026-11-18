#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define IBCCMKIBDHF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12E9E540)
#define IBCCMKIBDHF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12E9E470)
#define IBCCMKIBDHF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12E9E300)
#define IBCCMKIBDHF__CTOR_OFFSET UNITYSDK_OFFSET(0x12E9E530)

inline static constexpr unsigned int IBCCMKIBDHF_TypeDefinitionIndex = 93275;

class IBCCMKIBDHF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* ODALDIOFMPH; // 0x18
	::LGINJIKKBJA* KBCLEFAKGHE; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBCCMKIBDHF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IBCCMKIBDHF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IBCCMKIBDHF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBCCMKIBDHF_KGEBDLGBGNM_OFFSET))(this);
	}
};
