#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OCKLOCEHDGJ.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define KGIFFCPFOIM_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B505B60)
#define KGIFFCPFOIM_FELDILHMMIK_OFFSET UNITYSDK_OFFSET(0x1B505A40)
#define KGIFFCPFOIM_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B505B50)
#define KGIFFCPFOIM_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B505920)
#define KGIFFCPFOIM_MNBGAIEPADE_OFFSET UNITYSDK_OFFSET(0x1B505930)
#define KGIFFCPFOIM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B505910)

inline static constexpr unsigned int KGIFFCPFOIM_TypeDefinitionIndex = 9850;

class KGIFFCPFOIM : public ::System::Object
{
public:
	::System::String* JPNOHBLNEMO; // 0x10
	::System::String* NFFPNFDEDBN; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::OCKLOCEHDGJ HBDPAIKANDB; // 0x28
	::System::Byte CNIAANMNOCF; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x39
	::System::Byte ACIOBDEBDNK; // 0x3A

	::System::Void _ctor(::OCKLOCEHDGJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::OCKLOCEHDGJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KGIFFCPFOIM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KGIFFCPFOIM_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* MNBGAIEPADE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGIFFCPFOIM_MNBGAIEPADE_OFFSET))(this);
	}

	::System::String* FELDILHMMIK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGIFFCPFOIM_FELDILHMMIK_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KGIFFCPFOIM_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGIFFCPFOIM_COFGIJJOFLP_OFFSET))(this);
	}
};
