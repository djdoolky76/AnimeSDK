#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ONGDBLHDJFI.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define LAOEMLOLNEN_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x18BDEF80)
#define LAOEMLOLNEN_DFDIFHLPHKB_OFFSET UNITYSDK_OFFSET(0x18BDEB00)
#define LAOEMLOLNEN_DPPJFGDKCJH_OFFSET UNITYSDK_OFFSET(0x18BDF080)
#define LAOEMLOLNEN_EKKCFHGFAGG_OFFSET UNITYSDK_OFFSET(0x18BDED20)
#define LAOEMLOLNEN_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x18BDEE30)
#define LAOEMLOLNEN_KLAHIAMDBKI_OFFSET UNITYSDK_OFFSET(0x18BDEE40)
#define LAOEMLOLNEN_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x18BDF070)
#define LAOEMLOLNEN_OEAHIFBMDNI_OFFSET UNITYSDK_OFFSET(0x18BDEC10)
#define LAOEMLOLNEN__CTOR_OFFSET UNITYSDK_OFFSET(0x18BDEAF0)

inline static constexpr unsigned int LAOEMLOLNEN_TypeDefinitionIndex = 14368;

class LAOEMLOLNEN : public ::System::Object
{
public:
	::System::String* BJCEPBPJDHO; // 0x10
	::ONGDBLHDJFI HBDPAIKANDB; // 0x18
	::System::String* NCKPFKMKPEP; // 0x28
	::System::String* KCJECNNCCFF; // 0x30
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x38
	::System::Int32 NPPBBECCKIG; // 0x40
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x44
	::System::Byte CNIAANMNOCF; // 0x45
	::System::Byte ACIOBDEBDNK; // 0x46
	::System::Byte _padding0[0x1];
	::System::Int32 NAGCOKGIJJE; // 0x48

	::System::Void _ctor(::ONGDBLHDJFI LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::ONGDBLHDJFI, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LAOEMLOLNEN__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* DFDIFHLPHKB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAOEMLOLNEN_DFDIFHLPHKB_OFFSET))(this);
	}

	::System::String* OEAHIFBMDNI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAOEMLOLNEN_OEAHIFBMDNI_OFFSET))(this);
	}

	::System::String* EKKCFHGFAGG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAOEMLOLNEN_EKKCFHGFAGG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LAOEMLOLNEN_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 KLAHIAMDBKI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAOEMLOLNEN_KLAHIAMDBKI_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAOEMLOLNEN_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LAOEMLOLNEN_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 DPPJFGDKCJH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAOEMLOLNEN_DPPJFGDKCJH_OFFSET))(this);
	}
};
