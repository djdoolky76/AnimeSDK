#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHFOOCNCPLG.h"
#include "unitysdk/OICFHEBNAEE.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BAMAJPKBIIH_ANBAHAHOPGA_OFFSET UNITYSDK_OFFSET(0x17A751C0)
#define BAMAJPKBIIH_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17A75450)
#define BAMAJPKBIIH_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17A75440)
#define BAMAJPKBIIH_HDOGEODPLIB_OFFSET UNITYSDK_OFFSET(0x17A75300)
#define BAMAJPKBIIH_JOFBFJNNMFG_OFFSET UNITYSDK_OFFSET(0x17A75540)
#define BAMAJPKBIIH_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17A75980)
#define BAMAJPKBIIH_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x17A75840)
#define BAMAJPKBIIH__CTOR_OFFSET UNITYSDK_OFFSET(0x17A751B0)

inline static constexpr unsigned int BAMAJPKBIIH_TypeDefinitionIndex = 17277;

class BAMAJPKBIIH : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::OICFHEBNAEE>* LEOEBNELFOM; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::JHFOOCNCPLG HBDPAIKANDB; // 0x20
	::System::Int32 PCMOJLNOPPM; // 0x30
	::System::Byte CNIAANMNOCF; // 0x34
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x35
	::System::Byte ACIOBDEBDNK; // 0x36
	::System::Byte _padding0[0x1];
	::System::Int32 MANIDALMCLP; // 0x38
	::System::Int32 JEEJMGFOBNA; // 0x3C
	::System::Int32 KMGHHKKLCIG; // 0x40

	::System::Void _ctor(::JHFOOCNCPLG LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JHFOOCNCPLG, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BAMAJPKBIIH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 ANBAHAHOPGA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAMAJPKBIIH_ANBAHAHOPGA_OFFSET))(this);
	}

	::System::Int32 HDOGEODPLIB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAMAJPKBIIH_HDOGEODPLIB_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BAMAJPKBIIH_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAMAJPKBIIH_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::OICFHEBNAEE>* JOFBFJNNMFG()
	{
		return ((::System::Collections::Generic::List_1<::OICFHEBNAEE>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAMAJPKBIIH_JOFBFJNNMFG_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAMAJPKBIIH_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BAMAJPKBIIH_LJANCIBECFG_OFFSET))(this);
	}
};
