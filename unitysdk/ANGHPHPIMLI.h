#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPHAOBDJFOK.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ANGHPHPIMLI_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x18772F70)
#define ANGHPHPIMLI_EBAMMCMGGIO_OFFSET UNITYSDK_OFFSET(0x18772C90)
#define ANGHPHPIMLI_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x18773060)
#define ANGHPHPIMLI_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x18772F60)
#define ANGHPHPIMLI_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x18772B50)
#define ANGHPHPIMLI__CTOR_OFFSET UNITYSDK_OFFSET(0x18772B40)

inline static constexpr unsigned int ANGHPHPIMLI_TypeDefinitionIndex = 11420;

class ANGHPHPIMLI : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::NPHAOBDJFOK HBDPAIKANDB; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* KNNCMKFOAFI; // 0x28
	::System::Int32 PCMOJLNOPPM; // 0x30
	::System::Byte CNIAANMNOCF; // 0x34
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x35
	::System::Byte ACIOBDEBDNK; // 0x36

	::System::Void _ctor(::NPHAOBDJFOK LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NPHAOBDJFOK, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + ANGHPHPIMLI__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANGHPHPIMLI_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* EBAMMCMGGIO()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANGHPHPIMLI_EBAMMCMGGIO_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANGHPHPIMLI_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANGHPHPIMLI_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ANGHPHPIMLI_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
