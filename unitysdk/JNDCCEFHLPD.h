#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FLIOAOBONDK.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define JNDCCEFHLPD_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B89CB90)
#define JNDCCEFHLPD_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x1B89CC80)
#define JNDCCEFHLPD_ENJENAJGHFI_OFFSET UNITYSDK_OFFSET(0x1B89CA50)
#define JNDCCEFHLPD_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B89CD90)
#define JNDCCEFHLPD_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B89CEE0)
#define JNDCCEFHLPD_MLDGOBLHCOH_OFFSET UNITYSDK_OFFSET(0x1B89CDA0)
#define JNDCCEFHLPD__CTOR_OFFSET UNITYSDK_OFFSET(0x1B89CA40)

inline static constexpr unsigned int JNDCCEFHLPD_TypeDefinitionIndex = 9228;

class JNDCCEFHLPD : public ::System::Object
{
public:
	::System::String* IENCBDEPMFJ; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::FLIOAOBONDK HBDPAIKANDB; // 0x20
	::System::Int32 IKPJIPJBAHM; // 0x30
	::System::Int32 OMDLAHBLCAM; // 0x34
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x39
	::System::Byte CNIAANMNOCF; // 0x3A

	::System::Void _ctor(::FLIOAOBONDK LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FLIOAOBONDK, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JNDCCEFHLPD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 ENJENAJGHFI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNDCCEFHLPD_ENJENAJGHFI_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNDCCEFHLPD_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNDCCEFHLPD_DECMGICKDLH_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JNDCCEFHLPD_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 MLDGOBLHCOH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNDCCEFHLPD_MLDGOBLHCOH_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JNDCCEFHLPD_LJANCIBECFG_OFFSET))(this);
	}
};
