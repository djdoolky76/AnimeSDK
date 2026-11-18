#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IDMMDBKBADL.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define BPLABFPIEPG_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17F03750)
#define BPLABFPIEPG_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17F03840)
#define BPLABFPIEPG_HEHOMJFIKMN_OFFSET UNITYSDK_OFFSET(0x17F03990)
#define BPLABFPIEPG_INMNJMPKKLN_OFFSET UNITYSDK_OFFSET(0x17F03850)
#define BPLABFPIEPG_IPNCAEINIKJ_OFFSET UNITYSDK_OFFSET(0x17F03610)
#define BPLABFPIEPG_KBIIPJALCNE_OFFSET UNITYSDK_OFFSET(0x17F03AD0)
#define BPLABFPIEPG_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17F03600)
#define BPLABFPIEPG_LNPPEFMAJFD_OFFSET UNITYSDK_OFFSET(0x17F03C10)
#define BPLABFPIEPG__CTOR_OFFSET UNITYSDK_OFFSET(0x17F035F0)

inline static constexpr unsigned int BPLABFPIEPG_TypeDefinitionIndex = 12015;

class BPLABFPIEPG : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::IDMMDBKBADL HBDPAIKANDB; // 0x18
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x28
	::System::Byte CNIAANMNOCF; // 0x29
	::System::Byte ACIOBDEBDNK; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 DHOAGFCBKMI; // 0x2C
	::System::Int32 HHLOPBIBGLK; // 0x30
	::System::Int32 OGAGKPKBBCG; // 0x34
	::System::Int32 EDDGGMCLGPN; // 0x38
	::System::Int32 DNHFPAFPMII; // 0x3C

	::System::Void _ctor(::IDMMDBKBADL LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::IDMMDBKBADL, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BPLABFPIEPG__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BPLABFPIEPG_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 IPNCAEINIKJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPLABFPIEPG_IPNCAEINIKJ_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPLABFPIEPG_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BPLABFPIEPG_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 INMNJMPKKLN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPLABFPIEPG_INMNJMPKKLN_OFFSET))(this);
	}

	::System::Int32 HEHOMJFIKMN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPLABFPIEPG_HEHOMJFIKMN_OFFSET))(this);
	}

	::System::Int32 KBIIPJALCNE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPLABFPIEPG_KBIIPJALCNE_OFFSET))(this);
	}

	::System::Int32 LNPPEFMAJFD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPLABFPIEPG_LNPPEFMAJFD_OFFSET))(this);
	}
};
