#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMMFLMHNJPF.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LOAIAENNOHH_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1C07CF40)
#define LOAIAENNOHH_FBHFDGPJAKD_OFFSET UNITYSDK_OFFSET(0x1C07D6B0)
#define LOAIAENNOHH_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1C07D6A0)
#define LOAIAENNOHH_IOBKOMIMHBL_OFFSET UNITYSDK_OFFSET(0x1C07D2C0)
#define LOAIAENNOHH_JKOFNFNOIFO_OFFSET UNITYSDK_OFFSET(0x1C07D3D0)
#define LOAIAENNOHH_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1C07D2B0)
#define LOAIAENNOHH_MEAKGMCFGAL_OFFSET UNITYSDK_OFFSET(0x1C07CE30)
#define LOAIAENNOHH_PIHGHHFEHED_OFFSET UNITYSDK_OFFSET(0x1C07D170)
#define LOAIAENNOHH_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1C07D030)
#define LOAIAENNOHH__CTOR_OFFSET UNITYSDK_OFFSET(0x1C07CE20)

inline static constexpr unsigned int LOAIAENNOHH_TypeDefinitionIndex = 15828;

class LOAIAENNOHH : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::GMMFLMHNJPF HBDPAIKANDB; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* IPENIHJFBDA; // 0x28
	::System::String* IBFJOGCCNBE; // 0x30
	::System::String* FPDCABEOFOC; // 0x38
	::System::Int32 PHJOFELPHBE; // 0x40
	::System::Int32 PCMOJLNOPPM; // 0x44
	::System::Byte CNIAANMNOCF; // 0x48
	::System::Byte ACIOBDEBDNK; // 0x49
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x4A
	::System::Byte _padding0[0x1];
	::System::Int32 NJEDAMEABLJ; // 0x4C

	::System::Void _ctor(::GMMFLMHNJPF LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::GMMFLMHNJPF, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LOAIAENNOHH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* MEAKGMCFGAL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOAIAENNOHH_MEAKGMCFGAL_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOAIAENNOHH_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOAIAENNOHH_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Int32 PIHGHHFEHED()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOAIAENNOHH_PIHGHHFEHED_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LOAIAENNOHH_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* IOBKOMIMHBL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOAIAENNOHH_IOBKOMIMHBL_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* JKOFNFNOIFO()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOAIAENNOHH_JKOFNFNOIFO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LOAIAENNOHH_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 FBHFDGPJAKD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOAIAENNOHH_FBHFDGPJAKD_OFFSET))(this);
	}
};
