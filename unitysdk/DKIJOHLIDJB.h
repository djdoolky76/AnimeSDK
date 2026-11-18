#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EJIECHGHPIN.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DKIJOHLIDJB_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1950FF70)
#define DKIJOHLIDJB_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1950FB30)
#define DKIJOHLIDJB_LECACDPBNGI_OFFSET UNITYSDK_OFFSET(0x1950FB40)
#define DKIJOHLIDJB_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1950FF60)
#define DKIJOHLIDJB__CTOR_OFFSET UNITYSDK_OFFSET(0x1950FB20)

inline static constexpr unsigned int DKIJOHLIDJB_TypeDefinitionIndex = 16503;

class DKIJOHLIDJB : public ::System::Object
{
public:
	::EJIECHGHPIN HBDPAIKANDB; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* BEJPFNACGPD; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x31
	::System::Byte CNIAANMNOCF; // 0x32

	::System::Void _ctor(::EJIECHGHPIN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::EJIECHGHPIN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DKIJOHLIDJB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DKIJOHLIDJB_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::System::String*>* LECACDPBNGI()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKIJOHLIDJB_LECACDPBNGI_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DKIJOHLIDJB_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKIJOHLIDJB_COFGIJJOFLP_OFFSET))(this);
	}
};
