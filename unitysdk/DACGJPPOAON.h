#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BOLDFBAAEKG.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define DACGJPPOAON_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17776D50)
#define DACGJPPOAON_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17777090)
#define DACGJPPOAON_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17776D40)
#define DACGJPPOAON_MLKBPMJEHFK_OFFSET UNITYSDK_OFFSET(0x17776E40)
#define DACGJPPOAON_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x17776F50)
#define DACGJPPOAON__CTOR_OFFSET UNITYSDK_OFFSET(0x17776D30)

inline static constexpr unsigned int DACGJPPOAON_TypeDefinitionIndex = 14431;

class DACGJPPOAON : public ::System::Object
{
public:
	::System::String* BBPOJPAGGAD; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::BOLDFBAAEKG HBDPAIKANDB; // 0x20
	::System::Int32 PCMOJLNOPPM; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x34
	::System::Byte CNIAANMNOCF; // 0x35
	::System::Byte ACIOBDEBDNK; // 0x36

	::System::Void _ctor(::BOLDFBAAEKG LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::BOLDFBAAEKG, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DACGJPPOAON__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DACGJPPOAON_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DACGJPPOAON_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* MLKBPMJEHFK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DACGJPPOAON_MLKBPMJEHFK_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DACGJPPOAON_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DACGJPPOAON_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
