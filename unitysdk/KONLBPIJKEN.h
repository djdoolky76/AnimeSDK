#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGCGDGHJKMD.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define KONLBPIJKEN_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x16129E70)
#define KONLBPIJKEN_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x16129D40)
#define KONLBPIJKEN_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x16129D50)
#define KONLBPIJKEN_PJIEHHJMBJK_OFFSET UNITYSDK_OFFSET(0x16129D60)
#define KONLBPIJKEN__CTOR_OFFSET UNITYSDK_OFFSET(0x16129D30)

inline static constexpr unsigned int KONLBPIJKEN_TypeDefinitionIndex = 15997;

class KONLBPIJKEN : public ::System::Object
{
public:
	::CGCGDGHJKMD HBDPAIKANDB; // 0x10
	::System::String* BFLHPAKJEIH; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x30
	::System::Byte CNIAANMNOCF; // 0x31
	::System::Byte ACIOBDEBDNK; // 0x32

	::System::Void _ctor(::CGCGDGHJKMD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::CGCGDGHJKMD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KONLBPIJKEN__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KONLBPIJKEN_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KONLBPIJKEN_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* PJIEHHJMBJK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KONLBPIJKEN_PJIEHHJMBJK_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KONLBPIJKEN_COFGIJJOFLP_OFFSET))(this);
	}
};
