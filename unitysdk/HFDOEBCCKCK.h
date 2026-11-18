#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIActivityIconLiveBtnWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIItemIconBtnSmallWidgetController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class MEKABAIJMNM_1;

#define HFDOEBCCKCK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17A43760)
#define HFDOEBCCKCK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17A43640)
#define HFDOEBCCKCK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17A43400)
#define HFDOEBCCKCK__CTOR_OFFSET UNITYSDK_OFFSET(0x17A43750)

inline static constexpr unsigned int HFDOEBCCKCK_TypeDefinitionIndex = 54123;

class HFDOEBCCKCK : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* IGHMEIHOGCA; // 0x18
	::MEKABAIJMNM_1<::MoleMole::UIItemIconBtnSmallWidgetController*>* BFJPFKCCANA; // 0x20
	::MEKABAIJMNM_1<::MoleMole::UIActivityIconLiveBtnWidgetController*>* FODFDOJMKGA; // 0x28
	::MoleMole::NotificationBadgeEx* LPLEFLENCMP; // 0x30
	::UnityEngine::RectTransform* PHAKDMFIAHL; // 0x38
	::UnityEngine::UI::Extension::UITimeWidget* FFALELBLJLN; // 0x40
	::MEKABAIJMNM_1<::MoleMole::UIActivityIconLiveBtnWidgetController*>* JACNANPHENA; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFDOEBCCKCK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HFDOEBCCKCK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFDOEBCCKCK_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HFDOEBCCKCK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
