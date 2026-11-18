#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CEBBCJDECCK.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define IDNMDLNBJJD_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17C18F10)
#define IDNMDLNBJJD_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17C18F00)
#define IDNMDLNBJJD_ILCACHCNEKC_OFFSET UNITYSDK_OFFSET(0x17C19120)
#define IDNMDLNBJJD_JOLFFMEHDPN_OFFSET UNITYSDK_OFFSET(0x17C19260)
#define IDNMDLNBJJD_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17C19000)
#define IDNMDLNBJJD_NGAKJLHABDF_OFFSET UNITYSDK_OFFSET(0x17C19010)
#define IDNMDLNBJJD__CTOR_OFFSET UNITYSDK_OFFSET(0x17C18EF0)

inline static constexpr unsigned int IDNMDLNBJJD_TypeDefinitionIndex = 12986;

class IDNMDLNBJJD : public ::System::Object
{
public:
	::System::String* BMBLJNAOPDA; // 0x10
	::CEBBCJDECCK HBDPAIKANDB; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Int32 BJBJLOKFHOA; // 0x30
	::System::Int32 KGHMEGPJIHE; // 0x34
	::System::Byte ACIOBDEBDNK; // 0x38
	::System::Byte CNIAANMNOCF; // 0x39
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3A

	::System::Void _ctor(::CEBBCJDECCK LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::CEBBCJDECCK, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + IDNMDLNBJJD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IDNMDLNBJJD_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNMDLNBJJD_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNMDLNBJJD_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* NGAKJLHABDF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNMDLNBJJD_NGAKJLHABDF_OFFSET))(this);
	}

	::System::Int32 ILCACHCNEKC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNMDLNBJJD_ILCACHCNEKC_OFFSET))(this);
	}

	::System::Int32 JOLFFMEHDPN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNMDLNBJJD_JOLFFMEHDPN_OFFSET))(this);
	}
};
