#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBOEBEFKAKN.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define BIPKFBANOCP_ABHIMDBNKGP_OFFSET UNITYSDK_OFFSET(0x19AC7560)
#define BIPKFBANOCP_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19AC7340)
#define BIPKFBANOCP_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19AC7440)
#define BIPKFBANOCP_KFCNHKPLGDG_OFFSET UNITYSDK_OFFSET(0x19AC7450)
#define BIPKFBANOCP_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19AC7430)
#define BIPKFBANOCP__CTOR_OFFSET UNITYSDK_OFFSET(0x19AC7330)

inline static constexpr unsigned int BIPKFBANOCP_TypeDefinitionIndex = 16517;

class BIPKFBANOCP : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::DBOEBEFKAKN HBDPAIKANDB; // 0x18
	::System::String* BBEPMEHOMMO; // 0x28
	::System::Byte CNIAANMNOCF; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x31
	::System::Byte ACIOBDEBDNK; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 NBONABCODEE; // 0x34

	::System::Void _ctor(::DBOEBEFKAKN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DBOEBEFKAKN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BIPKFBANOCP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIPKFBANOCP_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BIPKFBANOCP_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BIPKFBANOCP_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* KFCNHKPLGDG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIPKFBANOCP_KFCNHKPLGDG_OFFSET))(this);
	}

	::System::Int32 ABHIMDBNKGP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIPKFBANOCP_ABHIMDBNKGP_OFFSET))(this);
	}
};
