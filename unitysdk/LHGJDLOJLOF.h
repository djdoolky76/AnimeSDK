#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DPKCJPJMBOF.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define LHGJDLOJLOF_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B7EF760)
#define LHGJDLOJLOF_COPBPCCNEAE_OFFSET UNITYSDK_OFFSET(0x1B7EF860)
#define LHGJDLOJLOF_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B7EF850)
#define LHGJDLOJLOF_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B7EF970)
#define LHGJDLOJLOF__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7EF750)

inline static constexpr unsigned int LHGJDLOJLOF_TypeDefinitionIndex = 15692;

class LHGJDLOJLOF : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* MEPIDLDJELB; // 0x18
	::DPKCJPJMBOF HBDPAIKANDB; // 0x20
	::System::Byte CNIAANMNOCF; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x31
	::System::Byte ACIOBDEBDNK; // 0x32

	::System::Void _ctor(::DPKCJPJMBOF LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DPKCJPJMBOF, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LHGJDLOJLOF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHGJDLOJLOF_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LHGJDLOJLOF_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* COPBPCCNEAE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHGJDLOJLOF_COPBPCCNEAE_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LHGJDLOJLOF_LJANCIBECFG_OFFSET))(this);
	}
};
