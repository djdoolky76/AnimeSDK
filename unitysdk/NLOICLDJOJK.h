#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BJCDCMPJONG.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define NLOICLDJOJK_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1CFEEB40)
#define NLOICLDJOJK_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1CFEEB30)
#define NLOICLDJOJK_IBJGAOKNECO_OFFSET UNITYSDK_OFFSET(0x1CFEE630)
#define NLOICLDJOJK_KJCDFFONMKC_OFFSET UNITYSDK_OFFSET(0x1CFEE8B0)
#define NLOICLDJOJK_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1CFEE4E0)
#define NLOICLDJOJK_MHJCDHFIJLI_OFFSET UNITYSDK_OFFSET(0x1CFEE770)
#define NLOICLDJOJK_OBAIODHNDJJ_OFFSET UNITYSDK_OFFSET(0x1CFEE9F0)
#define NLOICLDJOJK_OCCMIDACLBK_OFFSET UNITYSDK_OFFSET(0x1CFEE4F0)
#define NLOICLDJOJK__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFEE4D0)

inline static constexpr unsigned int NLOICLDJOJK_TypeDefinitionIndex = 13101;

class NLOICLDJOJK : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::BJCDCMPJONG HBDPAIKANDB; // 0x18
	::System::Int32 FOGILGINLPA; // 0x28
	::System::Int32 LNAOMKMBLLL; // 0x2C
	::System::Int32 LHKONGFANIB; // 0x30
	::System::Int32 EOFNHBNLGFC; // 0x34
	::System::Byte ACIOBDEBDNK; // 0x38
	::System::Byte CNIAANMNOCF; // 0x39
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 DAJJMMKFGBB; // 0x3C

	::System::Void _ctor(::BJCDCMPJONG LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::BJCDCMPJONG, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NLOICLDJOJK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NLOICLDJOJK_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 OCCMIDACLBK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLOICLDJOJK_OCCMIDACLBK_OFFSET))(this);
	}

	::System::Int32 IBJGAOKNECO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLOICLDJOJK_IBJGAOKNECO_OFFSET))(this);
	}

	::System::Int32 MHJCDHFIJLI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLOICLDJOJK_MHJCDHFIJLI_OFFSET))(this);
	}

	::System::Int32 KJCDFFONMKC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLOICLDJOJK_KJCDFFONMKC_OFFSET))(this);
	}

	::System::Int32 OBAIODHNDJJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLOICLDJOJK_OBAIODHNDJJ_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NLOICLDJOJK_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLOICLDJOJK_COFGIJJOFLP_OFFSET))(this);
	}
};
