#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CDHGEJMDOPG.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KLEGOOJAMHJ_BEFEHMPJGIF_OFFSET UNITYSDK_OFFSET(0x1B509170)
#define KLEGOOJAMHJ_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B509060)
#define KLEGOOJAMHJ_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B509160)
#define KLEGOOJAMHJ_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B509150)
#define KLEGOOJAMHJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1B509050)

inline static constexpr unsigned int KLEGOOJAMHJ_TypeDefinitionIndex = 11306;

class KLEGOOJAMHJ : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* KNBBKNNPHHC; // 0x10
	::CDHGEJMDOPG HBDPAIKANDB; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x30
	::System::Byte CNIAANMNOCF; // 0x31
	::System::Byte ACIOBDEBDNK; // 0x32

	::System::Void _ctor(::CDHGEJMDOPG LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::CDHGEJMDOPG, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KLEGOOJAMHJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLEGOOJAMHJ_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KLEGOOJAMHJ_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KLEGOOJAMHJ_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::System::Int32>* BEFEHMPJGIF()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLEGOOJAMHJ_BEFEHMPJGIF_OFFSET))(this);
	}
};
