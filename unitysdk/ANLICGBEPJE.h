#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPCFDGJFLBF.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define ANLICGBEPJE_AFIKPGHMNCI_OFFSET UNITYSDK_OFFSET(0x1A525140)
#define ANLICGBEPJE_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A525280)
#define ANLICGBEPJE_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A5254C0)
#define ANLICGBEPJE_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A5254B0)
#define ANLICGBEPJE_MJENJFHONJB_OFFSET UNITYSDK_OFFSET(0x1A525370)
#define ANLICGBEPJE_PMBCAKACFJP_OFFSET UNITYSDK_OFFSET(0x1A5254D0)
#define ANLICGBEPJE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A525130)

inline static constexpr unsigned int ANLICGBEPJE_TypeDefinitionIndex = 13914;

class ANLICGBEPJE : public ::System::Object
{
public:
	::CPCFDGJFLBF HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::String* IMAFCDDJOME; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x30
	::System::Byte DDGDDABBIHM; // 0x31
	::System::Byte CNIAANMNOCF; // 0x32
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x33
	::System::Int32 JKEAJLNIHNP; // 0x34
	::System::Int32 DEJAMNPAFDL; // 0x38

	::System::Void _ctor(::CPCFDGJFLBF LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::CPCFDGJFLBF, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + ANLICGBEPJE__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 AFIKPGHMNCI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANLICGBEPJE_AFIKPGHMNCI_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANLICGBEPJE_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 MJENJFHONJB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANLICGBEPJE_MJENJFHONJB_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANLICGBEPJE_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ANLICGBEPJE_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* PMBCAKACFJP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANLICGBEPJE_PMBCAKACFJP_OFFSET))(this);
	}
};
