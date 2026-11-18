#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMLFKAKNAEK.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EEJMHAAKEMK_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A5989C0)
#define EEJMHAAKEMK_DPFOEONNIJE_OFFSET UNITYSDK_OFFSET(0x1A598EE0)
#define EEJMHAAKEMK_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A598AB0)
#define EEJMHAAKEMK_IJHIJADBKHB_OFFSET UNITYSDK_OFFSET(0x1A598C00)
#define EEJMHAAKEMK_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A598ED0)
#define EEJMHAAKEMK_PONNBNAMMAB_OFFSET UNITYSDK_OFFSET(0x1A598AC0)
#define EEJMHAAKEMK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5989B0)

inline static constexpr unsigned int EEJMHAAKEMK_TypeDefinitionIndex = 11120;

class EEJMHAAKEMK : public ::System::Object
{
public:
	::System::String* GGFECJNJJGA; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::BMLFKAKNAEK HBDPAIKANDB; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* KFEGIJFBKGI; // 0x30
	::System::Int32 DJLOBJOPBEF; // 0x38
	::System::Boolean LGAACHMHHLD; // 0x3C
	::System::Byte CNIAANMNOCF; // 0x3D
	::System::Byte ACIOBDEBDNK; // 0x3E
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3F
	::System::Int32 AFHOFEIIFPG; // 0x40
	::System::Int32 GHGCMIPIJNA; // 0x44
	::System::Int32 IMAFCDDJOME; // 0x48

	::System::Void _ctor(::BMLFKAKNAEK LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::BMLFKAKNAEK, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + EEJMHAAKEMK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEJMHAAKEMK_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EEJMHAAKEMK_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 PONNBNAMMAB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEJMHAAKEMK_PONNBNAMMAB_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* IJHIJADBKHB()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEJMHAAKEMK_IJHIJADBKHB_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EEJMHAAKEMK_LJANCIBECFG_OFFSET))(this);
	}

	::System::Boolean DPFOEONNIJE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EEJMHAAKEMK_DPFOEONNIJE_OFFSET))(this);
	}
};
