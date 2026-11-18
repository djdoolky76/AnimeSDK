#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJBKFNIIOOD.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define CIGKKNFMALE_BKMPOONFPMC_OFFSET UNITYSDK_OFFSET(0x1B99B0B0)
#define CIGKKNFMALE_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B99AFB0)
#define CIGKKNFMALE_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B99B0A0)
#define CIGKKNFMALE_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B99B330)
#define CIGKKNFMALE_NLBKOGOCAME_OFFSET UNITYSDK_OFFSET(0x1B99B1F0)
#define CIGKKNFMALE_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1B99B340)
#define CIGKKNFMALE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B99AFA0)

inline static constexpr unsigned int CIGKKNFMALE_TypeDefinitionIndex = 16666;

class CIGKKNFMALE : public ::System::Object
{
public:
	::DJBKFNIIOOD HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 PCMOJLNOPPM; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2C
	::System::Byte CNIAANMNOCF; // 0x2D
	::System::Byte ACIOBDEBDNK; // 0x2E
	::System::Boolean CGCPCCOPPNM; // 0x2F
	::System::Int32 KMMICOKPGOM; // 0x30
	::System::Int32 BIMLLDLLIKH; // 0x34
	::System::Int32 HHFOCAIMBEH; // 0x38

	::System::Void _ctor(::DJBKFNIIOOD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DJBKFNIIOOD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + CIGKKNFMALE__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIGKKNFMALE_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CIGKKNFMALE_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 BKMPOONFPMC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIGKKNFMALE_BKMPOONFPMC_OFFSET))(this);
	}

	::System::Int32 NLBKOGOCAME()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIGKKNFMALE_NLBKOGOCAME_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CIGKKNFMALE_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIGKKNFMALE_PPIFNHNGCGO_OFFSET))(this);
	}
};
