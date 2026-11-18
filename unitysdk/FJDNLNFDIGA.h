#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AGIFCFDPJPM.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define FJDNLNFDIGA_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19F5A370)
#define FJDNLNFDIGA_DKNEFMDCANB_OFFSET UNITYSDK_OFFSET(0x19F5A220)
#define FJDNLNFDIGA_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19F5A360)
#define FJDNLNFDIGA_IHOKLLDHGKB_OFFSET UNITYSDK_OFFSET(0x19F5A0D0)
#define FJDNLNFDIGA_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19F5A210)
#define FJDNLNFDIGA__CTOR_OFFSET UNITYSDK_OFFSET(0x19F5A0C0)

inline static constexpr unsigned int FJDNLNFDIGA_TypeDefinitionIndex = 11664;

class FJDNLNFDIGA : public ::System::Object
{
public:
	::AGIFCFDPJPM HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 GAAEEJAGKMG; // 0x28
	::System::Byte CNIAANMNOCF; // 0x2C
	::System::Byte ACIOBDEBDNK; // 0x2D
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2E
	::System::Byte _padding0[0x1];
	::System::Int32 BOIDCCNECJG; // 0x30

	::System::Void _ctor(::AGIFCFDPJPM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::AGIFCFDPJPM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + FJDNLNFDIGA__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 IHOKLLDHGKB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJDNLNFDIGA_IHOKLLDHGKB_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FJDNLNFDIGA_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 DKNEFMDCANB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJDNLNFDIGA_DKNEFMDCANB_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FJDNLNFDIGA_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJDNLNFDIGA_COFGIJJOFLP_OFFSET))(this);
	}
};
