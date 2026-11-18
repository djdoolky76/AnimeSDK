#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define NONAPHDKJJI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x10681810)
#define NONAPHDKJJI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x10681720)
#define NONAPHDKJJI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x10681550)
#define NONAPHDKJJI__CTOR_OFFSET UNITYSDK_OFFSET(0x10681800)

inline static constexpr unsigned int NONAPHDKJJI_TypeDefinitionIndex = 89098;

class NONAPHDKJJI : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* LKHNJLMCMOK; // 0x18
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x20
	::UnityEngine::RectTransform* AJIBHBJNOCE; // 0x28
	::UnityEngine::RectTransform* EPECGKECIKL; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NONAPHDKJJI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NONAPHDKJJI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NONAPHDKJJI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NONAPHDKJJI_KGEBDLGBGNM_OFFSET))(this);
	}
};
