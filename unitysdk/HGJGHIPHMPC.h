#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HAEMLNHOBEG.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define HGJGHIPHMPC_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B610750)
#define HGJGHIPHMPC_EPDEAFAAIOK_OFFSET UNITYSDK_OFFSET(0x1B6103B0)
#define HGJGHIPHMPC_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B610630)
#define HGJGHIPHMPC_LEKDFNIFOFO_OFFSET UNITYSDK_OFFSET(0x1B610640)
#define HGJGHIPHMPC_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B6103A0)
#define HGJGHIPHMPC_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1B6104F0)
#define HGJGHIPHMPC__CTOR_OFFSET UNITYSDK_OFFSET(0x1B610390)

inline static constexpr unsigned int HGJGHIPHMPC_TypeDefinitionIndex = 14625;

class HGJGHIPHMPC : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* AEJBCNIGHAE; // 0x18
	::HAEMLNHOBEG HBDPAIKANDB; // 0x20
	::System::Int32 PCMOJLNOPPM; // 0x30
	::System::Int32 LMDOJAFPAEO; // 0x34
	::System::Byte ACIOBDEBDNK; // 0x38
	::System::Byte CNIAANMNOCF; // 0x39
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3A

	::System::Void _ctor(::HAEMLNHOBEG LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HAEMLNHOBEG, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HGJGHIPHMPC__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJGHIPHMPC_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 EPDEAFAAIOK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJGHIPHMPC_EPDEAFAAIOK_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJGHIPHMPC_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HGJGHIPHMPC_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* LEKDFNIFOFO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJGHIPHMPC_LEKDFNIFOFO_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJGHIPHMPC_COFGIJJOFLP_OFFSET))(this);
	}
};
