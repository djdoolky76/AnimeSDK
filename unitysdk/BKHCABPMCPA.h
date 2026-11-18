#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JEGKKMMJJKH.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define BKHCABPMCPA_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B992A30)
#define BKHCABPMCPA_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B992B20)
#define BKHCABPMCPA_GBDHPMDIJDK_OFFSET UNITYSDK_OFFSET(0x1B992C80)
#define BKHCABPMCPA_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B992B30)
#define BKHCABPMCPA_MFLMGECAGIA_OFFSET UNITYSDK_OFFSET(0x1B992B40)
#define BKHCABPMCPA_MGMEBGHENIE_OFFSET UNITYSDK_OFFSET(0x1B992D90)
#define BKHCABPMCPA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B992A20)

inline static constexpr unsigned int BKHCABPMCPA_TypeDefinitionIndex = 17646;

class BKHCABPMCPA : public ::System::Object
{
public:
	::System::String* OBDCOOAIMHK; // 0x10
	::JEGKKMMJJKH HBDPAIKANDB; // 0x18
	::System::String* JBFMBNFEEAO; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x39
	::System::Byte CNIAANMNOCF; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 FEIOEHMLAIM; // 0x3C

	::System::Void _ctor(::JEGKKMMJJKH LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JEGKKMMJJKH, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BKHCABPMCPA__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKHCABPMCPA_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BKHCABPMCPA_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BKHCABPMCPA_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 MFLMGECAGIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKHCABPMCPA_MFLMGECAGIA_OFFSET))(this);
	}

	::System::String* GBDHPMDIJDK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKHCABPMCPA_GBDHPMDIJDK_OFFSET))(this);
	}

	::System::String* MGMEBGHENIE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKHCABPMCPA_MGMEBGHENIE_OFFSET))(this);
	}
};
