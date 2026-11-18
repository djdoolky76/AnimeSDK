#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GCNJFELIIAA.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define LIDMNLNOFBG_ALHOOPOFCON_OFFSET UNITYSDK_OFFSET(0x1AD5C5B0)
#define LIDMNLNOFBG_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1AD5C6F0)
#define LIDMNLNOFBG_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1AD5C320)
#define LIDMNLNOFBG_GNGMKMHEICI_OFFSET UNITYSDK_OFFSET(0x1AD5C330)
#define LIDMNLNOFBG_HECLEPIPAAM_OFFSET UNITYSDK_OFFSET(0x1AD5C470)
#define LIDMNLNOFBG_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1AD5C310)
#define LIDMNLNOFBG__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD5C300)

inline static constexpr unsigned int LIDMNLNOFBG_TypeDefinitionIndex = 15935;

class LIDMNLNOFBG : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::GCNJFELIIAA HBDPAIKANDB; // 0x18
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x28
	::System::Byte CNIAANMNOCF; // 0x29
	::System::Byte ACIOBDEBDNK; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 OKMEJPFJHAP; // 0x2C
	::System::Int32 GOEPADOEBPN; // 0x30
	::System::Int32 DHBFHKMHAIN; // 0x34

	::System::Void _ctor(::GCNJFELIIAA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::GCNJFELIIAA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LIDMNLNOFBG__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LIDMNLNOFBG_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LIDMNLNOFBG_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 GNGMKMHEICI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LIDMNLNOFBG_GNGMKMHEICI_OFFSET))(this);
	}

	::System::Int32 HECLEPIPAAM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LIDMNLNOFBG_HECLEPIPAAM_OFFSET))(this);
	}

	::System::Int32 ALHOOPOFCON()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LIDMNLNOFBG_ALHOOPOFCON_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIDMNLNOFBG_COFGIJJOFLP_OFFSET))(this);
	}
};
