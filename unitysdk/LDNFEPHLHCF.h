#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJGBHMONIJC.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define LDNFEPHLHCF_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x18BE2430)
#define LDNFEPHLHCF_DAGFMAMDMMG_OFFSET UNITYSDK_OFFSET(0x18BE2A60)
#define LDNFEPHLHCF_EGHJCJFPBJG_OFFSET UNITYSDK_OFFSET(0x18BE2670)
#define LDNFEPHLHCF_FCGOANNACPB_OFFSET UNITYSDK_OFFSET(0x18BE28F0)
#define LDNFEPHLHCF_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x18BE2660)
#define LDNFEPHLHCF_IGOMFALFBED_OFFSET UNITYSDK_OFFSET(0x18BE27B0)
#define LDNFEPHLHCF_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x18BE2A50)
#define LDNFEPHLHCF_MLKEENHGKJG_OFFSET UNITYSDK_OFFSET(0x18BE2520)
#define LDNFEPHLHCF_NMHIONBLKAP_OFFSET UNITYSDK_OFFSET(0x18BE22D0)
#define LDNFEPHLHCF__CTOR_OFFSET UNITYSDK_OFFSET(0x18BE22C0)

inline static constexpr unsigned int LDNFEPHLHCF_TypeDefinitionIndex = 16445;

class LDNFEPHLHCF : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::FJGBHMONIJC HBDPAIKANDB; // 0x18
	::System::Byte ACIOBDEBDNK; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x29
	::System::Byte CNIAANMNOCF; // 0x2A
	::System::Boolean ADDJEDODJME; // 0x2B
	::System::Int32 DLMADAJCHCG; // 0x2C
	::System::Int32 EBFAGDMAOBJ; // 0x30
	::System::Boolean FHMEJHDEBJO; // 0x34
	::System::Byte GCHCDJCFCEG; // 0x35
	::System::Byte _padding0[0x2];
	::System::Int32 IDHNIHNJNBG; // 0x38
	::System::Int32 KMANHDIOKGG; // 0x3C

	::System::Void _ctor(::FJGBHMONIJC LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FJGBHMONIJC, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LDNFEPHLHCF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean NMHIONBLKAP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNFEPHLHCF_NMHIONBLKAP_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNFEPHLHCF_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 MLKEENHGKJG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNFEPHLHCF_MLKEENHGKJG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LDNFEPHLHCF_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 EGHJCJFPBJG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNFEPHLHCF_EGHJCJFPBJG_OFFSET))(this);
	}

	::System::Int32 IGOMFALFBED()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNFEPHLHCF_IGOMFALFBED_OFFSET))(this);
	}

	::System::Boolean FCGOANNACPB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNFEPHLHCF_FCGOANNACPB_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNFEPHLHCF_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 DAGFMAMDMMG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNFEPHLHCF_DAGFMAMDMMG_OFFSET))(this);
	}
};
