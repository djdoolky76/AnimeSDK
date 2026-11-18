#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define EGHOHIDFMKE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16997600)
#define EGHOHIDFMKE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16997550)
#define EGHOHIDFMKE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16997370)
#define EGHOHIDFMKE__CTOR_OFFSET UNITYSDK_OFFSET(0x169975F0)

inline static constexpr unsigned int EGHOHIDFMKE_TypeDefinitionIndex = 47245;

class EGHOHIDFMKE : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x20
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x28
	::FGCOIBFFCHB* LKHNJLMCMOK; // 0x30
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x38
	::UnityEngine::RectTransform* DPDOFDHIBCP; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGHOHIDFMKE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EGHOHIDFMKE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGHOHIDFMKE_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EGHOHIDFMKE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
