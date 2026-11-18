#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HCAHLDENMEI.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define MGOHJFDCPJD_BDKFDJDLING_OFFSET UNITYSDK_OFFSET(0x1B7FEB90)
#define MGOHJFDCPJD_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B7FE980)
#define MGOHJFDCPJD_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B7FE830)
#define MGOHJFDCPJD_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B7FEB80)
#define MGOHJFDCPJD_PLNBBDEBIII_OFFSET UNITYSDK_OFFSET(0x1B7FEA70)
#define MGOHJFDCPJD_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1B7FE840)
#define MGOHJFDCPJD__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7FE820)

inline static constexpr unsigned int MGOHJFDCPJD_TypeDefinitionIndex = 12026;

class MGOHJFDCPJD : public ::System::Object
{
public:
	::HCAHLDENMEI HBDPAIKANDB; // 0x10
	::System::String* ADLMAEAOJOB; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Int32 HCKCJDKMCJO; // 0x30
	::System::Int32 PCMOJLNOPPM; // 0x34
	::System::Byte CNIAANMNOCF; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x39
	::System::Byte ACIOBDEBDNK; // 0x3A

	::System::Void _ctor(::HCAHLDENMEI LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HCAHLDENMEI, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MGOHJFDCPJD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MGOHJFDCPJD_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGOHJFDCPJD_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGOHJFDCPJD_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* PLNBBDEBIII()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGOHJFDCPJD_PLNBBDEBIII_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MGOHJFDCPJD_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 BDKFDJDLING()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGOHJFDCPJD_BDKFDJDLING_OFFSET))(this);
	}
};
