#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GLGGGNPMKCD.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define KHHNLIJOBKF_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A5FAF80)
#define KHHNLIJOBKF_ENPEFGPPHII_OFFSET UNITYSDK_OFFSET(0x1A5FB1D0)
#define KHHNLIJOBKF_FEMLPHIGLAP_OFFSET UNITYSDK_OFFSET(0x1A5FAE40)
#define KHHNLIJOBKF_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A5FB1C0)
#define KHHNLIJOBKF_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A5FB1B0)
#define KHHNLIJOBKF_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1A5FB070)
#define KHHNLIJOBKF__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5FAE30)

inline static constexpr unsigned int KHHNLIJOBKF_TypeDefinitionIndex = 13070;

class KHHNLIJOBKF : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::GLGGGNPMKCD HBDPAIKANDB; // 0x18
	::System::String* FKEDFJHLOFN; // 0x28
	::System::Byte CNIAANMNOCF; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x31
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x34
	::System::Int32 JKLCALGBGJP; // 0x38

	::System::Void _ctor(::GLGGGNPMKCD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::GLGGGNPMKCD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KHHNLIJOBKF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 FEMLPHIGLAP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHHNLIJOBKF_FEMLPHIGLAP_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHHNLIJOBKF_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHHNLIJOBKF_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KHHNLIJOBKF_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KHHNLIJOBKF_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* ENPEFGPPHII()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHHNLIJOBKF_ENPEFGPPHII_OFFSET))(this);
	}
};
