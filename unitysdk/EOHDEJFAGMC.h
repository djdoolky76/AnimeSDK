#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralBtn03WidgetController; }
namespace MoleMole { class UIGeneralButtonController; }
namespace MoleMole { class UIItemIconBtnSmallWidgetController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class MEKABAIJMNM_1;

#define EOHDEJFAGMC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11CBC9B0)
#define EOHDEJFAGMC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11CBC900)
#define EOHDEJFAGMC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11CBC720)
#define EOHDEJFAGMC__CTOR_OFFSET UNITYSDK_OFFSET(0x11CBC9A0)

inline static constexpr unsigned int EOHDEJFAGMC_TypeDefinitionIndex = 52720;

class EOHDEJFAGMC : public ::GIBMJLOJLKD
{
public:
	::MoleMole::UIGeneralButtonController* PMBLECALCKB; // 0x18
	::UnityEngine::GameObject* EGOLNOCJJBL; // 0x20
	::MEKABAIJMNM_1<::MoleMole::UIGeneralBtn03WidgetController*>* CNEMGKPCIBB; // 0x28
	::MoleMole::NotificationBadgeEx* IMDLHCPGEDN; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x38
	::MEKABAIJMNM_1<::MoleMole::UIItemIconBtnSmallWidgetController*>* BFJPFKCCANA; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOHDEJFAGMC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EOHDEJFAGMC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOHDEJFAGMC_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EOHDEJFAGMC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
