#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JCMHHGHMBFG.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define JHINNAAKNGG_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x18BCB900)
#define JHINNAAKNGG_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x18BCB6D0)
#define JHINNAAKNGG_FAGAOGMCNKD_OFFSET UNITYSDK_OFFSET(0x18BCB7C0)
#define JHINNAAKNGG_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x18BCB550)
#define JHINNAAKNGG_HHGIIPANAPB_OFFSET UNITYSDK_OFFSET(0x18BCB560)
#define JHINNAAKNGG_LGPBCANCFFC_OFFSET UNITYSDK_OFFSET(0x18BCBA40)
#define JHINNAAKNGG_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x18BCB6C0)
#define JHINNAAKNGG_LMEPNMAMIAD_OFFSET UNITYSDK_OFFSET(0x18BCB440)
#define JHINNAAKNGG__CTOR_OFFSET UNITYSDK_OFFSET(0x18BCB430)

inline static constexpr unsigned int JHINNAAKNGG_TypeDefinitionIndex = 13306;

class JHINNAAKNGG : public ::System::Object
{
public:
	::System::String* ANKBAFILBHC; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::JCMHHGHMBFG HBDPAIKANDB; // 0x20
	::System::Int32 JAOJNMDAAOD; // 0x30
	::System::Int32 NLCDENLKOPM; // 0x34
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x39
	::System::Boolean IMNOIAOFNBC; // 0x3A
	::System::Byte CNIAANMNOCF; // 0x3B
	::System::Int32 NGONBDMDOAJ; // 0x3C

	::System::Void _ctor(::JCMHHGHMBFG LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JCMHHGHMBFG, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JHINNAAKNGG__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* LMEPNMAMIAD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHINNAAKNGG_LMEPNMAMIAD_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JHINNAAKNGG_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean HHGIIPANAPB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JHINNAAKNGG_HHGIIPANAPB_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JHINNAAKNGG_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHINNAAKNGG_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 FAGAOGMCNKD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHINNAAKNGG_FAGAOGMCNKD_OFFSET))(this);
	}

	::System::Int32 BKNKCFDBLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHINNAAKNGG_BKNKCFDBLGH_OFFSET))(this);
	}

	::System::Int32 LGPBCANCFFC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHINNAAKNGG_LGPBCANCFFC_OFFSET))(this);
	}
};
