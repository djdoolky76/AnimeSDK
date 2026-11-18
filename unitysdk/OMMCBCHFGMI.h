#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EBCEOHNJECL.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define OMMCBCHFGMI_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B3418C0)
#define OMMCBCHFGMI_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B3419C0)
#define OMMCBCHFGMI_HGODFCFGNDA_OFFSET UNITYSDK_OFFSET(0x1B3419D0)
#define OMMCBCHFGMI_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B3419B0)
#define OMMCBCHFGMI__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3418B0)

inline static constexpr unsigned int OMMCBCHFGMI_TypeDefinitionIndex = 11188;

class OMMCBCHFGMI : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* FOILDBFAHFP; // 0x18
	::EBCEOHNJECL HBDPAIKANDB; // 0x20
	::System::Byte ACIOBDEBDNK; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x31
	::System::Byte CNIAANMNOCF; // 0x32

	::System::Void _ctor(::EBCEOHNJECL LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::EBCEOHNJECL, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + OMMCBCHFGMI__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMCBCHFGMI_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMCBCHFGMI_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OMMCBCHFGMI_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* HGODFCFGNDA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMCBCHFGMI_HGODFCFGNDA_OFFSET))(this);
	}
};
