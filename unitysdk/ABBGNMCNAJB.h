#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadSpaceList; }
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIActivityCompRewardBtnGroupWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIFlowerShopTurnOverWidgetController; }
namespace System { class Object; }
template <typename T> class KNLFLMMHALL_1;
template <typename T> class MEKABAIJMNM_1;

#define ABBGNMCNAJB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1349F960)
#define ABBGNMCNAJB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1349F7D0)
#define ABBGNMCNAJB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1349F4B0)
#define ABBGNMCNAJB__CTOR_OFFSET UNITYSDK_OFFSET(0x1349F950)

inline static constexpr unsigned int ABBGNMCNAJB_TypeDefinitionIndex = 41809;

class ABBGNMCNAJB : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* CNEMGKPCIBB; // 0x18
	::KNLFLMMHALL_1<::System::Object*>* CPBPFOEIJOP; // 0x20
	::LGINJIKKBJA* DNGFGABBHEG; // 0x28
	::MoleMole::MonoGamepadSpaceList* IHGNFKCAJBE; // 0x30
	::MEKABAIJMNM_1<::MoleMole::UIFlowerShopTurnOverWidgetController*>* JDLOCBLCNHG; // 0x38
	::KNLFLMMHALL_1<::System::Object*>* ONILCPMPMPG; // 0x40
	::KNLFLMMHALL_1<::System::Object*>* IFPBLAMBEFP; // 0x48
	::MoleMole::NotificationBadgeEx* KAJEGIAKBKP; // 0x50
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x58
	::MEKABAIJMNM_1<::MoleMole::UIActivityCompRewardBtnGroupWidgetController*>* PPOLOFNCGJA; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABBGNMCNAJB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ABBGNMCNAJB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ABBGNMCNAJB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABBGNMCNAJB_KGEBDLGBGNM_OFFSET))(this);
	}
};
