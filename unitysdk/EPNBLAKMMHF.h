#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIActivityCompWeekRewardBtnWidgetController; }
namespace MoleMole { class UICommentInfoWidgetController; }
namespace MoleMole { class UICommentLevelWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class MEKABAIJMNM_1;

#define EPNBLAKMMHF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xF9EBFB0)
#define EPNBLAKMMHF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xF9EBE20)
#define EPNBLAKMMHF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xF9EBB10)
#define EPNBLAKMMHF__CTOR_OFFSET UNITYSDK_OFFSET(0xF9EBFA0)

inline static constexpr unsigned int EPNBLAKMMHF_TypeDefinitionIndex = 45923;

class EPNBLAKMMHF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* COKCGFEDEEP; // 0x18
	::LGINJIKKBJA* HMDKJBELLPH; // 0x20
	::LGINJIKKBJA* CNEMGKPCIBB; // 0x28
	::GCIMMDDIFBJ* DHINNAEKDPG; // 0x30
	::UnityEngine::UI::Extension::UITimeWidget* CCDNKBONPLB; // 0x38
	::LGINJIKKBJA* BKDDKDMILCA; // 0x40
	::MEKABAIJMNM_1<::MoleMole::UICommentInfoWidgetController*>* BLNDEJNJEOH; // 0x48
	::FGCOIBFFCHB* IKOFJEHPPAN; // 0x50
	::MEKABAIJMNM_1<::MoleMole::UICommentLevelWidgetController*>* EOHMNOHEAMN; // 0x58
	::MEKABAIJMNM_1<::MoleMole::UIActivityCompWeekRewardBtnWidgetController*>* NHOPFJNDAHA; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPNBLAKMMHF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EPNBLAKMMHF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EPNBLAKMMHF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPNBLAKMMHF_KGEBDLGBGNM_OFFSET))(this);
	}
};
