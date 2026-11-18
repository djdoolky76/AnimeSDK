#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DIDEEBFLLOO.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define DKNNAALPIPO_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B9A9EA0)
#define DKNNAALPIPO_ENHACCOJFDN_OFFSET UNITYSDK_OFFSET(0x1B9A9D90)
#define DKNNAALPIPO_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B9AA0D0)
#define DKNNAALPIPO_IGKFAFBGBAP_OFFSET UNITYSDK_OFFSET(0x1B9A9F90)
#define DKNNAALPIPO_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B9A9C40)
#define DKNNAALPIPO_LNFNKHOEFHJ_OFFSET UNITYSDK_OFFSET(0x1B9AA0E0)
#define DKNNAALPIPO_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1B9A9C50)
#define DKNNAALPIPO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9A9C30)

inline static constexpr unsigned int DKNNAALPIPO_TypeDefinitionIndex = 12391;

class DKNNAALPIPO : public ::System::Object
{
public:
	::System::String* CKJBIMIPEMH; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::DIDEEBFLLOO HBDPAIKANDB; // 0x20
	::System::String* APPHOHAEBOH; // 0x30
	::System::Int32 OFGMKLFNPPJ; // 0x38
	::System::Int32 PCMOJLNOPPM; // 0x3C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x40
	::System::Byte CNIAANMNOCF; // 0x41
	::System::Byte ACIOBDEBDNK; // 0x42

	::System::Void _ctor(::DIDEEBFLLOO LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DIDEEBFLLOO, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DKNNAALPIPO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNNAALPIPO_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNNAALPIPO_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::String* ENHACCOJFDN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNNAALPIPO_ENHACCOJFDN_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNNAALPIPO_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 IGKFAFBGBAP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNNAALPIPO_IGKFAFBGBAP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DKNNAALPIPO_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* LNFNKHOEFHJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNNAALPIPO_LNFNKHOEFHJ_OFFSET))(this);
	}
};
