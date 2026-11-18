#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KBAMEMJALCF.h"
#include "unitysdk/PGDOGKAPDDF.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define GFFEBKHDNAG_BJLOCCLAGIC_OFFSET UNITYSDK_OFFSET(0x1B1120B0)
#define GFFEBKHDNAG_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B112340)
#define GFFEBKHDNAG_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B1120A0)
#define GFFEBKHDNAG_GPBFENDAJMF_OFFSET UNITYSDK_OFFSET(0x1B112430)
#define GFFEBKHDNAG_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B112330)
#define GFFEBKHDNAG_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1B1121F0)
#define GFFEBKHDNAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B112090)

inline static constexpr unsigned int GFFEBKHDNAG_TypeDefinitionIndex = 11214;

class GFFEBKHDNAG : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* GPNJCCHKLIP; // 0x18
	::PGDOGKAPDDF HBDPAIKANDB; // 0x20
	::System::Int32 PCMOJLNOPPM; // 0x30
	::System::Byte CNIAANMNOCF; // 0x34
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x35
	::System::Byte ACIOBDEBDNK; // 0x36
	::System::Byte _padding0[0x1];
	::KBAMEMJALCF NDKHKLLLBDG; // 0x38

	::System::Void _ctor(::PGDOGKAPDDF LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::PGDOGKAPDDF, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + GFFEBKHDNAG__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GFFEBKHDNAG_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::KBAMEMJALCF BJLOCCLAGIC()
	{
		return ((::KBAMEMJALCF(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFEBKHDNAG_BJLOCCLAGIC_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFEBKHDNAG_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFEBKHDNAG_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFEBKHDNAG_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* GPBFENDAJMF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFEBKHDNAG_GPBFENDAJMF_OFFSET))(this);
	}
};
