#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DFLAEOJMMAK.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define EALCPIDGLDN_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17AA01F0)
#define EALCPIDGLDN_EODEBMONMEL_OFFSET UNITYSDK_OFFSET(0x17AA02E0)
#define EALCPIDGLDN_FDHBCBODOGC_OFFSET UNITYSDK_OFFSET(0x17AA00B0)
#define EALCPIDGLDN_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17AA0090)
#define EALCPIDGLDN_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17AA00A0)
#define EALCPIDGLDN__CTOR_OFFSET UNITYSDK_OFFSET(0x17AA0080)

inline static constexpr unsigned int EALCPIDGLDN_TypeDefinitionIndex = 16084;

class EALCPIDGLDN : public ::System::Object
{
public:
	::DFLAEOJMMAK HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 NDMDJIMEIJP; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x2C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2D
	::System::Byte CNIAANMNOCF; // 0x2E
	::System::Byte _padding0[0x1];
	::System::Int32 OHGHNIINJNA; // 0x30

	::System::Void _ctor(::DFLAEOJMMAK LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DFLAEOJMMAK, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + EALCPIDGLDN__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EALCPIDGLDN_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EALCPIDGLDN_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 FDHBCBODOGC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EALCPIDGLDN_FDHBCBODOGC_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EALCPIDGLDN_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 EODEBMONMEL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EALCPIDGLDN_EODEBMONMEL_OFFSET))(this);
	}
};
