#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMNDPIKDKGI.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define IFPJLAFPGOH_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1953F450)
#define IFPJLAFPGOH_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1953F440)
#define IFPJLAFPGOH_IPHFLNDLLCA_OFFSET UNITYSDK_OFFSET(0x1953F540)
#define IFPJLAFPGOH_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1953F430)
#define IFPJLAFPGOH__CTOR_OFFSET UNITYSDK_OFFSET(0x1953F420)

inline static constexpr unsigned int IFPJLAFPGOH_TypeDefinitionIndex = 10716;

class IFPJLAFPGOH : public ::System::Object
{
public:
	::CMNDPIKDKGI HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 MOHEFAHPGBC; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2C
	::System::Byte CNIAANMNOCF; // 0x2D
	::System::Byte ACIOBDEBDNK; // 0x2E

	::System::Void _ctor(::CMNDPIKDKGI LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::CMNDPIKDKGI, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + IFPJLAFPGOH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFPJLAFPGOH_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IFPJLAFPGOH_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFPJLAFPGOH_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 IPHFLNDLLCA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFPJLAFPGOH_IPHFLNDLLCA_OFFSET))(this);
	}
};
