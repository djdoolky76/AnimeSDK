#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHCKLDCGJAE.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define JMBFONGDHED_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B4FC8E0)
#define JMBFONGDHED_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B4FC8D0)
#define JMBFONGDHED_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B4FCB10)
#define JMBFONGDHED_NLBKOGOCAME_OFFSET UNITYSDK_OFFSET(0x1B4FCB20)
#define JMBFONGDHED_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1B4FC9D0)
#define JMBFONGDHED__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4FC8C0)

inline static constexpr unsigned int JMBFONGDHED_TypeDefinitionIndex = 12755;

class JMBFONGDHED : public ::System::Object
{
public:
	::CHCKLDCGJAE HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Byte ACIOBDEBDNK; // 0x28
	::System::Boolean CGCPCCOPPNM; // 0x29
	::System::Byte CNIAANMNOCF; // 0x2A
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2B
	::System::Int32 PCMOJLNOPPM; // 0x2C
	::System::Int32 BIMLLDLLIKH; // 0x30

	::System::Void _ctor(::CHCKLDCGJAE LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::CHCKLDCGJAE, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JMBFONGDHED__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JMBFONGDHED_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMBFONGDHED_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMBFONGDHED_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JMBFONGDHED_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 NLBKOGOCAME()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMBFONGDHED_NLBKOGOCAME_OFFSET))(this);
	}
};
