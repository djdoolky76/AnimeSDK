#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GFENNLFLNJN.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NOFEIFCABEH_BNCPJKOCNIO_OFFSET UNITYSDK_OFFSET(0x1B3341C0)
#define NOFEIFCABEH_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B334490)
#define NOFEIFCABEH_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B334920)
#define NOFEIFCABEH_GAJAAPPAPAK_OFFSET UNITYSDK_OFFSET(0x1B334580)
#define NOFEIFCABEH_KLALDKLBFOM_OFFSET UNITYSDK_OFFSET(0x1B3346C0)
#define NOFEIFCABEH_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B3341B0)
#define NOFEIFCABEH__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3341A0)

inline static constexpr unsigned int NOFEIFCABEH_TypeDefinitionIndex = 9718;

class NOFEIFCABEH : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* DHLJJJKBEDH; // 0x10
	::GFENNLFLNJN HBDPAIKANDB; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* NOEJLBDCAPK; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x39
	::System::Byte CNIAANMNOCF; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 GKDDGELLFLK; // 0x3C

	::System::Void _ctor(::GFENNLFLNJN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::GFENNLFLNJN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NOFEIFCABEH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NOFEIFCABEH_LJANCIBECFG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* BNCPJKOCNIO()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOFEIFCABEH_BNCPJKOCNIO_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOFEIFCABEH_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 GAJAAPPAPAK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOFEIFCABEH_GAJAAPPAPAK_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::String*>* KLALDKLBFOM()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOFEIFCABEH_KLALDKLBFOM_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NOFEIFCABEH_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
