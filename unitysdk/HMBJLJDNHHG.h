#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define HMBJLJDNHHG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15B6C9D0)
#define HMBJLJDNHHG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15B6C940)
#define HMBJLJDNHHG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15B6C760)
#define HMBJLJDNHHG__CTOR_OFFSET UNITYSDK_OFFSET(0x15B6C9C0)

inline static constexpr unsigned int HMBJLJDNHHG_TypeDefinitionIndex = 44088;

class HMBJLJDNHHG : public ::GIBMJLOJLKD
{
public:
	::MoleMole::NotificationBadgeEx* IMDLHCPGEDN; // 0x18
	::LGINJIKKBJA* JBAGBGPNPDL; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* HJOCLLEIAGE; // 0x28
	::UnityEngine::RectTransform* GJFKDEHNOFK; // 0x30
	::UnityEngine::RectTransform* KKOJIGEFPBM; // 0x38
	::UnityEngine::RectTransform* PALOGGGMFBA; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* HBADNCJHEOJ; // 0x48
	::UnityEngine::RectTransform* OPHDDAOKGCC; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMBJLJDNHHG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HMBJLJDNHHG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMBJLJDNHHG_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HMBJLJDNHHG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
