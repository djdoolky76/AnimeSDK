#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HFJACMMJCJK.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KGMJLKBGLHN_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19559630)
#define KGMJLKBGLHN_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19559730)
#define KGMJLKBGLHN_GCKCJPKGNFP_OFFSET UNITYSDK_OFFSET(0x195593B0)
#define KGMJLKBGLHN_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19559720)
#define KGMJLKBGLHN_OEGFNPICNIN_OFFSET UNITYSDK_OFFSET(0x19559740)
#define KGMJLKBGLHN_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x195594F0)
#define KGMJLKBGLHN__CTOR_OFFSET UNITYSDK_OFFSET(0x195593A0)

inline static constexpr unsigned int KGMJLKBGLHN_TypeDefinitionIndex = 10579;

class KGMJLKBGLHN : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* PCMAHCBGFJB; // 0x10
	::HFJACMMJCJK HBDPAIKANDB; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x30
	::System::Byte CNIAANMNOCF; // 0x31
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x34
	::System::Int32 ANCLGADKPCB; // 0x38
	::System::Int32 PMLIMFIBIFO; // 0x3C

	::System::Void _ctor(::HFJACMMJCJK LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HFJACMMJCJK, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KGMJLKBGLHN__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 GCKCJPKGNFP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGMJLKBGLHN_GCKCJPKGNFP_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGMJLKBGLHN_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGMJLKBGLHN_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KGMJLKBGLHN_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KGMJLKBGLHN_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::System::Int32>* OEGFNPICNIN()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGMJLKBGLHN_OEGFNPICNIN_OFFSET))(this);
	}
};
