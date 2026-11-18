#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OIKCNNLKAAI.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define KIIBHENLBEE_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x18DE8BF0)
#define KIIBHENLBEE_DPOAIINMNJO_OFFSET UNITYSDK_OFFSET(0x18DE8AB0)
#define KIIBHENLBEE_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x18DE8CF0)
#define KIIBHENLBEE_HGIBLMFOOLI_OFFSET UNITYSDK_OFFSET(0x18DE8D00)
#define KIIBHENLBEE_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x18DE8CE0)
#define KIIBHENLBEE_MCDIEBODAJC_OFFSET UNITYSDK_OFFSET(0x18DE8860)
#define KIIBHENLBEE_MDFOIEACKHE_OFFSET UNITYSDK_OFFSET(0x18DE89A0)
#define KIIBHENLBEE__CTOR_OFFSET UNITYSDK_OFFSET(0x18DE8850)

inline static constexpr unsigned int KIIBHENLBEE_TypeDefinitionIndex = 16726;

class KIIBHENLBEE : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::OIKCNNLKAAI HBDPAIKANDB; // 0x18
	::System::String* BCOAAAMCKHI; // 0x28
	::System::String* GINJAPBJDPK; // 0x30
	::System::Byte CNIAANMNOCF; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x39
	::System::Byte GCHCDJCFCEG; // 0x3A
	::System::Byte ACIOBDEBDNK; // 0x3B
	::System::Int32 OHCFCKMDEDP; // 0x3C
	::System::Int32 EMHKNMICLAI; // 0x40

	::System::Void _ctor(::OIKCNNLKAAI LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::OIKCNNLKAAI, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KIIBHENLBEE__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 MCDIEBODAJC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIIBHENLBEE_MCDIEBODAJC_OFFSET))(this);
	}

	::System::String* MDFOIEACKHE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIIBHENLBEE_MDFOIEACKHE_OFFSET))(this);
	}

	::System::Int32 DPOAIINMNJO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIIBHENLBEE_DPOAIINMNJO_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIIBHENLBEE_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KIIBHENLBEE_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KIIBHENLBEE_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* HGIBLMFOOLI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIIBHENLBEE_HGIBLMFOOLI_OFFSET))(this);
	}
};
