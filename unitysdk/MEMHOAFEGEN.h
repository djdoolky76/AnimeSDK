#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GGAHAPLOJNH.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MEMHOAFEGEN_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1AB07DF0)
#define MEMHOAFEGEN_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x1AB07CE0)
#define MEMHOAFEGEN_DFJBPDIKJAJ_OFFSET UNITYSDK_OFFSET(0x1AB076B0)
#define MEMHOAFEGEN_EFIMOGGEBHM_OFFSET UNITYSDK_OFFSET(0x1AB07900)
#define MEMHOAFEGEN_ENJENAJGHFI_OFFSET UNITYSDK_OFFSET(0x1AB07BD0)
#define MEMHOAFEGEN_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1AB07EF0)
#define MEMHOAFEGEN_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1AB07EE0)
#define MEMHOAFEGEN_OIFKOPIILOO_OFFSET UNITYSDK_OFFSET(0x1AB077F0)
#define MEMHOAFEGEN_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1AB07570)
#define MEMHOAFEGEN__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB07560)

inline static constexpr unsigned int MEMHOAFEGEN_TypeDefinitionIndex = 12071;

class MEMHOAFEGEN : public ::System::Object
{
public:
	::System::String* OMDLAHBLCAM; // 0x10
	::GGAHAPLOJNH HBDPAIKANDB; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* ANDFDBNJKIF; // 0x30
	::System::String* IENCBDEPMFJ; // 0x38
	::System::String* ODGNAOHIOCJ; // 0x40
	::System::Int32 PCMOJLNOPPM; // 0x48
	::System::Byte CNIAANMNOCF; // 0x4C
	::System::Byte ACIOBDEBDNK; // 0x4D
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x4E
	::System::Byte _padding0[0x1];
	::System::Int32 HILCFKOJEPI; // 0x50

	::System::Void _ctor(::GGAHAPLOJNH LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::GGAHAPLOJNH, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MEMHOAFEGEN__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMHOAFEGEN_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Int32 DFJBPDIKJAJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMHOAFEGEN_DFJBPDIKJAJ_OFFSET))(this);
	}

	::System::String* OIFKOPIILOO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMHOAFEGEN_OIFKOPIILOO_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* EFIMOGGEBHM()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMHOAFEGEN_EFIMOGGEBHM_OFFSET))(this);
	}

	::System::String* ENJENAJGHFI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMHOAFEGEN_ENJENAJGHFI_OFFSET))(this);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMHOAFEGEN_DECMGICKDLH_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMHOAFEGEN_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMHOAFEGEN_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MEMHOAFEGEN_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
