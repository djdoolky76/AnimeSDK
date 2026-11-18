#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NDMCLCBFPLM.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define HFEJCBCCBPM_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x15A8A280)
#define HFEJCBCCBPM_ENJENAJGHFI_OFFSET UNITYSDK_OFFSET(0x15A8A390)
#define HFEJCBCCBPM_FBMIEJIGIED_OFFSET UNITYSDK_OFFSET(0x15A8A170)
#define HFEJCBCCBPM_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x15A8A370)
#define HFEJCBCCBPM_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x15A8A380)
#define HFEJCBCCBPM_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x15A8A030)
#define HFEJCBCCBPM__CTOR_OFFSET UNITYSDK_OFFSET(0x15A8A020)

inline static constexpr unsigned int HFEJCBCCBPM_TypeDefinitionIndex = 10775;

class HFEJCBCCBPM : public ::System::Object
{
public:
	::NDMCLCBFPLM HBDPAIKANDB; // 0x10
	::System::String* DDGJJGPDFFD; // 0x20
	::System::String* OMDLAHBLCAM; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::Int32 PCMOJLNOPPM; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x3C
	::System::Byte CNIAANMNOCF; // 0x3D
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3E

	::System::Void _ctor(::NDMCLCBFPLM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NDMCLCBFPLM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HFEJCBCCBPM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFEJCBCCBPM_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::String* FBMIEJIGIED()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFEJCBCCBPM_FBMIEJIGIED_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFEJCBCCBPM_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HFEJCBCCBPM_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HFEJCBCCBPM_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* ENJENAJGHFI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFEJCBCCBPM_ENJENAJGHFI_OFFSET))(this);
	}
};
