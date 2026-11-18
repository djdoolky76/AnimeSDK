#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIRABInLevelBattleWidgetController; }
namespace MoleMole { class UIRABInLevelBottomWidgetController; }
namespace MoleMole { class UIRABInLevelRightWidgetController; }
namespace MoleMole { class UIRABInLevelTipsWidgetController; }
namespace MoleMole { class UIRABInLevelTopWidgetController; }
namespace System { class Object; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UIImgEventTrigger; }
template <typename T> class KNLFLMMHALL_1;
template <typename T> class MEKABAIJMNM_1;

#define IEAJMLAJCIF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1A39AF10)
#define IEAJMLAJCIF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1A39ADD0)
#define IEAJMLAJCIF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1A39AAC0)
#define IEAJMLAJCIF__CTOR_OFFSET UNITYSDK_OFFSET(0x1A39AF00)

inline static constexpr unsigned int IEAJMLAJCIF_TypeDefinitionIndex = 51550;

class IEAJMLAJCIF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* NIBIKDMMOKP; // 0x18
	::MEKABAIJMNM_1<::MoleMole::UIRABInLevelBattleWidgetController*>* FNHCHICOPDI; // 0x20
	::MEKABAIJMNM_1<::MoleMole::UIRABInLevelTopWidgetController*>* MDNIKOMNGFP; // 0x28
	::MEKABAIJMNM_1<::MoleMole::UIRABInLevelTipsWidgetController*>* DBNNONCDGDM; // 0x30
	::KNLFLMMHALL_1<::System::Object*>* IBCNKMCOCHD; // 0x38
	::UnityEngine::Transform* DCDENHPHFKD; // 0x40
	::MEKABAIJMNM_1<::MoleMole::UIRABInLevelBottomWidgetController*>* KDEJFCAIKLF; // 0x48
	::UnityEngine::UI::Extension::UIImgEventTrigger* KNHLOHIEIIL; // 0x50
	::UnityEngine::Transform* COPKFNAFGME; // 0x58
	::MEKABAIJMNM_1<::MoleMole::UIRABInLevelRightWidgetController*>* IEEDHGHAJHO; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEAJMLAJCIF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IEAJMLAJCIF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IEAJMLAJCIF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEAJMLAJCIF_KGEBDLGBGNM_OFFSET))(this);
	}
};
