#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI { class Text; }

#define NAKAFNEHFGA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13ECA860)
#define NAKAFNEHFGA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13ECA7D0)
#define NAKAFNEHFGA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13ECA660)
#define NAKAFNEHFGA__CTOR_OFFSET UNITYSDK_OFFSET(0x13ECA850)

inline static constexpr unsigned int NAKAFNEHFGA_TypeDefinitionIndex = 65754;

class NAKAFNEHFGA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Text* HJMOFMLMAOE; // 0x18
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x20
	::MoleMole::NotificationBadgeEx* JFDOOELFAOA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAKAFNEHFGA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NAKAFNEHFGA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NAKAFNEHFGA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAKAFNEHFGA_KGEBDLGBGNM_OFFSET))(this);
	}
};
