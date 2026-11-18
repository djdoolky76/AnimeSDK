#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DHKOFJCPANO.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define HKPNOAEJMFO_BEPLKKHMJCN_OFFSET UNITYSDK_OFFSET(0x1BADF020)
#define HKPNOAEJMFO_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1BADF160)
#define HKPNOAEJMFO_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1BADF360)
#define HKPNOAEJMFO_HOBFMMLPLGD_OFFSET UNITYSDK_OFFSET(0x1BADF250)
#define HKPNOAEJMFO_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1BADF5C0)
#define HKPNOAEJMFO_NPEDOGCFCOJ_OFFSET UNITYSDK_OFFSET(0x1BADF480)
#define HKPNOAEJMFO_OLKPIHLNEIN_OFFSET UNITYSDK_OFFSET(0x1BADF370)
#define HKPNOAEJMFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BADF010)

inline static constexpr unsigned int HKPNOAEJMFO_TypeDefinitionIndex = 12814;

class HKPNOAEJMFO : public ::System::Object
{
public:
	::System::String* EAELDHGMPPD; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::DHKOFJCPANO HBDPAIKANDB; // 0x20
	::System::String* HAPDMBKHEGG; // 0x30
	::System::Int32 NOMEHNJKEHN; // 0x38
	::System::Int32 NJMJMAMNPKI; // 0x3C
	::System::Byte CNIAANMNOCF; // 0x40
	::System::Byte ACIOBDEBDNK; // 0x41
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x42

	::System::Void _ctor(::DHKOFJCPANO LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DHKOFJCPANO, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HKPNOAEJMFO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 BEPLKKHMJCN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKPNOAEJMFO_BEPLKKHMJCN_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKPNOAEJMFO_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* HOBFMMLPLGD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKPNOAEJMFO_HOBFMMLPLGD_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HKPNOAEJMFO_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* OLKPIHLNEIN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKPNOAEJMFO_OLKPIHLNEIN_OFFSET))(this);
	}

	::System::Int32 NPEDOGCFCOJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKPNOAEJMFO_NPEDOGCFCOJ_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HKPNOAEJMFO_LJANCIBECFG_OFFSET))(this);
	}
};
