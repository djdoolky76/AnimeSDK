#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define PPIBMCCAHOG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x150E4450)
#define PPIBMCCAHOG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x150E4330)
#define PPIBMCCAHOG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x150E40D0)
#define PPIBMCCAHOG__CTOR_OFFSET UNITYSDK_OFFSET(0x150E4440)

inline static constexpr unsigned int PPIBMCCAHOG_TypeDefinitionIndex = 88391;

class PPIBMCCAHOG : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* CCIILJMPGGJ; // 0x18
	::UnityEngine::GameObject* IODBDPOLPKA; // 0x20
	::LGINJIKKBJA* ICPJFJLCCHB; // 0x28
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x30
	::FGCOIBFFCHB* HHKEMPOBDKA; // 0x38
	::FGCOIBFFCHB* CHCCPCCKJBG; // 0x40
	::MoleMole::NotificationBadgeEx* JFDOOELFAOA; // 0x48
	::UnityEngine::Transform* AHKNHJKFDCH; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x58
	::LGINJIKKBJA* GCOEMIMAGJG; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPIBMCCAHOG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PPIBMCCAHOG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPIBMCCAHOG_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PPIBMCCAHOG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
