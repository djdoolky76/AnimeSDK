#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIMainCitySwitchRoleSwitchPanelWidgetController; }
namespace MoleMole { class UIMainCitySwitchRoleTimePanelWidgetController; }
namespace MoleMole { class UIPlayerSkinSwitchWidgetController; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }
template <typename T> class MEKABAIJMNM_1;

#define JBOBIECOHKI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14A4D170)
#define JBOBIECOHKI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14A4D070)
#define JBOBIECOHKI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14A4CDE0)
#define JBOBIECOHKI__CTOR_OFFSET UNITYSDK_OFFSET(0x14A4D160)

inline static constexpr unsigned int JBOBIECOHKI_TypeDefinitionIndex = 58570;

class JBOBIECOHKI : public ::GIBMJLOJLKD
{
public:
	::GCIMMDDIFBJ* NNKNFFDKLOA; // 0x18
	::MEKABAIJMNM_1<::MoleMole::UIMainCitySwitchRoleTimePanelWidgetController*>* BMMNOIOIIHD; // 0x20
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x28
	::UnityEngine::UI::Extension::UITabButtonGroup* FJPCAHJIAGA; // 0x30
	::MEKABAIJMNM_1<::MoleMole::UIMainCitySwitchRoleSwitchPanelWidgetController*>* NFAAFJGFJIJ; // 0x38
	::GCIMMDDIFBJ* KOIKCNBGPLM; // 0x40
	::MEKABAIJMNM_1<::MoleMole::UIPlayerSkinSwitchWidgetController*>* BMMLFBNCDNE; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBOBIECOHKI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JBOBIECOHKI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JBOBIECOHKI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBOBIECOHKI_KGEBDLGBGNM_OFFSET))(this);
	}
};
