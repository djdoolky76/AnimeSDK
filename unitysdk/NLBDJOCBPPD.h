#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NDPPBAEOPPC.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define NLBDJOCBPPD_ANNHHHEGPOA_OFFSET UNITYSDK_OFFSET(0x1BF711C0)
#define NLBDJOCBPPD_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1BF710D0)
#define NLBDJOCBPPD_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1BF71310)
#define NLBDJOCBPPD_IFDIOIOCGDP_OFFSET UNITYSDK_OFFSET(0x1BF70FC0)
#define NLBDJOCBPPD_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1BF71300)
#define NLBDJOCBPPD__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF70FB0)

inline static constexpr unsigned int NLBDJOCBPPD_TypeDefinitionIndex = 16013;

class NLBDJOCBPPD : public ::System::Object
{
public:
	::NDPPBAEOPPC HBDPAIKANDB; // 0x10
	::System::String* EOALHEEBMKM; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Int32 HCAJIDPDDGH; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x34
	::System::Byte CNIAANMNOCF; // 0x35
	::System::Byte ACIOBDEBDNK; // 0x36

	::System::Void _ctor(::NDPPBAEOPPC LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NDPPBAEOPPC, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NLBDJOCBPPD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* IFDIOIOCGDP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLBDJOCBPPD_IFDIOIOCGDP_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLBDJOCBPPD_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 ANNHHHEGPOA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLBDJOCBPPD_ANNHHHEGPOA_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NLBDJOCBPPD_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NLBDJOCBPPD_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
