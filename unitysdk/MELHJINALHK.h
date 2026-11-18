#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AMKFHGBPMFL.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define MELHJINALHK_BANIDLIIAJE_OFFSET UNITYSDK_OFFSET(0x1BB16340)
#define MELHJINALHK_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1BB16450)
#define MELHJINALHK_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1BB16540)
#define MELHJINALHK_HCNDNEJBLNK_OFFSET UNITYSDK_OFFSET(0x1BB16220)
#define MELHJINALHK_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1BB16330)
#define MELHJINALHK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB16210)

inline static constexpr unsigned int MELHJINALHK_TypeDefinitionIndex = 10129;

class MELHJINALHK : public ::System::Object
{
public:
	::AMKFHGBPMFL HBDPAIKANDB; // 0x10
	::System::String* CNDBLGOIHNA; // 0x20
	::System::String* CHGLPJDMOPK; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::String* KHJIACOPHFA; // 0x38
	::System::Byte CNIAANMNOCF; // 0x40
	::System::Byte ACIOBDEBDNK; // 0x41
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x42
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x44

	::System::Void _ctor(::AMKFHGBPMFL LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::AMKFHGBPMFL, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MELHJINALHK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* HCNDNEJBLNK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MELHJINALHK_HCNDNEJBLNK_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MELHJINALHK_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* BANIDLIIAJE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MELHJINALHK_BANIDLIIAJE_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MELHJINALHK_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MELHJINALHK_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
