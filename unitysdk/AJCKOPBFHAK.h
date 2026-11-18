#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KHGNGKBEHCK.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define AJCKOPBFHAK_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17EE77C0)
#define AJCKOPBFHAK_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17EE7690)
#define AJCKOPBFHAK_IFOHJNHGHBK_OFFSET UNITYSDK_OFFSET(0x17EE76A0)
#define AJCKOPBFHAK_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17EE77B0)
#define AJCKOPBFHAK__CTOR_OFFSET UNITYSDK_OFFSET(0x17EE7680)

inline static constexpr unsigned int AJCKOPBFHAK_TypeDefinitionIndex = 17446;

class AJCKOPBFHAK : public ::System::Object
{
public:
	::KHGNGKBEHCK HBDPAIKANDB; // 0x10
	::System::String* HKKJIFGKKEH; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x31
	::System::Byte CNIAANMNOCF; // 0x32

	::System::Void _ctor(::KHGNGKBEHCK LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KHGNGKBEHCK, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + AJCKOPBFHAK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AJCKOPBFHAK_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* IFOHJNHGHBK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJCKOPBFHAK_IFOHJNHGHBK_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AJCKOPBFHAK_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJCKOPBFHAK_COFGIJJOFLP_OFFSET))(this);
	}
};
