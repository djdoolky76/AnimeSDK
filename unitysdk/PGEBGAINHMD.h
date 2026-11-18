#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/OFBKCFKADJD.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define PGEBGAINHMD_CAPEBDGEINN_OFFSET UNITYSDK_OFFSET(0x1737B060)
#define PGEBGAINHMD_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1737AF60)
#define PGEBGAINHMD_DOKBMLILGGC_OFFSET UNITYSDK_OFFSET(0x1737AD10)
#define PGEBGAINHMD_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1737AD00)
#define PGEBGAINHMD_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1737B050)
#define PGEBGAINHMD_MNEELPECLKH_OFFSET UNITYSDK_OFFSET(0x1737AE50)
#define PGEBGAINHMD_PEDEGJOEBOE_OFFSET UNITYSDK_OFFSET(0x1737B1B0)
#define PGEBGAINHMD__CTOR_OFFSET UNITYSDK_OFFSET(0x1737ACF0)

inline static constexpr unsigned int PGEBGAINHMD_TypeDefinitionIndex = 16575;

class PGEBGAINHMD : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::Foundation::AssetPath NMKGPFJAFLC; // 0x18
	::System::String* IABAJIALEGL; // 0x28
	::OFBKCFKADJD HBDPAIKANDB; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x40
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x41
	::System::Byte CNIAANMNOCF; // 0x42
	::System::Byte _padding0[0x1];
	::System::Int32 JBMOBJNFHKN; // 0x44
	::System::UInt64 OEPPEDPFGBB; // 0x48

	::System::Void _ctor(::OFBKCFKADJD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::OFBKCFKADJD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + PGEBGAINHMD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PGEBGAINHMD_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 DOKBMLILGGC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGEBGAINHMD_DOKBMLILGGC_OFFSET))(this);
	}

	::System::String* MNEELPECLKH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGEBGAINHMD_MNEELPECLKH_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGEBGAINHMD_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PGEBGAINHMD_LJANCIBECFG_OFFSET))(this);
	}

	::System::UInt64 CAPEBDGEINN()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + PGEBGAINHMD_CAPEBDGEINN_OFFSET))(this);
	}

	::Foundation::AssetPath PEDEGJOEBOE()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + PGEBGAINHMD_PEDEGJOEBOE_OFFSET))(this);
	}
};
