#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class MonoInputKey; }
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }
template <typename T> class KNLFLMMHALL_1;

#define AIOMOJOLFHB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12CFA600)
#define AIOMOJOLFHB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12CFA500)
#define AIOMOJOLFHB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12CFA270)
#define AIOMOJOLFHB__CTOR_OFFSET UNITYSDK_OFFSET(0x12CFA5F0)

inline static constexpr unsigned int AIOMOJOLFHB_TypeDefinitionIndex = 38845;

class AIOMOJOLFHB : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* NJADLLJJDAP; // 0x18
	::MoleMole::NotificationBadgeEx* LKEFGKDFBFK; // 0x20
	::KNLFLMMHALL_1<::System::Object*>* EHMLMJKEJMM; // 0x28
	::MoleMole::MonoGamepadModule* MPOMJOGAJHJ; // 0x30
	::MoleMole::MonoInputKey* OJIAIMHINMF; // 0x38
	::UnityEngine::GameObject* NHPNBLLIOAF; // 0x40
	::LGINJIKKBJA* KFOKPEHEAPI; // 0x48
	::KNLFLMMHALL_1<::System::Object*>* ELADFNPFAKD; // 0x50
	::MoleMole::UIGeneralButtonController* LDMKNJLJAEH; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIOMOJOLFHB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AIOMOJOLFHB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIOMOJOLFHB_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AIOMOJOLFHB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
