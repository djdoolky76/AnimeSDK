#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JBOGCDEGFKE.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define OGGMBGIBJCB_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x18E2E250)
#define OGGMBGIBJCB_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x18E2E120)
#define OGGMBGIBJCB_IMCLPFDIFOD_OFFSET UNITYSDK_OFFSET(0x18E2E480)
#define OGGMBGIBJCB_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x18E2E240)
#define OGGMBGIBJCB_NKIKFLIOOFC_OFFSET UNITYSDK_OFFSET(0x18E2E590)
#define OGGMBGIBJCB_PGLHDOBJIIN_OFFSET UNITYSDK_OFFSET(0x18E2E130)
#define OGGMBGIBJCB_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x18E2E340)
#define OGGMBGIBJCB__CTOR_OFFSET UNITYSDK_OFFSET(0x18E2E110)

inline static constexpr unsigned int OGGMBGIBJCB_TypeDefinitionIndex = 11943;

class OGGMBGIBJCB : public ::System::Object
{
public:
	::System::String* MDMHHJOAJNG; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::JBOGCDEGFKE HBDPAIKANDB; // 0x20
	::System::String* FIDCNJGMPIE; // 0x30
	::System::String* LIKOFNGBKKP; // 0x38
	::System::Int32 AHOJGKJNJGH; // 0x40
	::System::Byte ACIOBDEBDNK; // 0x44
	::System::Byte CNIAANMNOCF; // 0x45
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x46
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x48

	::System::Void _ctor(::JBOGCDEGFKE LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JBOGCDEGFKE, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + OGGMBGIBJCB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OGGMBGIBJCB_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* PGLHDOBJIIN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGGMBGIBJCB_PGLHDOBJIIN_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OGGMBGIBJCB_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGGMBGIBJCB_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGGMBGIBJCB_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::String* IMCLPFDIFOD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGGMBGIBJCB_IMCLPFDIFOD_OFFSET))(this);
	}

	::System::String* NKIKFLIOOFC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGGMBGIBJCB_NKIKFLIOOFC_OFFSET))(this);
	}
};
