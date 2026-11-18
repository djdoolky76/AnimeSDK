#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIActivitySeriesRewardItemWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class MEKABAIJMNM_1;

#define PKIKNCCGMOL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15573630)
#define PKIKNCCGMOL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15573560)
#define PKIKNCCGMOL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15573310)
#define PKIKNCCGMOL__CTOR_OFFSET UNITYSDK_OFFSET(0x15573620)

inline static constexpr unsigned int PKIKNCCGMOL_TypeDefinitionIndex = 71090;

class PKIKNCCGMOL : public ::GIBMJLOJLKD
{
public:
	::MoleMole::NotificationBadgeEx* IMDLHCPGEDN; // 0x18
	::MEKABAIJMNM_1<::MoleMole::UIActivitySeriesRewardItemWidgetController*>* DHPMOOJCDHN; // 0x20
	::UnityEngine::RectTransform* BPLHGDNBDFH; // 0x28
	::UnityEngine::RectTransform* JOBJDBBKHBM; // 0x30
	::UnityEngine::RectTransform* FLMKBHEPNNF; // 0x38
	::LGINJIKKBJA* CNEMGKPCIBB; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* NGNCPKELCEL; // 0x48
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x50
	::MoleMole::MonoGamepadSelectable* BIFNJFGLIFA; // 0x58
	::UnityEngine::RectTransform* OKLLFEIJKHN; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKIKNCCGMOL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PKIKNCCGMOL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PKIKNCCGMOL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKIKNCCGMOL_KGEBDLGBGNM_OFFSET))(this);
	}
};
