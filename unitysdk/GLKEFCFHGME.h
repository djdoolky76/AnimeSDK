#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PICPDEPMJGA.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GLKEFCFHGME_BADIFLFDNCO_OFFSET UNITYSDK_OFFSET(0x193387A0)
#define GLKEFCFHGME_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x193386A0)
#define GLKEFCFHGME_DHBJJJOFODO_OFFSET UNITYSDK_OFFSET(0x193388E0)
#define GLKEFCFHGME_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19338790)
#define GLKEFCFHGME_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19338BB0)
#define GLKEFCFHGME__CTOR_OFFSET UNITYSDK_OFFSET(0x19338690)

inline static constexpr unsigned int GLKEFCFHGME_TypeDefinitionIndex = 16431;

class GLKEFCFHGME : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* NCNKMPDKGAF; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::PICPDEPMJGA HBDPAIKANDB; // 0x20
	::System::Int32 CKEONIEFDCD; // 0x30
	::System::Byte CNIAANMNOCF; // 0x34
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x35
	::System::Byte ACIOBDEBDNK; // 0x36

	::System::Void _ctor(::PICPDEPMJGA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::PICPDEPMJGA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + GLKEFCFHGME__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLKEFCFHGME_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GLKEFCFHGME_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 BADIFLFDNCO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLKEFCFHGME_BADIFLFDNCO_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* DHBJJJOFODO()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLKEFCFHGME_DHBJJJOFODO_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GLKEFCFHGME_LJANCIBECFG_OFFSET))(this);
	}
};
