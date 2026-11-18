#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HENIDDICPFP.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define JFKGGIKIOBN_CNGFHHECIEL_OFFSET UNITYSDK_OFFSET(0x15AA8A50)
#define JFKGGIKIOBN_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x15AA8CE0)
#define JFKGGIKIOBN_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x15AA8CD0)
#define JFKGGIKIOBN_GKAMCMIJFHJ_OFFSET UNITYSDK_OFFSET(0x15AA8B90)
#define JFKGGIKIOBN_JMCLOPHNIDO_OFFSET UNITYSDK_OFFSET(0x15AA8DD0)
#define JFKGGIKIOBN_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x15AA8A40)
#define JFKGGIKIOBN_OEBELJGDNCE_OFFSET UNITYSDK_OFFSET(0x15AA8930)
#define JFKGGIKIOBN_OOKDENEFBJO_OFFSET UNITYSDK_OFFSET(0x15AA8820)
#define JFKGGIKIOBN__CTOR_OFFSET UNITYSDK_OFFSET(0x15AA8810)

inline static constexpr unsigned int JFKGGIKIOBN_TypeDefinitionIndex = 14919;

class JFKGGIKIOBN : public ::System::Object
{
public:
	::System::String* GGAEGAKJCBC; // 0x10
	::System::String* ELNKEEADDLD; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::String* PBJLNCHLBOH; // 0x28
	::HENIDDICPFP HBDPAIKANDB; // 0x30
	::System::Int32 CEEBHOAKLFN; // 0x40
	::System::Int32 OKBBGPGIODD; // 0x44
	::System::Byte ACIOBDEBDNK; // 0x48
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x49
	::System::Byte CNIAANMNOCF; // 0x4A

	::System::Void _ctor(::HENIDDICPFP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HENIDDICPFP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JFKGGIKIOBN__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* OOKDENEFBJO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFKGGIKIOBN_OOKDENEFBJO_OFFSET))(this);
	}

	::System::String* OEBELJGDNCE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFKGGIKIOBN_OEBELJGDNCE_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JFKGGIKIOBN_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 CNGFHHECIEL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFKGGIKIOBN_CNGFHHECIEL_OFFSET))(this);
	}

	::System::Int32 GKAMCMIJFHJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFKGGIKIOBN_GKAMCMIJFHJ_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JFKGGIKIOBN_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFKGGIKIOBN_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* JMCLOPHNIDO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFKGGIKIOBN_JMCLOPHNIDO_OFFSET))(this);
	}
};
