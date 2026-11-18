#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOOOELOAMKK.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define IMALPKLBBMO_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A5E1FA0)
#define IMALPKLBBMO_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A5E1F80)
#define IMALPKLBBMO_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A5E1F90)
#define IMALPKLBBMO_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1A5E2090)
#define IMALPKLBBMO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5E1F70)

inline static constexpr unsigned int IMALPKLBBMO_TypeDefinitionIndex = 9631;

class IMALPKLBBMO : public ::System::Object
{
public:
	::System::String* IMAFCDDJOME; // 0x10
	::FOOOELOAMKK HBDPAIKANDB; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x31
	::System::Byte CNIAANMNOCF; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 CCNPLODMGEB; // 0x34
	::System::Int32 PCMOJLNOPPM; // 0x38

	::System::Void _ctor(::FOOOELOAMKK LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FOOOELOAMKK, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + IMALPKLBBMO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IMALPKLBBMO_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IMALPKLBBMO_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMALPKLBBMO_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMALPKLBBMO_PPIFNHNGCGO_OFFSET))(this);
	}
};
