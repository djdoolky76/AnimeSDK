#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EACKGDKFPDJ.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define JPLJHIPHMGJ_AGCHOHIPJNC_OFFSET UNITYSDK_OFFSET(0x152FB350)
#define JPLJHIPHMGJ_AHFDLHJACOF_OFFSET UNITYSDK_OFFSET(0x152FB720)
#define JPLJHIPHMGJ_BNKPNGANFDN_OFFSET UNITYSDK_OFFSET(0x152FBA90)
#define JPLJHIPHMGJ_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x152FB9A0)
#define JPLJHIPHMGJ_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x152FB710)
#define JPLJHIPHMGJ_LEGAIPAMJBC_OFFSET UNITYSDK_OFFSET(0x152FB860)
#define JPLJHIPHMGJ_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x152FB340)
#define JPLJHIPHMGJ_MDFIHALAIJB_OFFSET UNITYSDK_OFFSET(0x152FB5D0)
#define JPLJHIPHMGJ_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x152FB490)
#define JPLJHIPHMGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x152FB330)

inline static constexpr unsigned int JPLJHIPHMGJ_TypeDefinitionIndex = 9891;

class JPLJHIPHMGJ : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::EACKGDKFPDJ HBDPAIKANDB; // 0x18
	::System::Int32 PCMOJLNOPPM; // 0x28
	::System::Int32 AMGAFDAJPKL; // 0x2C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x31
	::System::Byte CNIAANMNOCF; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 HPJFMBNLKLL; // 0x34
	::System::Int32 HCKPKNEIBEG; // 0x38
	::System::Int32 AICFILHLIPF; // 0x3C
	::System::Int32 FIKFDBLDKAJ; // 0x40

	::System::Void _ctor(::EACKGDKFPDJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::EACKGDKFPDJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JPLJHIPHMGJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLJHIPHMGJ_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 AGCHOHIPJNC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLJHIPHMGJ_AGCHOHIPJNC_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLJHIPHMGJ_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Int32 MDFIHALAIJB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLJHIPHMGJ_MDFIHALAIJB_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JPLJHIPHMGJ_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 AHFDLHJACOF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLJHIPHMGJ_AHFDLHJACOF_OFFSET))(this);
	}

	::System::Int32 LEGAIPAMJBC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLJHIPHMGJ_LEGAIPAMJBC_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLJHIPHMGJ_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 BNKPNGANFDN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLJHIPHMGJ_BNKPNGANFDN_OFFSET))(this);
	}
};
