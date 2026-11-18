#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NIHENEGMKJB.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define HNOAKPAOMPC_CDKFDFLAAKE_OFFSET UNITYSDK_OFFSET(0x160FF200)
#define HNOAKPAOMPC_CJCPHBFKFMI_OFFSET UNITYSDK_OFFSET(0x160FF4A0)
#define HNOAKPAOMPC_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x160FF5B0)
#define HNOAKPAOMPC_FBPNEDFFHJN_OFFSET UNITYSDK_OFFSET(0x160FF350)
#define HNOAKPAOMPC_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x160FF340)
#define HNOAKPAOMPC_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x160FF490)
#define HNOAKPAOMPC__CTOR_OFFSET UNITYSDK_OFFSET(0x160FF1F0)

inline static constexpr unsigned int HNOAKPAOMPC_TypeDefinitionIndex = 16386;

class HNOAKPAOMPC : public ::System::Object
{
public:
	::System::String* JBFHBIAOLOM; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::NIHENEGMKJB HBDPAIKANDB; // 0x20
	::System::Int32 IFGIAOKMCBL; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x34
	::System::Byte CNIAANMNOCF; // 0x35
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x36
	::System::Byte _padding0[0x1];
	::System::Int32 ELHALOJIPNH; // 0x38

	::System::Void _ctor(::NIHENEGMKJB LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NIHENEGMKJB, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HNOAKPAOMPC__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 CDKFDFLAAKE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNOAKPAOMPC_CDKFDFLAAKE_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HNOAKPAOMPC_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 FBPNEDFFHJN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNOAKPAOMPC_FBPNEDFFHJN_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNOAKPAOMPC_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* CJCPHBFKFMI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNOAKPAOMPC_CJCPHBFKFMI_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNOAKPAOMPC_COFGIJJOFLP_OFFSET))(this);
	}
};
