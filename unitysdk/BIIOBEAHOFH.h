#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FKCPPDNICPA.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define BIIOBEAHOFH_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1572AB70)
#define BIIOBEAHOFH_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1572B020)
#define BIIOBEAHOFH_GKAMCMIJFHJ_OFFSET UNITYSDK_OFFSET(0x1572AEE0)
#define BIIOBEAHOFH_JGOEEFJHEMI_OFFSET UNITYSDK_OFFSET(0x1572B180)
#define BIIOBEAHOFH_JHHPOALCJJP_OFFSET UNITYSDK_OFFSET(0x1572ADA0)
#define BIIOBEAHOFH_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1572B170)
#define BIIOBEAHOFH_MDLLGIMAGCP_OFFSET UNITYSDK_OFFSET(0x1572AC60)
#define BIIOBEAHOFH_MFLMGECAGIA_OFFSET UNITYSDK_OFFSET(0x1572B030)
#define BIIOBEAHOFH__CTOR_OFFSET UNITYSDK_OFFSET(0x1572AB60)

inline static constexpr unsigned int BIIOBEAHOFH_TypeDefinitionIndex = 13888;

class BIIOBEAHOFH : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::FKCPPDNICPA HBDPAIKANDB; // 0x18
	::System::Int32 JFFLACEGKJO; // 0x28
	::System::Int32 FEIOEHMLAIM; // 0x2C
	::System::Byte ACIOBDEBDNK; // 0x30
	::System::Byte CNIAANMNOCF; // 0x31
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 IPAPIMLONFA; // 0x34
	::System::Int32 JIKOLBKCHNP; // 0x38
	::System::Int32 OKBBGPGIODD; // 0x3C

	::System::Void _ctor(::FKCPPDNICPA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FKCPPDNICPA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BIIOBEAHOFH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIIOBEAHOFH_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 MDLLGIMAGCP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIIOBEAHOFH_MDLLGIMAGCP_OFFSET))(this);
	}

	::System::Int32 JHHPOALCJJP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIIOBEAHOFH_JHHPOALCJJP_OFFSET))(this);
	}

	::System::Int32 GKAMCMIJFHJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIIOBEAHOFH_GKAMCMIJFHJ_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BIIOBEAHOFH_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 MFLMGECAGIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIIOBEAHOFH_MFLMGECAGIA_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BIIOBEAHOFH_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 JGOEEFJHEMI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIIOBEAHOFH_JGOEEFJHEMI_OFFSET))(this);
	}
};
