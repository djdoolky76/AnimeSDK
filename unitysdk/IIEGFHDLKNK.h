#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FALCBDAIGNC.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define IIEGFHDLKNK_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B625C30)
#define IIEGFHDLKNK_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B625F80)
#define IIEGFHDLKNK_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B625E60)
#define IIEGFHDLKNK_LLNFEILBPKH_OFFSET UNITYSDK_OFFSET(0x1B625E70)
#define IIEGFHDLKNK_MKDFMCHKJMK_OFFSET UNITYSDK_OFFSET(0x1B625D20)
#define IIEGFHDLKNK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B625C20)

inline static constexpr unsigned int IIEGFHDLKNK_TypeDefinitionIndex = 15507;

class IIEGFHDLKNK : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::FALCBDAIGNC HBDPAIKANDB; // 0x18
	::System::String* JJNHKPLDAPE; // 0x28
	::System::Int32 CPPHBHPECNO; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x34
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x35
	::System::Byte CNIAANMNOCF; // 0x36

	::System::Void _ctor(::FALCBDAIGNC LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FALCBDAIGNC, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + IIEGFHDLKNK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIEGFHDLKNK_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 MKDFMCHKJMK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IIEGFHDLKNK_MKDFMCHKJMK_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IIEGFHDLKNK_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* LLNFEILBPKH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIEGFHDLKNK_LLNFEILBPKH_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IIEGFHDLKNK_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
