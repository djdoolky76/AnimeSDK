#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOINLCMJJMN.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define HEPKDGOGGAO_AFIKPGHMNCI_OFFSET UNITYSDK_OFFSET(0x1A4EB0D0)
#define HEPKDGOGGAO_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A4EB7E0)
#define HEPKDGOGGAO_DKOCPDPOIEA_OFFSET UNITYSDK_OFFSET(0x1A4EB590)
#define HEPKDGOGGAO_FLDDGALGJIP_OFFSET UNITYSDK_OFFSET(0x1A4EB6D0)
#define HEPKDGOGGAO_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A4EB570)
#define HEPKDGOGGAO_JJOLGCNENHA_OFFSET UNITYSDK_OFFSET(0x1A4EB210)
#define HEPKDGOGGAO_LAOFMJKLLKF_OFFSET UNITYSDK_OFFSET(0x1A4EB320)
#define HEPKDGOGGAO_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A4EB580)
#define HEPKDGOGGAO_NLCOAMBLCIA_OFFSET UNITYSDK_OFFSET(0x1A4EAFC0)
#define HEPKDGOGGAO_PIPBPLEIPFK_OFFSET UNITYSDK_OFFSET(0x1A4EB430)
#define HEPKDGOGGAO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4EAFB0)

inline static constexpr unsigned int HEPKDGOGGAO_TypeDefinitionIndex = 14616;

class HEPKDGOGGAO : public ::System::Object
{
public:
	::System::String* EGFNAEMAMHM; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::System::String* GLLHOPGHDPP; // 0x20
	::IOINLCMJJMN HBDPAIKANDB; // 0x28
	::System::String* KELDGCPENGC; // 0x38
	::System::String* BDNCODIJADG; // 0x40
	::System::Int32 FBMLCHDEDLB; // 0x48
	::System::Int32 JKEAJLNIHNP; // 0x4C
	::System::Byte ACIOBDEBDNK; // 0x50
	::System::Byte CNIAANMNOCF; // 0x51
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x52
	::System::Byte _padding0[0x1];
	::System::Int32 OIKCPMJLMGI; // 0x54

	::System::Void _ctor(::IOINLCMJJMN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::IOINLCMJJMN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HEPKDGOGGAO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* NLCOAMBLCIA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEPKDGOGGAO_NLCOAMBLCIA_OFFSET))(this);
	}

	::System::Int32 AFIKPGHMNCI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEPKDGOGGAO_AFIKPGHMNCI_OFFSET))(this);
	}

	::System::String* JJOLGCNENHA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEPKDGOGGAO_JJOLGCNENHA_OFFSET))(this);
	}

	::System::String* LAOFMJKLLKF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEPKDGOGGAO_LAOFMJKLLKF_OFFSET))(this);
	}

	::System::Int32 PIPBPLEIPFK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEPKDGOGGAO_PIPBPLEIPFK_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HEPKDGOGGAO_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEPKDGOGGAO_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 DKOCPDPOIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEPKDGOGGAO_DKOCPDPOIEA_OFFSET))(this);
	}

	::System::String* FLDDGALGJIP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEPKDGOGGAO_FLDDGALGJIP_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEPKDGOGGAO_COFGIJJOFLP_OFFSET))(this);
	}
};
