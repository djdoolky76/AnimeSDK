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

#define EDOIMHBHFPP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14147AF0)
#define EDOIMHBHFPP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x141479F0)
#define EDOIMHBHFPP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14147730)
#define EDOIMHBHFPP__CTOR_OFFSET UNITYSDK_OFFSET(0x14147AE0)

inline static constexpr unsigned int EDOIMHBHFPP_TypeDefinitionIndex = 78740;

class EDOIMHBHFPP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* IODBDPOLPKA; // 0x18
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x20
	::FGCOIBFFCHB* DHHKKNFGKBF; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* LFCJAFJGJFN; // 0x30
	::UnityEngine::RectTransform* CCBGLNIKAHD; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x40
	::UnityEngine::RectTransform* AJIBHBJNOCE; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* HMGCKABEBGK; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* BFEKNHCDDGK; // 0x58
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x60
	::LGINJIKKBJA* JEJJONGBOFJ; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* HPELNFEHKCG; // 0x70
	::MoleMole::NotificationBadgeEx* MAMKMHKDPCA; // 0x78
	::UnityEngine::RectTransform* KKMCLPDAJKJ; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDOIMHBHFPP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EDOIMHBHFPP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDOIMHBHFPP_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EDOIMHBHFPP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
