#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJDCADPMGKF.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LCPACNPOIGM_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1612E0C0)
#define LCPACNPOIGM_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x1612DF90)
#define LCPACNPOIGM_DFJBPDIKJAJ_OFFSET UNITYSDK_OFFSET(0x1612D960)
#define LCPACNPOIGM_EFIMOGGEBHM_OFFSET UNITYSDK_OFFSET(0x1612DBB0)
#define LCPACNPOIGM_ENJENAJGHFI_OFFSET UNITYSDK_OFFSET(0x1612DE80)
#define LCPACNPOIGM_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1612E0A0)
#define LCPACNPOIGM_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1612E0B0)
#define LCPACNPOIGM_OIFKOPIILOO_OFFSET UNITYSDK_OFFSET(0x1612DAA0)
#define LCPACNPOIGM_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1612D820)
#define LCPACNPOIGM__CTOR_OFFSET UNITYSDK_OFFSET(0x1612D810)

inline static constexpr unsigned int LCPACNPOIGM_TypeDefinitionIndex = 9845;

class LCPACNPOIGM : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* ANDFDBNJKIF; // 0x18
	::System::String* ODGNAOHIOCJ; // 0x20
	::System::String* IENCBDEPMFJ; // 0x28
	::DJDCADPMGKF HBDPAIKANDB; // 0x30
	::System::String* OMDLAHBLCAM; // 0x40
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x48
	::System::Byte CNIAANMNOCF; // 0x49
	::System::Byte ACIOBDEBDNK; // 0x4A
	::System::Byte _padding0[0x1];
	::System::Int32 HILCFKOJEPI; // 0x4C
	::System::Int32 PCMOJLNOPPM; // 0x50

	::System::Void _ctor(::DJDCADPMGKF LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DJDCADPMGKF, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LCPACNPOIGM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCPACNPOIGM_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Int32 DFJBPDIKJAJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCPACNPOIGM_DFJBPDIKJAJ_OFFSET))(this);
	}

	::System::String* OIFKOPIILOO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCPACNPOIGM_OIFKOPIILOO_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* EFIMOGGEBHM()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCPACNPOIGM_EFIMOGGEBHM_OFFSET))(this);
	}

	::System::String* ENJENAJGHFI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCPACNPOIGM_ENJENAJGHFI_OFFSET))(this);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCPACNPOIGM_DECMGICKDLH_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LCPACNPOIGM_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LCPACNPOIGM_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCPACNPOIGM_COFGIJJOFLP_OFFSET))(this);
	}
};
