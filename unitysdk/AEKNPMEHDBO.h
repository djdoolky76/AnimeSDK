#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNIDDAILHLJ.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define AEKNPMEHDBO_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1C5066D0)
#define AEKNPMEHDBO_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1C506580)
#define AEKNPMEHDBO_HADEHKDOBJJ_OFFSET UNITYSDK_OFFSET(0x1C506590)
#define AEKNPMEHDBO_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1C506A40)
#define AEKNPMEHDBO_LPFMNKEFPMM_OFFSET UNITYSDK_OFFSET(0x1C5067C0)
#define AEKNPMEHDBO_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1C506900)
#define AEKNPMEHDBO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C506570)

inline static constexpr unsigned int AEKNPMEHDBO_TypeDefinitionIndex = 9781;

class AEKNPMEHDBO : public ::System::Object
{
public:
	::LNIDDAILHLJ HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 CHKCLGFJODK; // 0x28
	::System::Int32 PCMOJLNOPPM; // 0x2C
	::System::Int32 JEDEMPHDCAK; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x34
	::System::Byte CNIAANMNOCF; // 0x35
	::System::Byte ACIOBDEBDNK; // 0x36

	::System::Void _ctor(::LNIDDAILHLJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LNIDDAILHLJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + AEKNPMEHDBO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AEKNPMEHDBO_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 HADEHKDOBJJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEKNPMEHDBO_HADEHKDOBJJ_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEKNPMEHDBO_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 LPFMNKEFPMM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEKNPMEHDBO_LPFMNKEFPMM_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEKNPMEHDBO_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AEKNPMEHDBO_LJANCIBECFG_OFFSET))(this);
	}
};
