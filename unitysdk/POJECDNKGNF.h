#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EHICJMPCFHH.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define POJECDNKGNF_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1EE0B740)
#define POJECDNKGNF_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1EE0B970)
#define POJECDNKGNF_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1EE0B980)
#define POJECDNKGNF_NLBKOGOCAME_OFFSET UNITYSDK_OFFSET(0x1EE0B990)
#define POJECDNKGNF_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1EE0B830)
#define POJECDNKGNF__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE0B730)

inline static constexpr unsigned int POJECDNKGNF_TypeDefinitionIndex = 9418;

class POJECDNKGNF : public ::System::Object
{
public:
	::EHICJMPCFHH HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 PCMOJLNOPPM; // 0x28
	::System::Int32 BIMLLDLLIKH; // 0x2C
	::System::Byte ACIOBDEBDNK; // 0x30
	::System::Byte CNIAANMNOCF; // 0x31
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x32

	::System::Void _ctor(::EHICJMPCFHH LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::EHICJMPCFHH, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + POJECDNKGNF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POJECDNKGNF_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POJECDNKGNF_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + POJECDNKGNF_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + POJECDNKGNF_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 NLBKOGOCAME()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POJECDNKGNF_NLBKOGOCAME_OFFSET))(this);
	}
};
