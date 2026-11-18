#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/POEDAJDNNPD.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define EADILEPEJOB_BGAELDLFMCB_OFFSET UNITYSDK_OFFSET(0x1A55AA50)
#define EADILEPEJOB_CACDOMJFABM_OFFSET UNITYSDK_OFFSET(0x1A55ADD0)
#define EADILEPEJOB_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A55ACE0)
#define EADILEPEJOB_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A55AB90)
#define EADILEPEJOB_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A55AA40)
#define EADILEPEJOB_NJINBPPLCNL_OFFSET UNITYSDK_OFFSET(0x1A55ABA0)
#define EADILEPEJOB__CTOR_OFFSET UNITYSDK_OFFSET(0x1A55AA30)

inline static constexpr unsigned int EADILEPEJOB_TypeDefinitionIndex = 13206;

class EADILEPEJOB : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::POEDAJDNNPD HBDPAIKANDB; // 0x18
	::System::String* NFAEIBPGJFC; // 0x28
	::System::Int32 JLJNPOEENEK; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x34
	::System::Byte ACIOBDEBDNK; // 0x35
	::System::Byte CNIAANMNOCF; // 0x36
	::System::Byte _padding0[0x1];
	::System::Int32 AMHCNLIMDDG; // 0x38

	::System::Void _ctor(::POEDAJDNNPD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::POEDAJDNNPD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + EADILEPEJOB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EADILEPEJOB_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 BGAELDLFMCB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EADILEPEJOB_BGAELDLFMCB_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EADILEPEJOB_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 NJINBPPLCNL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EADILEPEJOB_NJINBPPLCNL_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EADILEPEJOB_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* CACDOMJFABM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EADILEPEJOB_CACDOMJFABM_OFFSET))(this);
	}
};
