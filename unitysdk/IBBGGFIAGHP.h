#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define IBBGGFIAGHP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12E9D7A0)
#define IBBGGFIAGHP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12E9D6F0)
#define IBBGGFIAGHP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12E9D4A0)
#define IBBGGFIAGHP__CTOR_OFFSET UNITYSDK_OFFSET(0x12E9D790)

inline static constexpr unsigned int IBBGGFIAGHP_TypeDefinitionIndex = 69314;

class IBBGGFIAGHP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* ANDFIBAKEAE; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* EHMLMJKEJMM; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* DHOHEOIODPP; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* HFMIBIGMBDH; // 0x30
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x38
	::LGINJIKKBJA* OKGBOAENDNC; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* COEHFMOJEGM; // 0x48
	::LGINJIKKBJA* ACAAAJMHIFH; // 0x50
	::GCIMMDDIFBJ* LIDBLBAPJPD; // 0x58
	::GCIMMDDIFBJ* KDOFOMOEMFH; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBBGGFIAGHP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IBBGGFIAGHP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IBBGGFIAGHP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBBGGFIAGHP_KGEBDLGBGNM_OFFSET))(this);
	}
};
