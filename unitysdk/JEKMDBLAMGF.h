#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFMLDHCIJCC.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define JEKMDBLAMGF_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x15AA5F30)
#define JEKMDBLAMGF_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x15AA6020)
#define JEKMDBLAMGF_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x15AA6030)
#define JEKMDBLAMGF_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x15AA5DF0)
#define JEKMDBLAMGF__CTOR_OFFSET UNITYSDK_OFFSET(0x15AA5DE0)

inline static constexpr unsigned int JEKMDBLAMGF_TypeDefinitionIndex = 16714;

class JEKMDBLAMGF : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::EFMLDHCIJCC HBDPAIKANDB; // 0x18
	::System::Int32 PCMOJLNOPPM; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2C
	::System::Byte CNIAANMNOCF; // 0x2D
	::System::Byte ACIOBDEBDNK; // 0x2E

	::System::Void _ctor(::EFMLDHCIJCC LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::EFMLDHCIJCC, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JEKMDBLAMGF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEKMDBLAMGF_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEKMDBLAMGF_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JEKMDBLAMGF_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JEKMDBLAMGF_LJANCIBECFG_OFFSET))(this);
	}
};
