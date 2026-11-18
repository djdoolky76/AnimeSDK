#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/IGMCABDJHLM.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define LMIENMCKJLA_CAPEBDGEINN_OFFSET UNITYSDK_OFFSET(0x18DFF870)
#define LMIENMCKJLA_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x18DFF610)
#define LMIENMCKJLA_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x18DFF9C0)
#define LMIENMCKJLA_HBLOMCFKGOM_OFFSET UNITYSDK_OFFSET(0x18DFF500)
#define LMIENMCKJLA_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x18DFF700)
#define LMIENMCKJLA_NMINJMBMHJK_OFFSET UNITYSDK_OFFSET(0x18DFF3C0)
#define LMIENMCKJLA_PEDEGJOEBOE_OFFSET UNITYSDK_OFFSET(0x18DFF710)
#define LMIENMCKJLA__CTOR_OFFSET UNITYSDK_OFFSET(0x18DFF3B0)

inline static constexpr unsigned int LMIENMCKJLA_TypeDefinitionIndex = 11536;

class LMIENMCKJLA : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::IGMCABDJHLM HBDPAIKANDB; // 0x18
	::System::String* FLFBDKLEOLI; // 0x28
	::Foundation::AssetPath NMKGPFJAFLC; // 0x30
	::System::UInt64 OEPPEDPFGBB; // 0x40
	::System::Int32 FLGCPNIDHJG; // 0x48
	::System::Byte CNIAANMNOCF; // 0x4C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x4D
	::System::Byte ACIOBDEBDNK; // 0x4E

	::System::Void _ctor(::IGMCABDJHLM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::IGMCABDJHLM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LMIENMCKJLA__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 NMINJMBMHJK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMIENMCKJLA_NMINJMBMHJK_OFFSET))(this);
	}

	::System::String* HBLOMCFKGOM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMIENMCKJLA_HBLOMCFKGOM_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMIENMCKJLA_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LMIENMCKJLA_LJANCIBECFG_OFFSET))(this);
	}

	::Foundation::AssetPath PEDEGJOEBOE()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + LMIENMCKJLA_PEDEGJOEBOE_OFFSET))(this);
	}

	::System::UInt64 CAPEBDGEINN()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + LMIENMCKJLA_CAPEBDGEINN_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LMIENMCKJLA_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
