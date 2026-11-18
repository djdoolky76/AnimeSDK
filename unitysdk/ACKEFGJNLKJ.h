#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define ACKEFGJNLKJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x144BD260)
#define ACKEFGJNLKJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x144BD170)
#define ACKEFGJNLKJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x144BCF90)
#define ACKEFGJNLKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x144BD250)

inline static constexpr unsigned int ACKEFGJNLKJ_TypeDefinitionIndex = 47724;

class ACKEFGJNLKJ : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* EPIFILEEHFF; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* ADEPIHHHGEP; // 0x20
	::UnityEngine::RectTransform* CFKEAPOGCLD; // 0x28
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x38
	::LGINJIKKBJA* DAOIHCKDHOI; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACKEFGJNLKJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ACKEFGJNLKJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACKEFGJNLKJ_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ACKEFGJNLKJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
