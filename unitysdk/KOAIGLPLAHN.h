#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IDFCIPCFNJC.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define KOAIGLPLAHN_BNKPNGANFDN_OFFSET UNITYSDK_OFFSET(0x1955EAE0)
#define KOAIGLPLAHN_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1955E880)
#define KOAIGLPLAHN_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1955EAC0)
#define KOAIGLPLAHN_KKLOPPFDHEG_OFFSET UNITYSDK_OFFSET(0x1955EC20)
#define KOAIGLPLAHN_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1955EAD0)
#define KOAIGLPLAHN_LLMHBMFJDOM_OFFSET UNITYSDK_OFFSET(0x1955E740)
#define KOAIGLPLAHN_LNHLCEJBOIN_OFFSET UNITYSDK_OFFSET(0x1955ED30)
#define KOAIGLPLAHN_OLDHJIAPCFM_OFFSET UNITYSDK_OFFSET(0x1955E970)
#define KOAIGLPLAHN__CTOR_OFFSET UNITYSDK_OFFSET(0x1955E730)

inline static constexpr unsigned int KOAIGLPLAHN_TypeDefinitionIndex = 10468;

class KOAIGLPLAHN : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* LGIJNLIAJAJ; // 0x18
	::IDFCIPCFNJC HBDPAIKANDB; // 0x20
	::System::Int32 ELEFKIIGOOE; // 0x30
	::System::Int32 AICFILHLIPF; // 0x34
	::System::Int32 MCBFIBNDJJF; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3C
	::System::Byte ACIOBDEBDNK; // 0x3D
	::System::Byte CNIAANMNOCF; // 0x3E
	::System::Byte _padding0[0x1];
	::System::UInt64 MAFKDBBHOID; // 0x40

	::System::Void _ctor(::IDFCIPCFNJC LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::IDFCIPCFNJC, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KOAIGLPLAHN__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 LLMHBMFJDOM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOAIGLPLAHN_LLMHBMFJDOM_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOAIGLPLAHN_COFGIJJOFLP_OFFSET))(this);
	}

	::System::UInt64 OLDHJIAPCFM()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + KOAIGLPLAHN_OLDHJIAPCFM_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KOAIGLPLAHN_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KOAIGLPLAHN_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 BNKPNGANFDN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOAIGLPLAHN_BNKPNGANFDN_OFFSET))(this);
	}

	::System::String* KKLOPPFDHEG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOAIGLPLAHN_KKLOPPFDHEG_OFFSET))(this);
	}

	::System::Int32 LNHLCEJBOIN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOAIGLPLAHN_LNHLCEJBOIN_OFFSET))(this);
	}
};
