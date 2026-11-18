#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DMPGCDPBLFG.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define HFFPHICPKHL_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x195309A0)
#define HFFPHICPKHL_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19530AA0)
#define HFFPHICPKHL_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19530A90)
#define HFFPHICPKHL_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x19530AB0)
#define HFFPHICPKHL__CTOR_OFFSET UNITYSDK_OFFSET(0x19530990)

inline static constexpr unsigned int HFFPHICPKHL_TypeDefinitionIndex = 12758;

class HFFPHICPKHL : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::DMPGCDPBLFG HBDPAIKANDB; // 0x18
	::System::Int32 PCMOJLNOPPM; // 0x28
	::System::Byte CNIAANMNOCF; // 0x2C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2D
	::System::Byte ACIOBDEBDNK; // 0x2E

	::System::Void _ctor(::DMPGCDPBLFG LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DMPGCDPBLFG, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HFFPHICPKHL__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFFPHICPKHL_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HFFPHICPKHL_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HFFPHICPKHL_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFFPHICPKHL_PPIFNHNGCGO_OFFSET))(this);
	}
};
