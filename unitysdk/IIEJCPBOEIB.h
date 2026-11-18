#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KLFNJCHBPFE.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define IIEJCPBOEIB_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1BAECC40)
#define IIEJCPBOEIB_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1BAECC30)
#define IIEJCPBOEIB_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1BAECE40)
#define IIEJCPBOEIB_LKIKDBNBCAN_OFFSET UNITYSDK_OFFSET(0x1BAECD30)
#define IIEJCPBOEIB__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAECC20)

inline static constexpr unsigned int IIEJCPBOEIB_TypeDefinitionIndex = 12853;

class IIEJCPBOEIB : public ::System::Object
{
public:
	::System::String* ALKHCPMDAGF; // 0x10
	::KLFNJCHBPFE HBDPAIKANDB; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x31
	::System::Byte CNIAANMNOCF; // 0x32

	::System::Void _ctor(::KLFNJCHBPFE LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KLFNJCHBPFE, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + IIEJCPBOEIB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IIEJCPBOEIB_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIEJCPBOEIB_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* LKIKDBNBCAN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIEJCPBOEIB_LKIKDBNBCAN_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IIEJCPBOEIB_LJANCIBECFG_OFFSET))(this);
	}
};
