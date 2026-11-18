#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NOJIKBHAJNJ.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LNLINOGBGAB_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B30C910)
#define LNLINOGBGAB_FCCKGMELKGG_OFFSET UNITYSDK_OFFSET(0x1B30C3B0)
#define LNLINOGBGAB_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B30C7C0)
#define LNLINOGBGAB_GIGBMDPMFGL_OFFSET UNITYSDK_OFFSET(0x1B30C680)
#define LNLINOGBGAB_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B30CA00)
#define LNLINOGBGAB_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1B30C7D0)
#define LNLINOGBGAB__CTOR_OFFSET UNITYSDK_OFFSET(0x1B30C3A0)

inline static constexpr unsigned int LNLINOGBGAB_TypeDefinitionIndex = 14652;

class LNLINOGBGAB : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* JLEJEPGDOFB; // 0x10
	::NOJIKBHAJNJ HBDPAIKANDB; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Int32 GBEKOLKHGEI; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x34
	::System::Byte ACIOBDEBDNK; // 0x35
	::System::Byte CNIAANMNOCF; // 0x36
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x38

	::System::Void _ctor(::NOJIKBHAJNJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NOJIKBHAJNJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LNLINOGBGAB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::System::Int32>* FCCKGMELKGG()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNLINOGBGAB_FCCKGMELKGG_OFFSET))(this);
	}

	::System::Int32 GIGBMDPMFGL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNLINOGBGAB_GIGBMDPMFGL_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LNLINOGBGAB_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNLINOGBGAB_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNLINOGBGAB_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LNLINOGBGAB_LJANCIBECFG_OFFSET))(this);
	}
};
