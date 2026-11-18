#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKOEDJNDALO.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define HBMCNJPOMIO_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x18BA9670)
#define HBMCNJPOMIO_ELPFAFFJNKI_OFFSET UNITYSDK_OFFSET(0x18BA9760)
#define HBMCNJPOMIO_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x18BA9990)
#define HBMCNJPOMIO_GNMBEBDBCME_OFFSET UNITYSDK_OFFSET(0x18BA99A0)
#define HBMCNJPOMIO_LFKAFKFLGDA_OFFSET UNITYSDK_OFFSET(0x18BA9870)
#define HBMCNJPOMIO_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x18BA9980)
#define HBMCNJPOMIO_PBFKHLEHIGG_OFFSET UNITYSDK_OFFSET(0x18BA9C40)
#define HBMCNJPOMIO_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x18BA9B00)
#define HBMCNJPOMIO__CTOR_OFFSET UNITYSDK_OFFSET(0x18BA9660)

inline static constexpr unsigned int HBMCNJPOMIO_TypeDefinitionIndex = 11807;

class HBMCNJPOMIO : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* DEGDKAKONOL; // 0x18
	::System::String* KEDCEJJMKCA; // 0x20
	::AKOEDJNDALO HBDPAIKANDB; // 0x28
	::System::UInt32 PCMOJLNOPPM; // 0x38
	::System::Byte CNIAANMNOCF; // 0x3C
	::System::Byte ACIOBDEBDNK; // 0x3D
	::System::Boolean DLMDBOOBDLO; // 0x3E
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3F
	::System::UInt64 CDEKJIPBECO; // 0x40

	::System::Void _ctor(::AKOEDJNDALO LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::AKOEDJNDALO, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HBMCNJPOMIO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBMCNJPOMIO_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* ELPFAFFJNKI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBMCNJPOMIO_ELPFAFFJNKI_OFFSET))(this);
	}

	::System::String* LFKAFKFLGDA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBMCNJPOMIO_LFKAFKFLGDA_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HBMCNJPOMIO_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HBMCNJPOMIO_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean GNMBEBDBCME()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HBMCNJPOMIO_GNMBEBDBCME_OFFSET))(this);
	}

	::System::UInt32 PPIFNHNGCGO()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBMCNJPOMIO_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::UInt64 PBFKHLEHIGG()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + HBMCNJPOMIO_PBFKHLEHIGG_OFFSET))(this);
	}
};
