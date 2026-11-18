#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNFIHLIKFBJ.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define ELPPDCEGNOD_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B0FDC50)
#define ELPPDCEGNOD_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B0FE0D0)
#define ELPPDCEGNOD_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B0FE0E0)
#define ELPPDCEGNOD_MDPBPBNMKJA_OFFSET UNITYSDK_OFFSET(0x1B0FDE80)
#define ELPPDCEGNOD_NDCPGHGEPAA_OFFSET UNITYSDK_OFFSET(0x1B0FDD40)
#define ELPPDCEGNOD_NGDJEGFNNON_OFFSET UNITYSDK_OFFSET(0x1B0FDFC0)
#define ELPPDCEGNOD_PMGPCOOLDON_OFFSET UNITYSDK_OFFSET(0x1B0FDB10)
#define ELPPDCEGNOD_PPNEEGGDHAD_OFFSET UNITYSDK_OFFSET(0x1B0FE0F0)
#define ELPPDCEGNOD__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0FDB00)

inline static constexpr unsigned int ELPPDCEGNOD_TypeDefinitionIndex = 17750;

class ELPPDCEGNOD : public ::System::Object
{
public:
	::System::String* AMJKIFEHKKI; // 0x10
	::System::String* NHKCBONPLAM; // 0x18
	::HNFIHLIKFBJ HBDPAIKANDB; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::Byte CNIAANMNOCF; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x39
	::System::Byte ACIOBDEBDNK; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 KJFLLGGJFAA; // 0x3C
	::System::Int32 OENHKBGMOCH; // 0x40
	::System::Int32 LNDOJKEIPFI; // 0x44

	::System::Void _ctor(::HNFIHLIKFBJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HNFIHLIKFBJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + ELPPDCEGNOD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 PMGPCOOLDON()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELPPDCEGNOD_PMGPCOOLDON_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELPPDCEGNOD_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 NDCPGHGEPAA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELPPDCEGNOD_NDCPGHGEPAA_OFFSET))(this);
	}

	::System::Int32 MDPBPBNMKJA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELPPDCEGNOD_MDPBPBNMKJA_OFFSET))(this);
	}

	::System::String* NGDJEGFNNON()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELPPDCEGNOD_NGDJEGFNNON_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ELPPDCEGNOD_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELPPDCEGNOD_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* PPNEEGGDHAD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELPPDCEGNOD_PPNEEGGDHAD_OFFSET))(this);
	}
};
