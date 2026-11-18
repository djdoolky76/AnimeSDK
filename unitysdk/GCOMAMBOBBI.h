#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HCDGIMFHCAK.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define GCOMAMBOBBI_AOFHCLKMAKH_OFFSET UNITYSDK_OFFSET(0x19AF82B0)
#define GCOMAMBOBBI_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19AF7F60)
#define GCOMAMBOBBI_ENOBACNFFMC_OFFSET UNITYSDK_OFFSET(0x19AF7E10)
#define GCOMAMBOBBI_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19AF7F50)
#define GCOMAMBOBBI_IEFKNFCBOPO_OFFSET UNITYSDK_OFFSET(0x19AF8050)
#define GCOMAMBOBBI_KKJFLCJEFIN_OFFSET UNITYSDK_OFFSET(0x19AF81A0)
#define GCOMAMBOBBI_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19AF8190)
#define GCOMAMBOBBI__CTOR_OFFSET UNITYSDK_OFFSET(0x19AF7E00)

inline static constexpr unsigned int GCOMAMBOBBI_TypeDefinitionIndex = 17419;

class GCOMAMBOBBI : public ::System::Object
{
public:
	::System::String* OJHCEDAINOG; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::System::String* FIPDJJANDDM; // 0x20
	::HCDGIMFHCAK HBDPAIKANDB; // 0x28
	::System::Int32 BDFOKNGECFJ; // 0x38
	::System::Byte CNIAANMNOCF; // 0x3C
	::System::Byte ACIOBDEBDNK; // 0x3D
	::System::Byte GCHCDJCFCEG; // 0x3E
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3F
	::System::Int32 HJGPFBDIBIH; // 0x40

	::System::Void _ctor(::HCDGIMFHCAK LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HCDGIMFHCAK, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + GCOMAMBOBBI__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 ENOBACNFFMC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCOMAMBOBBI_ENOBACNFFMC_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GCOMAMBOBBI_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCOMAMBOBBI_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 IEFKNFCBOPO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCOMAMBOBBI_IEFKNFCBOPO_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GCOMAMBOBBI_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* KKJFLCJEFIN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCOMAMBOBBI_KKJFLCJEFIN_OFFSET))(this);
	}

	::System::String* AOFHCLKMAKH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCOMAMBOBBI_AOFHCLKMAKH_OFFSET))(this);
	}
};
