#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DNBIIEFECIE.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EIJIBCACGHN_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B9B7830)
#define EIJIBCACGHN_FIGNOOEDDNC_OFFSET UNITYSDK_OFFSET(0x1B9B7940)
#define EIJIBCACGHN_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B9B7930)
#define EIJIBCACGHN_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B9B7920)
#define EIJIBCACGHN__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9B7820)

inline static constexpr unsigned int EIJIBCACGHN_TypeDefinitionIndex = 15511;

class EIJIBCACGHN : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* PCCPGAMLEMB; // 0x10
	::DNBIIEFECIE HBDPAIKANDB; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Int32 PCMOJLNOPPM; // 0x30
	::System::Byte CNIAANMNOCF; // 0x34
	::System::Byte ACIOBDEBDNK; // 0x35
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x36

	::System::Void _ctor(::DNBIIEFECIE LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DNBIIEFECIE, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + EIJIBCACGHN__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIJIBCACGHN_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EIJIBCACGHN_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EIJIBCACGHN_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::System::Int32>* FIGNOOEDDNC()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIJIBCACGHN_FIGNOOEDDNC_OFFSET))(this);
	}
};
