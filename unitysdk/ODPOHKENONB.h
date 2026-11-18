#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUIGachaItemParam;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
template <typename T> class KNLFLMMHALL_1;

#define ODPOHKENONB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15FD55D0)
#define ODPOHKENONB_GPNBAIDLLOJ_OFFSET UNITYSDK_OFFSET(0x15FD52A0)
#define ODPOHKENONB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15FD5490)
#define ODPOHKENONB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15FD4FF0)
#define ODPOHKENONB__CTOR_OFFSET UNITYSDK_OFFSET(0x15FD55C0)

inline static constexpr unsigned int ODPOHKENONB_TypeDefinitionIndex = 64076;

class ODPOHKENONB : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x18
	::FGCOIBFFCHB* IMENBGPAJOM; // 0x20
	::KNLFLMMHALL_1<::System::Object*>* GKONGELABLO; // 0x28
	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* LGNMCBLCGPO; // 0x30
	::KNLFLMMHALL_1<::System::Object*>* LNBMBCKMMGA; // 0x38
	::MoleMole::NotificationBadge* KPMEHDCGCFB; // 0x40
	::FGCOIBFFCHB* NEANOCNPGIK; // 0x48
	::MonoUIGachaItemParam* KLBGAHPJAJO; // 0x50
	::UnityEngine::Animation* KDOFOMOEMFH; // 0x58
	::KNLFLMMHALL_1<::System::Object*>* EBMPJEOHMHN; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODPOHKENONB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ODPOHKENONB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ODPOHKENONB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* GPNBAIDLLOJ(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ODPOHKENONB_GPNBAIDLLOJ_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODPOHKENONB_KGEBDLGBGNM_OFFSET))(this);
	}
};
