#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MKGOHIIOJAH.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define MKECBKNELHK_AOGFLCFFINH_OFFSET UNITYSDK_OFFSET(0x173486D0)
#define MKECBKNELHK_CKICBGJKBJH_OFFSET UNITYSDK_OFFSET(0x17348810)
#define MKECBKNELHK_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17348920)
#define MKECBKNELHK_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17348A20)
#define MKECBKNELHK_HJEFCNNHHEO_OFFSET UNITYSDK_OFFSET(0x17348340)
#define MKECBKNELHK_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17348A10)
#define MKECBKNELHK_LJIBBAJHBBG_OFFSET UNITYSDK_OFFSET(0x17348480)
#define MKECBKNELHK_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x17348590)
#define MKECBKNELHK__CTOR_OFFSET UNITYSDK_OFFSET(0x17348330)

inline static constexpr unsigned int MKECBKNELHK_TypeDefinitionIndex = 13613;

class MKECBKNELHK : public ::System::Object
{
public:
	::MKGOHIIOJAH HBDPAIKANDB; // 0x10
	::System::String* AHPHPDLPDLL; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::String* OFNMAKCGHPF; // 0x30
	::System::Int32 ONPMJGJBNOA; // 0x38
	::System::Int32 PCMOJLNOPPM; // 0x3C
	::System::Byte CNIAANMNOCF; // 0x40
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x41
	::System::Byte ACIOBDEBDNK; // 0x42
	::System::Byte _padding0[0x1];
	::System::Int32 KEIGMGHCPFL; // 0x44

	::System::Void _ctor(::MKGOHIIOJAH LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::MKGOHIIOJAH, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MKECBKNELHK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 HJEFCNNHHEO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKECBKNELHK_HJEFCNNHHEO_OFFSET))(this);
	}

	::System::String* LJIBBAJHBBG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKECBKNELHK_LJIBBAJHBBG_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKECBKNELHK_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Int32 AOGFLCFFINH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKECBKNELHK_AOGFLCFFINH_OFFSET))(this);
	}

	::System::String* CKICBGJKBJH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKECBKNELHK_CKICBGJKBJH_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKECBKNELHK_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MKECBKNELHK_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MKECBKNELHK_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
