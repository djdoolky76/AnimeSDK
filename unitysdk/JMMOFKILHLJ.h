#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGCEOLBNIM.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define JMMOFKILHLJ_BDJKFLFLJNC_OFFSET UNITYSDK_OFFSET(0x19362F50)
#define JMMOFKILHLJ_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19363060)
#define JMMOFKILHLJ_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19362F40)
#define JMMOFKILHLJ_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19362F30)
#define JMMOFKILHLJ_MFPMIFLLCAJ_OFFSET UNITYSDK_OFFSET(0x19362CB0)
#define JMMOFKILHLJ_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x19362DF0)
#define JMMOFKILHLJ__CTOR_OFFSET UNITYSDK_OFFSET(0x19362CA0)

inline static constexpr unsigned int JMMOFKILHLJ_TypeDefinitionIndex = 14144;

class JMMOFKILHLJ : public ::System::Object
{
public:
	::ENGCEOLBNIM HBDPAIKANDB; // 0x10
	::System::String* ANMJCKIJHME; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Int32 KBCCFFGFNNK; // 0x30
	::System::Int32 PCMOJLNOPPM; // 0x34
	::System::Byte ACIOBDEBDNK; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x39
	::System::Byte CNIAANMNOCF; // 0x3A

	::System::Void _ctor(::ENGCEOLBNIM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::ENGCEOLBNIM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JMMOFKILHLJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 MFPMIFLLCAJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMMOFKILHLJ_MFPMIFLLCAJ_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMMOFKILHLJ_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JMMOFKILHLJ_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JMMOFKILHLJ_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* BDJKFLFLJNC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMMOFKILHLJ_BDJKFLFLJNC_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMMOFKILHLJ_COFGIJJOFLP_OFFSET))(this);
	}
};
