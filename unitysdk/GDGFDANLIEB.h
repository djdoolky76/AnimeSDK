#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LMLOKCHEOCN.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GDGFDANLIEB_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x152CBA30)
#define GDGFDANLIEB_DNHNKHLAMGE_OFFSET UNITYSDK_OFFSET(0x152CBB20)
#define GDGFDANLIEB_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x152CBA20)
#define GDGFDANLIEB_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x152CBA10)
#define GDGFDANLIEB_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x152CB8D0)
#define GDGFDANLIEB__CTOR_OFFSET UNITYSDK_OFFSET(0x152CB8C0)

inline static constexpr unsigned int GDGFDANLIEB_TypeDefinitionIndex = 14658;

class GDGFDANLIEB : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* KAHFDLLGAFA; // 0x10
	::LMLOKCHEOCN HBDPAIKANDB; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Int32 PCMOJLNOPPM; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x34
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x35
	::System::Byte CNIAANMNOCF; // 0x36

	::System::Void _ctor(::LMLOKCHEOCN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LMLOKCHEOCN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + GDGFDANLIEB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDGFDANLIEB_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDGFDANLIEB_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GDGFDANLIEB_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDGFDANLIEB_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* DNHNKHLAMGE()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDGFDANLIEB_DNHNKHLAMGE_OFFSET))(this);
	}
};
