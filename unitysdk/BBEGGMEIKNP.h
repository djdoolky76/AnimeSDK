#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HGNPHBLJLDD.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BBEGGMEIKNP_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x18774750)
#define BBEGGMEIKNP_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x18774980)
#define BBEGGMEIKNP_FOCNOCFGOAE_OFFSET UNITYSDK_OFFSET(0x18774840)
#define BBEGGMEIKNP_JNLCFJDHFDB_OFFSET UNITYSDK_OFFSET(0x18774480)
#define BBEGGMEIKNP_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x18774470)
#define BBEGGMEIKNP__CTOR_OFFSET UNITYSDK_OFFSET(0x18774460)

inline static constexpr unsigned int BBEGGMEIKNP_TypeDefinitionIndex = 16164;

class BBEGGMEIKNP : public ::System::Object
{
public:
	::HGNPHBLJLDD HBDPAIKANDB; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* LIMKGBFDLDA; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Byte CNIAANMNOCF; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x31
	::System::Byte ACIOBDEBDNK; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 OIPBBKIJIDG; // 0x34
	::System::Int32 PCMOJLNOPPM; // 0x38

	::System::Void _ctor(::HGNPHBLJLDD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HGNPHBLJLDD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BBEGGMEIKNP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BBEGGMEIKNP_LJANCIBECFG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* JNLCFJDHFDB()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBEGGMEIKNP_JNLCFJDHFDB_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBEGGMEIKNP_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 FOCNOCFGOAE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBEGGMEIKNP_FOCNOCFGOAE_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BBEGGMEIKNP_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
