#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAIFBBIBMHC.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define AKHMHNILHBF_BDKFDJDLING_OFFSET UNITYSDK_OFFSET(0x19ABD350)
#define AKHMHNILHBF_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19ABD110)
#define AKHMHNILHBF_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19ABD340)
#define AKHMHNILHBF_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19ABCFF0)
#define AKHMHNILHBF_PLNBBDEBIII_OFFSET UNITYSDK_OFFSET(0x19ABD000)
#define AKHMHNILHBF_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x19ABD200)
#define AKHMHNILHBF__CTOR_OFFSET UNITYSDK_OFFSET(0x19ABCFE0)

inline static constexpr unsigned int AKHMHNILHBF_TypeDefinitionIndex = 10464;

class AKHMHNILHBF : public ::System::Object
{
public:
	::OAIFBBIBMHC HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::String* ADLMAEAOJOB; // 0x28
	::System::Int32 HCKCJDKMCJO; // 0x30
	::System::Byte CNIAANMNOCF; // 0x34
	::System::Byte ACIOBDEBDNK; // 0x35
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x36
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x38

	::System::Void _ctor(::OAIFBBIBMHC LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::OAIFBBIBMHC, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + AKHMHNILHBF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKHMHNILHBF_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* PLNBBDEBIII()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKHMHNILHBF_PLNBBDEBIII_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKHMHNILHBF_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKHMHNILHBF_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKHMHNILHBF_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 BDKFDJDLING()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKHMHNILHBF_BDKFDJDLING_OFFSET))(this);
	}
};
