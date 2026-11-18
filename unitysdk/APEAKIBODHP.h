#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHOLOIFFLMA.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define APEAKIBODHP_AJBIAFOCKHN_OFFSET UNITYSDK_OFFSET(0x157778D0)
#define APEAKIBODHP_BPJEGCPBOED_OFFSET UNITYSDK_OFFSET(0x15777650)
#define APEAKIBODHP_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x15777550)
#define APEAKIBODHP_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x15777640)
#define APEAKIBODHP_JAMCNDCDBHN_OFFSET UNITYSDK_OFFSET(0x15777410)
#define APEAKIBODHP_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x15777A10)
#define APEAKIBODHP_ODNOOMHBMLD_OFFSET UNITYSDK_OFFSET(0x15777790)
#define APEAKIBODHP__CTOR_OFFSET UNITYSDK_OFFSET(0x15777400)

inline static constexpr unsigned int APEAKIBODHP_TypeDefinitionIndex = 16605;

class APEAKIBODHP : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::JHOLOIFFLMA HBDPAIKANDB; // 0x18
	::System::Int32 BNLMBACIEFB; // 0x28
	::System::Int32 GNKOFJIKLPM; // 0x2C
	::System::Int32 KOKLFOGCFFM; // 0x30
	::System::Int32 AIPKHGOGDHP; // 0x34
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x38
	::System::Byte CNIAANMNOCF; // 0x39
	::System::Byte ACIOBDEBDNK; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 FBLABJAJLDE; // 0x3C

	::System::Void _ctor(::JHOLOIFFLMA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JHOLOIFFLMA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + APEAKIBODHP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 JAMCNDCDBHN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APEAKIBODHP_JAMCNDCDBHN_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APEAKIBODHP_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + APEAKIBODHP_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 BPJEGCPBOED()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APEAKIBODHP_BPJEGCPBOED_OFFSET))(this);
	}

	::System::Int32 ODNOOMHBMLD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APEAKIBODHP_ODNOOMHBMLD_OFFSET))(this);
	}

	::System::Int32 AJBIAFOCKHN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APEAKIBODHP_AJBIAFOCKHN_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + APEAKIBODHP_LJANCIBECFG_OFFSET))(this);
	}
};
