#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define KGJMGFMGDAG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15B8C090)
#define KGJMGFMGDAG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15B8BF90)
#define KGJMGFMGDAG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15B8BD50)
#define KGJMGFMGDAG__CTOR_OFFSET UNITYSDK_OFFSET(0x15B8C080)

inline static constexpr unsigned int KGJMGFMGDAG_TypeDefinitionIndex = 66100;

class KGJMGFMGDAG : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* CNEMGKPCIBB; // 0x18
	::MoleMole::NotificationBadgeEx* HKGEGBIGECM; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* PCLNFDNGEBL; // 0x28
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x30
	::UnityEngine::RectTransform* CCOPHCPCIAA; // 0x38
	::UnityEngine::UI::Extension::UITimeWidget* CCDNKBONPLB; // 0x40
	::LGINJIKKBJA* AGOPMBCLNME; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* NINIFMIBDIE; // 0x50
	::UnityEngine::RectTransform* KKOJIGEFPBM; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* HDKKJDHAEDK; // 0x60
	::LGINJIKKBJA* NFMOOAHNCKI; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGJMGFMGDAG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KGJMGFMGDAG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGJMGFMGDAG_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KGJMGFMGDAG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
