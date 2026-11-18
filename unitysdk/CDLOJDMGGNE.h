#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralRewardListBtnWidgetController; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class MEKABAIJMNM_1;

#define CDLOJDMGGNE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x139A5B60)
#define CDLOJDMGGNE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x139A5A00)
#define CDLOJDMGGNE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x139A5780)
#define CDLOJDMGGNE__CTOR_OFFSET UNITYSDK_OFFSET(0x139A5B50)

inline static constexpr unsigned int CDLOJDMGGNE_TypeDefinitionIndex = 93189;

class CDLOJDMGGNE : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* ECODJHAMAGM; // 0x18
	::LGINJIKKBJA* CBLLMIHCJDL; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* KONPMOGCPID; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* NMJOHNHCPFA; // 0x30
	::LGINJIKKBJA* CACBCKLNKFO; // 0x38
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x40
	::MonoUITableScrollV2* ODALDIOFMPH; // 0x48
	::UnityEngine::Animation* OIKFFMHNCHB; // 0x50
	::UnityEngine::Transform* OHDIAMFPEBO; // 0x58
	::MEKABAIJMNM_1<::MoleMole::UIGeneralRewardListBtnWidgetController*>* MOGCHJHEEAN; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDLOJDMGGNE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CDLOJDMGGNE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CDLOJDMGGNE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDLOJDMGGNE_KGEBDLGBGNM_OFFSET))(this);
	}
};
