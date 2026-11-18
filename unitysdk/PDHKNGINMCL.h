#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIJIBHCFPKA.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define PDHKNGINMCL_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1EC843F0)
#define PDHKNGINMCL_EENLNNFKBOP_OFFSET UNITYSDK_OFFSET(0x1EC842E0)
#define PDHKNGINMCL_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1EC844E0)
#define PDHKNGINMCL_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1EC842D0)
#define PDHKNGINMCL__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC842C0)

inline static constexpr unsigned int PDHKNGINMCL_TypeDefinitionIndex = 12211;

class PDHKNGINMCL : public ::System::Object
{
public:
	::BIJIBHCFPKA HBDPAIKANDB; // 0x10
	::System::String* KNEDJPPOKOP; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x31
	::System::Byte CNIAANMNOCF; // 0x32

	::System::Void _ctor(::BIJIBHCFPKA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::BIJIBHCFPKA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + PDHKNGINMCL__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PDHKNGINMCL_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* EENLNNFKBOP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDHKNGINMCL_EENLNNFKBOP_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDHKNGINMCL_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PDHKNGINMCL_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
