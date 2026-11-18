#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KJHKJEFHJPK.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define DAGKHDAABMD_CDBFECJDJAE_OFFSET UNITYSDK_OFFSET(0x1A58BBC0)
#define DAGKHDAABMD_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A58B9A0)
#define DAGKHDAABMD_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A58BBA0)
#define DAGKHDAABMD_IBJOKOCBFKK_OFFSET UNITYSDK_OFFSET(0x1A58BA90)
#define DAGKHDAABMD_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A58BBB0)
#define DAGKHDAABMD_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1A58BD00)
#define DAGKHDAABMD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A58B990)

inline static constexpr unsigned int DAGKHDAABMD_TypeDefinitionIndex = 11026;

class DAGKHDAABMD : public ::System::Object
{
public:
	::System::String* IEJGANNIMHM; // 0x10
	::KJHKJEFHJPK HBDPAIKANDB; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Int32 OJGKEKECNJE; // 0x30
	::System::Byte CNIAANMNOCF; // 0x34
	::System::Byte ACIOBDEBDNK; // 0x35
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x36
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x38

	::System::Void _ctor(::KJHKJEFHJPK LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KJHKJEFHJPK, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DAGKHDAABMD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAGKHDAABMD_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* IBJOKOCBFKK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAGKHDAABMD_IBJOKOCBFKK_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DAGKHDAABMD_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DAGKHDAABMD_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 CDBFECJDJAE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAGKHDAABMD_CDBFECJDJAE_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAGKHDAABMD_PPIFNHNGCGO_OFFSET))(this);
	}
};
