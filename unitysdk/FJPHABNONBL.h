#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/LDNEFPBDKII.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define FJPHABNONBL_CAPEBDGEINN_OFFSET UNITYSDK_OFFSET(0x17AB4C90)
#define FJPHABNONBL_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17AB5060)
#define FJPHABNONBL_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17AB4C80)
#define FJPHABNONBL_GJDHPOOKIPP_OFFSET UNITYSDK_OFFSET(0x17AB4B40)
#define FJPHABNONBL_HBLOMCFKGOM_OFFSET UNITYSDK_OFFSET(0x17AB4DF0)
#define FJPHABNONBL_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17AB4DE0)
#define FJPHABNONBL_PEDEGJOEBOE_OFFSET UNITYSDK_OFFSET(0x17AB4F00)
#define FJPHABNONBL__CTOR_OFFSET UNITYSDK_OFFSET(0x17AB4B30)

inline static constexpr unsigned int FJPHABNONBL_TypeDefinitionIndex = 11446;

class FJPHABNONBL : public ::System::Object
{
public:
	::Foundation::AssetPath NMKGPFJAFLC; // 0x10
	::LDNEFPBDKII HBDPAIKANDB; // 0x20
	::System::String* FLFBDKLEOLI; // 0x30
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x38
	::System::UInt64 OEPPEDPFGBB; // 0x40
	::System::Int32 GBEEMFEOEAG; // 0x48
	::System::Byte CNIAANMNOCF; // 0x4C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x4D
	::System::Byte ACIOBDEBDNK; // 0x4E

	::System::Void _ctor(::LDNEFPBDKII LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LDNEFPBDKII, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + FJPHABNONBL__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 GJDHPOOKIPP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJPHABNONBL_GJDHPOOKIPP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FJPHABNONBL_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::UInt64 CAPEBDGEINN()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + FJPHABNONBL_CAPEBDGEINN_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FJPHABNONBL_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* HBLOMCFKGOM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJPHABNONBL_HBLOMCFKGOM_OFFSET))(this);
	}

	::Foundation::AssetPath PEDEGJOEBOE()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + FJPHABNONBL_PEDEGJOEBOE_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJPHABNONBL_COFGIJJOFLP_OFFSET))(this);
	}
};
