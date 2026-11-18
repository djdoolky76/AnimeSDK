#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KMFMLIIKFKJ.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define MCMINOFOPJH_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B3109F0)
#define MCMINOFOPJH_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B310E20)
#define MCMINOFOPJH_GBDHPMDIJDK_OFFSET UNITYSDK_OFFSET(0x1B310D10)
#define MCMINOFOPJH_IPOBNOEHJND_OFFSET UNITYSDK_OFFSET(0x1B310AF0)
#define MCMINOFOPJH_KKLEPOENOGC_OFFSET UNITYSDK_OFFSET(0x1B310C00)
#define MCMINOFOPJH_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B310AE0)
#define MCMINOFOPJH__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3109E0)

inline static constexpr unsigned int MCMINOFOPJH_TypeDefinitionIndex = 16956;

class MCMINOFOPJH : public ::System::Object
{
public:
	::System::String* HDLCMPPKINK; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::System::String* JBFMBNFEEAO; // 0x20
	::System::String* JGIBGLGPMJB; // 0x28
	::KMFMLIIKFKJ HBDPAIKANDB; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x40
	::System::Byte CNIAANMNOCF; // 0x41
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x42

	::System::Void _ctor(::KMFMLIIKFKJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KMFMLIIKFKJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MCMINOFOPJH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCMINOFOPJH_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MCMINOFOPJH_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* IPOBNOEHJND()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCMINOFOPJH_IPOBNOEHJND_OFFSET))(this);
	}

	::System::String* KKLEPOENOGC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCMINOFOPJH_KKLEPOENOGC_OFFSET))(this);
	}

	::System::String* GBDHPMDIJDK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCMINOFOPJH_GBDHPMDIJDK_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MCMINOFOPJH_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
