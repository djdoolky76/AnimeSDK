#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define DPAPILGICNA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1697E9F0)
#define DPAPILGICNA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1697E8B0)
#define DPAPILGICNA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1697E6A0)
#define DPAPILGICNA__CTOR_OFFSET UNITYSDK_OFFSET(0x1697E9E0)

inline static constexpr unsigned int DPAPILGICNA_TypeDefinitionIndex = 76001;

class DPAPILGICNA : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* ANDFIBAKEAE; // 0x18
	::MoleMole::NotificationBadge* JFDOOELFAOA; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x28
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x30
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x38
	::UnityEngine::Transform* IPCOIFBOEPA; // 0x40
	::FGCOIBFFCHB* LBMPDPJKNJH; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPAPILGICNA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DPAPILGICNA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPAPILGICNA_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DPAPILGICNA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
