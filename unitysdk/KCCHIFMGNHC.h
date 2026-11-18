#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHJEAKFGMCN.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define KCCHIFMGNHC_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A5F5FF0)
#define KCCHIFMGNHC_CPELHPALFLP_OFFSET UNITYSDK_OFFSET(0x1A5F5D90)
#define KCCHIFMGNHC_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A5F60E0)
#define KCCHIFMGNHC_JFCNOLHFLHO_OFFSET UNITYSDK_OFFSET(0x1A5F5EA0)
#define KCCHIFMGNHC_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A5F5FE0)
#define KCCHIFMGNHC__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5F5D80)

inline static constexpr unsigned int KCCHIFMGNHC_TypeDefinitionIndex = 13310;

class KCCHIFMGNHC : public ::System::Object
{
public:
	::LHJEAKFGMCN HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::String* IPHBBPHNANJ; // 0x28
	::System::Int32 NAFDHMFICCJ; // 0x30
	::System::Byte CNIAANMNOCF; // 0x34
	::System::Byte ACIOBDEBDNK; // 0x35
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x36

	::System::Void _ctor(::LHJEAKFGMCN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LHJEAKFGMCN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KCCHIFMGNHC__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* CPELHPALFLP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCCHIFMGNHC_CPELHPALFLP_OFFSET))(this);
	}

	::System::Int32 JFCNOLHFLHO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCCHIFMGNHC_JFCNOLHFLHO_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KCCHIFMGNHC_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCCHIFMGNHC_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KCCHIFMGNHC_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
