#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JEJGCFBBJDI.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define DHMBLNFEGHH_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x16619860)
#define DHMBLNFEGHH_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x16619A70)
#define DHMBLNFEGHH_KAABCLGOGDF_OFFSET UNITYSDK_OFFSET(0x16619A80)
#define DHMBLNFEGHH_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x16619A60)
#define DHMBLNFEGHH_OBGJBIOENLN_OFFSET UNITYSDK_OFFSET(0x16619950)
#define DHMBLNFEGHH__CTOR_OFFSET UNITYSDK_OFFSET(0x16619850)

inline static constexpr unsigned int DHMBLNFEGHH_TypeDefinitionIndex = 15952;

class DHMBLNFEGHH : public ::System::Object
{
public:
	::System::String* PGLGBONAAPD; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::System::String* GIFGDAADGHK; // 0x20
	::JEJGCFBBJDI HBDPAIKANDB; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x39
	::System::Byte CNIAANMNOCF; // 0x3A

	::System::Void _ctor(::JEJGCFBBJDI LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JEJGCFBBJDI, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DHMBLNFEGHH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHMBLNFEGHH_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* OBGJBIOENLN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHMBLNFEGHH_OBGJBIOENLN_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DHMBLNFEGHH_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DHMBLNFEGHH_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* KAABCLGOGDF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHMBLNFEGHH_KAABCLGOGDF_OFFSET))(this);
	}
};
