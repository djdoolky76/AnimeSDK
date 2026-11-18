#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MKANJAFHFBC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13193B10)
#define MKANJAFHFBC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13193A10)
#define MKANJAFHFBC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x131937F0)
#define MKANJAFHFBC__CTOR_OFFSET UNITYSDK_OFFSET(0x13193B00)

inline static constexpr unsigned int MKANJAFHFBC_TypeDefinitionIndex = 92538;

class MKANJAFHFBC : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* MDAPCFNIFJK; // 0x18
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x20
	::FGCOIBFFCHB* IHKLMOHCPGH; // 0x28
	::UnityEngine::RectTransform* MCGPPADHCLJ; // 0x30
	::MoleMole::NotificationBadgeEx* JFDOOELFAOA; // 0x38
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* IKOHKGFKJAF; // 0x48
	::UnityEngine::RectTransform* CAJAPFDGMHH; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKANJAFHFBC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MKANJAFHFBC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MKANJAFHFBC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKANJAFHFBC_KGEBDLGBGNM_OFFSET))(this);
	}
};
