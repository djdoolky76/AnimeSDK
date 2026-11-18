#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJGMGCJHGPJ.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define CJMIAIDIHLD_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x15740FA0)
#define CJMIAIDIHLD_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x15740E70)
#define CJMIAIDIHLD_LFJEJADGAIK_OFFSET UNITYSDK_OFFSET(0x15741090)
#define CJMIAIDIHLD_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x15740F90)
#define CJMIAIDIHLD_POBEKOPOPBI_OFFSET UNITYSDK_OFFSET(0x15740E80)
#define CJMIAIDIHLD__CTOR_OFFSET UNITYSDK_OFFSET(0x15740E60)

inline static constexpr unsigned int CJMIAIDIHLD_TypeDefinitionIndex = 17639;

class CJMIAIDIHLD : public ::System::Object
{
public:
	::System::String* OHDLFFHIEPK; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::FJGMGCJHGPJ HBDPAIKANDB; // 0x20
	::System::String* DNFDOGJHGKL; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x39
	::System::Byte CNIAANMNOCF; // 0x3A

	::System::Void _ctor(::FJGMGCJHGPJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FJGMGCJHGPJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + CJMIAIDIHLD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CJMIAIDIHLD_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* POBEKOPOPBI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJMIAIDIHLD_POBEKOPOPBI_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CJMIAIDIHLD_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJMIAIDIHLD_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* LFJEJADGAIK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJMIAIDIHLD_LFJEJADGAIK_OFFSET))(this);
	}
};
