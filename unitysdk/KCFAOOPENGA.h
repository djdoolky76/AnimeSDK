#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FKJBFKKENHO.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define KCFAOOPENGA_APCKPKCNFJE_OFFSET UNITYSDK_OFFSET(0x18BD4420)
#define KCFAOOPENGA_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x18BD4330)
#define KCFAOOPENGA_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x18BD4670)
#define KCFAOOPENGA_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x18BD47C0)
#define KCFAOOPENGA_OKHJNNEJKDG_OFFSET UNITYSDK_OFFSET(0x18BD4560)
#define KCFAOOPENGA_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x18BD4680)
#define KCFAOOPENGA__CTOR_OFFSET UNITYSDK_OFFSET(0x18BAEE80)

inline static constexpr unsigned int KCFAOOPENGA_TypeDefinitionIndex = 14462;

class KCFAOOPENGA : public ::System::Object
{
public:
	::FKJBFKKENHO HBDPAIKANDB; // 0x10
	::System::String* NCOABBOBMHH; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Int32 PCMOJLNOPPM; // 0x30
	::System::Int32 BPMHKHIBGEJ; // 0x34
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x39
	::System::Byte CNIAANMNOCF; // 0x3A

	::System::Void _ctor(::FKJBFKKENHO LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FKJBFKKENHO, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KCFAOOPENGA__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCFAOOPENGA_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 APCKPKCNFJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCFAOOPENGA_APCKPKCNFJE_OFFSET))(this);
	}

	::System::String* OKHJNNEJKDG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCFAOOPENGA_OKHJNNEJKDG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KCFAOOPENGA_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCFAOOPENGA_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KCFAOOPENGA_LJANCIBECFG_OFFSET))(this);
	}
};
