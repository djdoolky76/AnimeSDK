#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BLNIMFGHENH.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define FJOONLHKOEL_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1663F0C0)
#define FJOONLHKOEL_FFAFCFOJOKJ_OFFSET UNITYSDK_OFFSET(0x1663EE50)
#define FJOONLHKOEL_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1663F0A0)
#define FJOONLHKOEL_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1663F0B0)
#define FJOONLHKOEL_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1663EF60)
#define FJOONLHKOEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1663EE40)

inline static constexpr unsigned int FJOONLHKOEL_TypeDefinitionIndex = 12289;

class FJOONLHKOEL : public ::System::Object
{
public:
	::System::String* JEGHOOCFDNL; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::BLNIMFGHENH HBDPAIKANDB; // 0x20
	::System::Int32 PCMOJLNOPPM; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x34
	::System::Byte CNIAANMNOCF; // 0x35
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x36

	::System::Void _ctor(::BLNIMFGHENH LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::BLNIMFGHENH, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + FJOONLHKOEL__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* FFAFCFOJOKJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJOONLHKOEL_FFAFCFOJOKJ_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJOONLHKOEL_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FJOONLHKOEL_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FJOONLHKOEL_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJOONLHKOEL_COFGIJJOFLP_OFFSET))(this);
	}
};
