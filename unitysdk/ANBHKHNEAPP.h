#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define ANBHKHNEAPP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17008FB0)
#define ANBHKHNEAPP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17008EE0)
#define ANBHKHNEAPP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17008CC0)
#define ANBHKHNEAPP__CTOR_OFFSET UNITYSDK_OFFSET(0x17008FA0)

inline static constexpr unsigned int ANBHKHNEAPP_TypeDefinitionIndex = 79464;

class ANBHKHNEAPP : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* OLMMPKMNCKE; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x20
	::FGCOIBFFCHB* BGABOFECPBN; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* MFPDNAIGFLG; // 0x30
	::UnityEngine::GameObject* MKKBLIFPING; // 0x38
	::MoleMole::NotificationBadgeEx* HFCOKPBMGGA; // 0x40
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x48
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANBHKHNEAPP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ANBHKHNEAPP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ANBHKHNEAPP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANBHKHNEAPP_KGEBDLGBGNM_OFFSET))(this);
	}
};
