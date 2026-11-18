#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define FIOEOLAGHCD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1321A500)
#define FIOEOLAGHCD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1321A470)
#define FIOEOLAGHCD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1321A2F0)
#define FIOEOLAGHCD__CTOR_OFFSET UNITYSDK_OFFSET(0x1321A4F0)

inline static constexpr unsigned int FIOEOLAGHCD_TypeDefinitionIndex = 58136;

class FIOEOLAGHCD : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* HBADNCJHEOJ; // 0x18
	::LGINJIKKBJA* EBAOFIJCMEP; // 0x20
	::MoleMole::NotificationBadgeEx* IMDLHCPGEDN; // 0x28
	::UnityEngine::RectTransform* JOBJDBBKHBM; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIOEOLAGHCD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FIOEOLAGHCD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FIOEOLAGHCD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIOEOLAGHCD_KGEBDLGBGNM_OFFSET))(this);
	}
};
