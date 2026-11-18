#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DGGPLOHAOLI.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define LFFKPMOGJIA_CLGHEHABOBD_OFFSET UNITYSDK_OFFSET(0x1B2FDD70)
#define LFFKPMOGJIA_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B2FDE80)
#define LFFKPMOGJIA_EPNAMNKAHNM_OFFSET UNITYSDK_OFFSET(0x1B2FE210)
#define LFFKPMOGJIA_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B2FE0C0)
#define LFFKPMOGJIA_GOJHJGMHKMF_OFFSET UNITYSDK_OFFSET(0x1B2FE350)
#define LFFKPMOGJIA_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x1B2FE0D0)
#define LFFKPMOGJIA_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B2FE0B0)
#define LFFKPMOGJIA_NJMFFLNKMCF_OFFSET UNITYSDK_OFFSET(0x1B2FDF70)
#define LFFKPMOGJIA_ONLKBDOBBPK_OFFSET UNITYSDK_OFFSET(0x1B2FE460)
#define LFFKPMOGJIA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2FDD60)

inline static constexpr unsigned int LFFKPMOGJIA_TypeDefinitionIndex = 13824;

class LFFKPMOGJIA : public ::System::Object
{
public:
	::System::String* MDPKLBGDJNL; // 0x10
	::System::String* OGJKJDHJFGF; // 0x18
	::System::String* JLEMDJPGBDL; // 0x20
	::DGGPLOHAOLI HBDPAIKANDB; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x38
	::System::Int32 POKJNGILNLB; // 0x40
	::System::Int32 PBHCJDMIFJG; // 0x44
	::System::Byte ACIOBDEBDNK; // 0x48
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x49
	::System::Byte CNIAANMNOCF; // 0x4A
	::System::Byte _padding0[0x1];
	::System::Int32 HJPALAMONNP; // 0x4C

	::System::Void _ctor(::DGGPLOHAOLI LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DGGPLOHAOLI, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LFFKPMOGJIA__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* CLGHEHABOBD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFFKPMOGJIA_CLGHEHABOBD_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFFKPMOGJIA_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 NJMFFLNKMCF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFFKPMOGJIA_NJMFFLNKMCF_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LFFKPMOGJIA_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LFFKPMOGJIA_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFFKPMOGJIA_HKELPCLHLEC_OFFSET))(this);
	}

	::System::Int32 EPNAMNKAHNM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFFKPMOGJIA_EPNAMNKAHNM_OFFSET))(this);
	}

	::System::String* GOJHJGMHKMF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFFKPMOGJIA_GOJHJGMHKMF_OFFSET))(this);
	}

	::System::String* ONLKBDOBBPK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFFKPMOGJIA_ONLKBDOBBPK_OFFSET))(this);
	}
};
