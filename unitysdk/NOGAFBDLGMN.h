#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENIPDPBNCJG.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NOGAFBDLGMN_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1CCF0070)
#define NOGAFBDLGMN_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1CCF02A0)
#define NOGAFBDLGMN_KONJPLDJNGB_OFFSET UNITYSDK_OFFSET(0x1CCF02C0)
#define NOGAFBDLGMN_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1CCF02B0)
#define NOGAFBDLGMN_MANLOHEKGMA_OFFSET UNITYSDK_OFFSET(0x1CCF0160)
#define NOGAFBDLGMN__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCF0060)

inline static constexpr unsigned int NOGAFBDLGMN_TypeDefinitionIndex = 13864;

class NOGAFBDLGMN : public ::System::Object
{
public:
	::ENIPDPBNCJG HBDPAIKANDB; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* MCDMOCAJAPE; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x30
	::System::Byte CNIAANMNOCF; // 0x31
	::System::Byte ACIOBDEBDNK; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 LLICNEPDEBL; // 0x34

	::System::Void _ctor(::ENIPDPBNCJG LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::ENIPDPBNCJG, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NOGAFBDLGMN__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOGAFBDLGMN_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 MANLOHEKGMA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOGAFBDLGMN_MANLOHEKGMA_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NOGAFBDLGMN_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NOGAFBDLGMN_LJANCIBECFG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* KONJPLDJNGB()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOGAFBDLGMN_KONJPLDJNGB_OFFSET))(this);
	}
};
