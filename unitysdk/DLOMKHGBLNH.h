#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DEGFLLEFDHD.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define DLOMKHGBLNH_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1ADCA390)
#define DLOMKHGBLNH_FJMAKIEACFO_OFFSET UNITYSDK_OFFSET(0x1ADCA5C0)
#define DLOMKHGBLNH_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1ADCA6D0)
#define DLOMKHGBLNH_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1ADCA6E0)
#define DLOMKHGBLNH_OENEGODNAAE_OFFSET UNITYSDK_OFFSET(0x1ADCA480)
#define DLOMKHGBLNH__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADCA380)

inline static constexpr unsigned int DLOMKHGBLNH_TypeDefinitionIndex = 16010;

class DLOMKHGBLNH : public ::System::Object
{
public:
	::System::String* ODPDGNAGADA; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::DEGFLLEFDHD HBDPAIKANDB; // 0x20
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x30
	::System::Byte CNIAANMNOCF; // 0x31
	::System::Byte ACIOBDEBDNK; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 FAEINHBPHLF; // 0x34

	::System::Void _ctor(::DEGFLLEFDHD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DEGFLLEFDHD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DLOMKHGBLNH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLOMKHGBLNH_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 OENEGODNAAE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLOMKHGBLNH_OENEGODNAAE_OFFSET))(this);
	}

	::System::String* FJMAKIEACFO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLOMKHGBLNH_FJMAKIEACFO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DLOMKHGBLNH_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DLOMKHGBLNH_LJANCIBECFG_OFFSET))(this);
	}
};
