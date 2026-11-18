#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MCIILMLCPJL.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define KKNOMILAFHP_AIJJPBPHCLO_OFFSET UNITYSDK_OFFSET(0x1B643990)
#define KKNOMILAFHP_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B643D20)
#define KKNOMILAFHP_CPELHPALFLP_OFFSET UNITYSDK_OFFSET(0x1B643C10)
#define KKNOMILAFHP_EHGGNPMIJAL_OFFSET UNITYSDK_OFFSET(0x1B643F50)
#define KKNOMILAFHP_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B644090)
#define KKNOMILAFHP_HCCGGDOEHKH_OFFSET UNITYSDK_OFFSET(0x1B643E10)
#define KKNOMILAFHP_IADEPIFAMCC_OFFSET UNITYSDK_OFFSET(0x1B6440A0)
#define KKNOMILAFHP_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B6441B0)
#define KKNOMILAFHP_PAINFLDDDDD_OFFSET UNITYSDK_OFFSET(0x1B643AD0)
#define KKNOMILAFHP_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1B643850)
#define KKNOMILAFHP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B643840)

inline static constexpr unsigned int KKNOMILAFHP_TypeDefinitionIndex = 14193;

class KKNOMILAFHP : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::MCIILMLCPJL HBDPAIKANDB; // 0x18
	::System::String* FMLAFFNGGJD; // 0x28
	::System::String* IPHBBPHNANJ; // 0x30
	::System::Int32 PCMOJLNOPPM; // 0x38
	::System::Int32 DKHMDPOEIMG; // 0x3C
	::System::Byte ACIOBDEBDNK; // 0x40
	::System::Byte CNIAANMNOCF; // 0x41
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x42
	::System::Byte _padding0[0x1];
	::System::Int32 PCNIKBMFNHJ; // 0x44
	::System::Int32 NCLEEKFKOKM; // 0x48
	::System::Int32 PMIPDJKHLCH; // 0x4C

	::System::Void _ctor(::MCIILMLCPJL LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::MCIILMLCPJL, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KKNOMILAFHP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKNOMILAFHP_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Int32 AIJJPBPHCLO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKNOMILAFHP_AIJJPBPHCLO_OFFSET))(this);
	}

	::System::Int32 PAINFLDDDDD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKNOMILAFHP_PAINFLDDDDD_OFFSET))(this);
	}

	::System::String* CPELHPALFLP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKNOMILAFHP_CPELHPALFLP_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKNOMILAFHP_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 HCCGGDOEHKH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKNOMILAFHP_HCCGGDOEHKH_OFFSET))(this);
	}

	::System::Int32 EHGGNPMIJAL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKNOMILAFHP_EHGGNPMIJAL_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KKNOMILAFHP_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* IADEPIFAMCC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKNOMILAFHP_IADEPIFAMCC_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KKNOMILAFHP_LJANCIBECFG_OFFSET))(this);
	}
};
