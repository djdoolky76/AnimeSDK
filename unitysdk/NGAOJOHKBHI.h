#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OFMAMDKPMFM.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define NGAOJOHKBHI_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B32A6F0)
#define NGAOJOHKBHI_EILOAHBODGP_OFFSET UNITYSDK_OFFSET(0x1B32A200)
#define NGAOJOHKBHI_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B32A480)
#define NGAOJOHKBHI_IFDDDJOMBOL_OFFSET UNITYSDK_OFFSET(0x1B32A5D0)
#define NGAOJOHKBHI_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B32A6E0)
#define NGAOJOHKBHI_LPFMNKEFPMM_OFFSET UNITYSDK_OFFSET(0x1B32A340)
#define NGAOJOHKBHI_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1B32A490)
#define NGAOJOHKBHI__CTOR_OFFSET UNITYSDK_OFFSET(0x1B32A1F0)

inline static constexpr unsigned int NGAOJOHKBHI_TypeDefinitionIndex = 12747;

class NGAOJOHKBHI : public ::System::Object
{
public:
	::System::String* GNJLJMNMGHA; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::OFMAMDKPMFM HBDPAIKANDB; // 0x20
	::System::Int32 PCMOJLNOPPM; // 0x30
	::System::Byte CNIAANMNOCF; // 0x34
	::System::Byte ACIOBDEBDNK; // 0x35
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x36
	::System::Byte _padding0[0x1];
	::System::Int32 JEDEMPHDCAK; // 0x38
	::System::Int32 PGOIDEHPJOE; // 0x3C

	::System::Void _ctor(::OFMAMDKPMFM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::OFMAMDKPMFM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NGAOJOHKBHI__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 EILOAHBODGP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGAOJOHKBHI_EILOAHBODGP_OFFSET))(this);
	}

	::System::Int32 LPFMNKEFPMM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGAOJOHKBHI_LPFMNKEFPMM_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NGAOJOHKBHI_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGAOJOHKBHI_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::String* IFDDDJOMBOL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGAOJOHKBHI_IFDDDJOMBOL_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGAOJOHKBHI_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGAOJOHKBHI_COFGIJJOFLP_OFFSET))(this);
	}
};
