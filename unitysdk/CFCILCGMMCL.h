#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIWishlistTargetAvatarPopupWidgetController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class MEKABAIJMNM_1;

#define CFCILCGMMCL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x132569B0)
#define CFCILCGMMCL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13256850)
#define CFCILCGMMCL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x132565D0)
#define CFCILCGMMCL__CTOR_OFFSET UNITYSDK_OFFSET(0x132569A0)

inline static constexpr unsigned int CFCILCGMMCL_TypeDefinitionIndex = 64355;

class CFCILCGMMCL : public ::GIBMJLOJLKD
{
public:
	::MoleMole::NotificationBadge* JFDOOELFAOA; // 0x18
	::UnityEngine::RectTransform* AHKNHJKFDCH; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x28
	::FGCOIBFFCHB* KJBINNHKCDC; // 0x30
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x38
	::UnityEngine::RectTransform* GDLCCFGKNBD; // 0x40
	::LGINJIKKBJA* DEFJLEPDBON; // 0x48
	::LGINJIKKBJA* HNHAINDFOJN; // 0x50
	::MonoUITableScrollV2* CFDDJINKOCB; // 0x58
	::MEKABAIJMNM_1<::MoleMole::UIWishlistTargetAvatarPopupWidgetController*>* BMDFIJOGIDG; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFCILCGMMCL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CFCILCGMMCL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CFCILCGMMCL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFCILCGMMCL_KGEBDLGBGNM_OFFSET))(this);
	}
};
