#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class MonoInputKey; }
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace System { class Object; }
template <typename T> class KNLFLMMHALL_1;

#define CAANAFGMJBD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1398DF60)
#define CAANAFGMJBD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1398DEB0)
#define CAANAFGMJBD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1398DCD0)
#define CAANAFGMJBD__CTOR_OFFSET UNITYSDK_OFFSET(0x1398DF50)

inline static constexpr unsigned int CAANAFGMJBD_TypeDefinitionIndex = 42442;

class CAANAFGMJBD : public ::GIBMJLOJLKD
{
public:
	::MoleMole::UIGeneralButtonController* EHHEECFPKOF; // 0x18
	::MoleMole::MonoInputKey* OJIAIMHINMF; // 0x20
	::LGINJIKKBJA* KFOKPEHEAPI; // 0x28
	::MoleMole::NotificationBadgeEx* IMDLHCPGEDN; // 0x30
	::KNLFLMMHALL_1<::System::Object*>* EHMLMJKEJMM; // 0x38
	::MoleMole::MonoGamepadModule* MPOMJOGAJHJ; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAANAFGMJBD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CAANAFGMJBD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAANAFGMJBD_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CAANAFGMJBD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
