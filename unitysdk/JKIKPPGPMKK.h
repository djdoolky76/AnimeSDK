#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOEMHNKAAKL.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define JKIKPPGPMKK_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B13ED90)
#define JKIKPPGPMKK_FAIBHNMDEKI_OFFSET UNITYSDK_OFFSET(0x1B13EFC0)
#define JKIKPPGPMKK_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B13ED80)
#define JKIKPPGPMKK_GKAMCMIJFHJ_OFFSET UNITYSDK_OFFSET(0x1B13E990)
#define JKIKPPGPMKK_GPFAAHIIINP_OFFSET UNITYSDK_OFFSET(0x1B13EC40)
#define JKIKPPGPMKK_LHLJOIHKDAL_OFFSET UNITYSDK_OFFSET(0x1B13EAE0)
#define JKIKPPGPMKK_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B13EAD0)
#define JKIKPPGPMKK_MDLLGIMAGCP_OFFSET UNITYSDK_OFFSET(0x1B13EE80)
#define JKIKPPGPMKK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B13E980)

inline static constexpr unsigned int JKIKPPGPMKK_TypeDefinitionIndex = 10160;

class JKIKPPGPMKK : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::DOEMHNKAAKL HBDPAIKANDB; // 0x18
	::System::Int32 OKBBGPGIODD; // 0x28
	::System::Int32 JIKOLBKCHNP; // 0x2C
	::System::Int32 BENOFMIKOPE; // 0x30
	::System::Int32 CKNDBMFOLBD; // 0x34
	::System::Byte CNIAANMNOCF; // 0x38
	::System::Boolean PCOKFJGHEKN; // 0x39
	::System::Byte ACIOBDEBDNK; // 0x3A
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3B

	::System::Void _ctor(::DOEMHNKAAKL LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DOEMHNKAAKL, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JKIKPPGPMKK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 GKAMCMIJFHJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKIKPPGPMKK_GKAMCMIJFHJ_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JKIKPPGPMKK_LJANCIBECFG_OFFSET))(this);
	}

	::System::Boolean LHLJOIHKDAL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JKIKPPGPMKK_LHLJOIHKDAL_OFFSET))(this);
	}

	::System::Int32 GPFAAHIIINP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKIKPPGPMKK_GPFAAHIIINP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JKIKPPGPMKK_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKIKPPGPMKK_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 MDLLGIMAGCP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKIKPPGPMKK_MDLLGIMAGCP_OFFSET))(this);
	}

	::System::Int32 FAIBHNMDEKI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKIKPPGPMKK_FAIBHNMDEKI_OFFSET))(this);
	}
};
