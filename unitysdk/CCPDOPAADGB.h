#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KKOLDCLNMED.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define CCPDOPAADGB_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1573B200)
#define CCPDOPAADGB_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1573B1E0)
#define CCPDOPAADGB_IIGDMHFAJLP_OFFSET UNITYSDK_OFFSET(0x1573AE20)
#define CCPDOPAADGB_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1573B1F0)
#define CCPDOPAADGB_OHEHCGIAAEK_OFFSET UNITYSDK_OFFSET(0x1573AF60)
#define CCPDOPAADGB_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1573B0A0)
#define CCPDOPAADGB__CTOR_OFFSET UNITYSDK_OFFSET(0x1573AE10)

inline static constexpr unsigned int CCPDOPAADGB_TypeDefinitionIndex = 9486;

class CCPDOPAADGB : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::KKOLDCLNMED HBDPAIKANDB; // 0x18
	::System::Int32 PCMOJLNOPPM; // 0x28
	::System::Int32 MFMNOHGNGEE; // 0x2C
	::System::Byte CNIAANMNOCF; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x31
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 OCIGBBOHGHK; // 0x34

	::System::Void _ctor(::KKOLDCLNMED LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KKOLDCLNMED, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + CCPDOPAADGB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 IIGDMHFAJLP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPDOPAADGB_IIGDMHFAJLP_OFFSET))(this);
	}

	::System::Int32 OHEHCGIAAEK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPDOPAADGB_OHEHCGIAAEK_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPDOPAADGB_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CCPDOPAADGB_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPDOPAADGB_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPDOPAADGB_COFGIJJOFLP_OFFSET))(this);
	}
};
