#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DEABHIDCEAL.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define NEBBEHCKHFO_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1BF6A260)
#define NEBBEHCKHFO_FGCPLFCCHBK_OFFSET UNITYSDK_OFFSET(0x1BF6A350)
#define NEBBEHCKHFO_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1BF69FC0)
#define NEBBEHCKHFO_HGOJEGDOHOH_OFFSET UNITYSDK_OFFSET(0x1BF69FD0)
#define NEBBEHCKHFO_KFBGNKBGKBK_OFFSET UNITYSDK_OFFSET(0x1BF6A110)
#define NEBBEHCKHFO_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1BF6A250)
#define NEBBEHCKHFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF69FB0)

inline static constexpr unsigned int NEBBEHCKHFO_TypeDefinitionIndex = 15829;

class NEBBEHCKHFO : public ::System::Object
{
public:
	::DEABHIDCEAL HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 LJHFHNHMFKO; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x2C
	::System::Byte CNIAANMNOCF; // 0x2D
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2E
	::System::Byte _padding0[0x1];
	::System::Int32 BLLIOAFMPGP; // 0x30
	::System::Int32 AFOJBJIONGJ; // 0x34

	::System::Void _ctor(::DEABHIDCEAL LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DEABHIDCEAL, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NEBBEHCKHFO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEBBEHCKHFO_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 HGOJEGDOHOH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEBBEHCKHFO_HGOJEGDOHOH_OFFSET))(this);
	}

	::System::Int32 KFBGNKBGKBK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEBBEHCKHFO_KFBGNKBGKBK_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEBBEHCKHFO_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEBBEHCKHFO_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 FGCPLFCCHBK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEBBEHCKHFO_FGCPLFCCHBK_OFFSET))(this);
	}
};
