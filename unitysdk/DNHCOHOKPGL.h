#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define DNHCOHOKPGL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12BD3D50)
#define DNHCOHOKPGL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12BD3CC0)
#define DNHCOHOKPGL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12BD3AC0)
#define DNHCOHOKPGL__CTOR_OFFSET UNITYSDK_OFFSET(0x12BD3D40)

inline static constexpr unsigned int DNHCOHOKPGL_TypeDefinitionIndex = 53049;

class DNHCOHOKPGL : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* NAICKACHPHA; // 0x18
	::MoleMole::NotificationBadgeEx* LHOADKMDIDG; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* DCPAEHBKAKE; // 0x28
	::MonoUITableScrollV2* CFDDJINKOCB; // 0x30
	::LGINJIKKBJA* LKIIFLODLAH; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* GCLDBJHCCML; // 0x40
	::UnityEngine::GameObject* MBAPIIPLLGD; // 0x48
	::UnityEngine::GameObject* HFEHDHCNJHB; // 0x50
	::UnityEngine::GameObject* EEHGHMNDLLF; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNHCOHOKPGL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DNHCOHOKPGL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNHCOHOKPGL_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DNHCOHOKPGL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
