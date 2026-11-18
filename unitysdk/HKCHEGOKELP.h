#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define HKCHEGOKELP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x18195640)
#define HKCHEGOKELP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x18195570)
#define HKCHEGOKELP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x181952F0)
#define HKCHEGOKELP__CTOR_OFFSET UNITYSDK_OFFSET(0x18195630)

inline static constexpr unsigned int HKCHEGOKELP_TypeDefinitionIndex = 84413;

class HKCHEGOKELP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x18
	::UnityEngine::Transform* LOGBOEJKNJG; // 0x20
	::UnityEngine::RectTransform* LBAPCNNGOIJ; // 0x28
	::UnityEngine::Transform* GDLCCFGKNBD; // 0x30
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x38
	::MoleMole::NotificationBadgeEx* JFDOOELFAOA; // 0x40
	::UnityEngine::Transform* AHKNHJKFDCH; // 0x48
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x50
	::UnityEngine::RectTransform* MCGPPADHCLJ; // 0x58
	::UnityEngine::RectTransform* PAMDIEJPEAO; // 0x60
	::FGCOIBFFCHB* GDHMNMHFKHM; // 0x68
	::UnityEngine::Transform* DPDOFDHIBCP; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKCHEGOKELP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HKCHEGOKELP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HKCHEGOKELP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKCHEGOKELP_KGEBDLGBGNM_OFFSET))(this);
	}
};
