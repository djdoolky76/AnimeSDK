#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JOEKLGLGLBP.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define HCNNNBFKNCF_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1933DE90)
#define HCNNNBFKNCF_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1933DE80)
#define HCNNNBFKNCF_HDNCCEDDKDG_OFFSET UNITYSDK_OFFSET(0x1933DD70)
#define HCNNNBFKNCF_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1933DC20)
#define HCNNNBFKNCF_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1933DC30)
#define HCNNNBFKNCF__CTOR_OFFSET UNITYSDK_OFFSET(0x1933DC10)

inline static constexpr unsigned int HCNNNBFKNCF_TypeDefinitionIndex = 12376;

class HCNNNBFKNCF : public ::System::Object
{
public:
	::System::String* PCDAJCJAOOO; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::JOEKLGLGLBP HBDPAIKANDB; // 0x20
	::System::Int32 PCMOJLNOPPM; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x34
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x35
	::System::Byte CNIAANMNOCF; // 0x36

	::System::Void _ctor(::JOEKLGLGLBP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JOEKLGLGLBP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HCNNNBFKNCF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HCNNNBFKNCF_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCNNNBFKNCF_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::String* HDNCCEDDKDG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCNNNBFKNCF_HDNCCEDDKDG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HCNNNBFKNCF_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCNNNBFKNCF_COFGIJJOFLP_OFFSET))(this);
	}
};
