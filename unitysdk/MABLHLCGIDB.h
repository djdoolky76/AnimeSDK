#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IPAAAGBJIEC.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define MABLHLCGIDB_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x191034B0)
#define MABLHLCGIDB_FEMCJBMAPNE_OFFSET UNITYSDK_OFFSET(0x191036F0)
#define MABLHLCGIDB_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x191035A0)
#define MABLHLCGIDB_GPHGKIFFACM_OFFSET UNITYSDK_OFFSET(0x19103370)
#define MABLHLCGIDB_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x191035B0)
#define MABLHLCGIDB_IFDIOIOCGDP_OFFSET UNITYSDK_OFFSET(0x19103000)
#define MABLHLCGIDB_KGHFAJMMFNI_OFFSET UNITYSDK_OFFSET(0x19102EC0)
#define MABLHLCGIDB_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19103220)
#define MABLHLCGIDB_MNBGAIEPADE_OFFSET UNITYSDK_OFFSET(0x19103110)
#define MABLHLCGIDB_OBFEHCALNPG_OFFSET UNITYSDK_OFFSET(0x19103230)
#define MABLHLCGIDB__CTOR_OFFSET UNITYSDK_OFFSET(0x19102EB0)

inline static constexpr unsigned int MABLHLCGIDB_TypeDefinitionIndex = 15161;

class MABLHLCGIDB : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* EOALHEEBMKM; // 0x18
	::IPAAAGBJIEC HBDPAIKANDB; // 0x20
	::System::String* NFFPNFDEDBN; // 0x30
	::System::Int32 HKLGKNNDDCH; // 0x38
	::System::Int32 POKJNGILNLB; // 0x3C
	::System::Int32 EMEJJKOJIJC; // 0x40
	::System::Int32 ENMAJCMIEMK; // 0x44
	::System::Byte CNIAANMNOCF; // 0x48
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x49
	::System::Byte ACIOBDEBDNK; // 0x4A
	::System::Byte _padding0[0x1];
	::System::Int32 KPKBHHBJFMG; // 0x4C
	::System::Int32 DCABJOKHCIE; // 0x50

	::System::Void _ctor(::IPAAAGBJIEC LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::IPAAAGBJIEC, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MABLHLCGIDB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 KGHFAJMMFNI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MABLHLCGIDB_KGHFAJMMFNI_OFFSET))(this);
	}

	::System::String* IFDIOIOCGDP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MABLHLCGIDB_IFDIOIOCGDP_OFFSET))(this);
	}

	::System::String* MNBGAIEPADE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MABLHLCGIDB_MNBGAIEPADE_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MABLHLCGIDB_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 OBFEHCALNPG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MABLHLCGIDB_OBFEHCALNPG_OFFSET))(this);
	}

	::System::Int32 GPHGKIFFACM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MABLHLCGIDB_GPHGKIFFACM_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MABLHLCGIDB_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MABLHLCGIDB_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MABLHLCGIDB_HKELPCLHLEC_OFFSET))(this);
	}

	::System::Int32 FEMCJBMAPNE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MABLHLCGIDB_FEMCJBMAPNE_OFFSET))(this);
	}
};
