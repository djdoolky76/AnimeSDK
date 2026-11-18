#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KADPCIOGMJP.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define GENAFJEHFEK_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x160E2AE0)
#define GENAFJEHFEK_EOIOPMDDKID_OFFSET UNITYSDK_OFFSET(0x160E2860)
#define GENAFJEHFEK_FJOLPGBLBBH_OFFSET UNITYSDK_OFFSET(0x160E2D20)
#define GENAFJEHFEK_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x160E2D10)
#define GENAFJEHFEK_KOJBJBEKDBD_OFFSET UNITYSDK_OFFSET(0x160E29A0)
#define GENAFJEHFEK_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x160E2850)
#define GENAFJEHFEK_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x160E2BD0)
#define GENAFJEHFEK__CTOR_OFFSET UNITYSDK_OFFSET(0x160E2840)

inline static constexpr unsigned int GENAFJEHFEK_TypeDefinitionIndex = 15905;

class GENAFJEHFEK : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::KADPCIOGMJP HBDPAIKANDB; // 0x18
	::System::Int32 ANFBPLDLFBC; // 0x28
	::System::Int32 PCMOJLNOPPM; // 0x2C
	::System::Int32 COLCGPGFHMN; // 0x30
	::System::Byte CNIAANMNOCF; // 0x34
	::System::Byte ACIOBDEBDNK; // 0x35
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x36
	::System::Byte _padding0[0x1];
	::System::Int32 EALEIFCIIOP; // 0x38

	::System::Void _ctor(::KADPCIOGMJP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KADPCIOGMJP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + GENAFJEHFEK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GENAFJEHFEK_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 EOIOPMDDKID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GENAFJEHFEK_EOIOPMDDKID_OFFSET))(this);
	}

	::System::Int32 KOJBJBEKDBD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GENAFJEHFEK_KOJBJBEKDBD_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GENAFJEHFEK_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GENAFJEHFEK_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GENAFJEHFEK_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 FJOLPGBLBBH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GENAFJEHFEK_FJOLPGBLBBH_OFFSET))(this);
	}
};
