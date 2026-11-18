#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JPGNPOPEGJP.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define ODIBCDLEPMB_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19DCD280)
#define ODIBCDLEPMB_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19DCD380)
#define ODIBCDLEPMB_KLAHIAMDBKI_OFFSET UNITYSDK_OFFSET(0x19DCD6F0)
#define ODIBCDLEPMB_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19DCD370)
#define ODIBCDLEPMB_MBPBPHCENCG_OFFSET UNITYSDK_OFFSET(0x19DCD390)
#define ODIBCDLEPMB_MMKOKCKOKCC_OFFSET UNITYSDK_OFFSET(0x19DCD4A0)
#define ODIBCDLEPMB_ODKNDDBOLPF_OFFSET UNITYSDK_OFFSET(0x19DCD5E0)
#define ODIBCDLEPMB__CTOR_OFFSET UNITYSDK_OFFSET(0x19DCD270)

inline static constexpr unsigned int ODIBCDLEPMB_TypeDefinitionIndex = 12433;

class ODIBCDLEPMB : public ::System::Object
{
public:
	::JPGNPOPEGJP HBDPAIKANDB; // 0x10
	::System::String* BCMMNNGDDEG; // 0x20
	::System::String* IAODEAMAHIH; // 0x28
	::System::String* MKOIOLHAMBA; // 0x30
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x40
	::System::Byte ACIOBDEBDNK; // 0x41
	::System::Byte CNIAANMNOCF; // 0x42
	::System::Byte _padding0[0x1];
	::System::Int32 NAGCOKGIJJE; // 0x44
	::System::Int32 KCPPGDGEICJ; // 0x48

	::System::Void _ctor(::JPGNPOPEGJP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JPGNPOPEGJP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + ODIBCDLEPMB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODIBCDLEPMB_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ODIBCDLEPMB_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ODIBCDLEPMB_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* MBPBPHCENCG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODIBCDLEPMB_MBPBPHCENCG_OFFSET))(this);
	}

	::System::Int32 MMKOKCKOKCC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODIBCDLEPMB_MMKOKCKOKCC_OFFSET))(this);
	}

	::System::String* ODKNDDBOLPF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODIBCDLEPMB_ODKNDDBOLPF_OFFSET))(this);
	}

	::System::Int32 KLAHIAMDBKI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODIBCDLEPMB_KLAHIAMDBKI_OFFSET))(this);
	}
};
