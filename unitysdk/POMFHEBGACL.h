#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KDCBGHNPDIM.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define POMFHEBGACL_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1FC24840)
#define POMFHEBGACL_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1FC24830)
#define POMFHEBGACL_IELDFGKFKLL_OFFSET UNITYSDK_OFFSET(0x1FC24A80)
#define POMFHEBGACL_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1FC24A70)
#define POMFHEBGACL_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1FC24930)
#define POMFHEBGACL__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC24820)

inline static constexpr unsigned int POMFHEBGACL_TypeDefinitionIndex = 10407;

class POMFHEBGACL : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::KDCBGHNPDIM HBDPAIKANDB; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* CLDHIGKLCFI; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x30
	::System::Byte CNIAANMNOCF; // 0x31
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x34

	::System::Void _ctor(::KDCBGHNPDIM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KDCBGHNPDIM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + POMFHEBGACL__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + POMFHEBGACL_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POMFHEBGACL_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POMFHEBGACL_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + POMFHEBGACL_LJANCIBECFG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::String*>* IELDFGKFKLL()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + POMFHEBGACL_IELDFGKFKLL_OFFSET))(this);
	}
};
