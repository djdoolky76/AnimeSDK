#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AMEJINLIOOH.h"
#include "unitysdk/NHHCKBPBKOP.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BMBOFCCAHBC_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19F225F0)
#define BMBOFCCAHBC_ENJENAJGHFI_OFFSET UNITYSDK_OFFSET(0x19F224E0)
#define BMBOFCCAHBC_FKOPDCHIGNK_OFFSET UNITYSDK_OFFSET(0x19F226E0)
#define BMBOFCCAHBC_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19F224D0)
#define BMBOFCCAHBC_HJFCIELMJPA_OFFSET UNITYSDK_OFFSET(0x19F22390)
#define BMBOFCCAHBC_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19F22380)
#define BMBOFCCAHBC_MNBGAIEPADE_OFFSET UNITYSDK_OFFSET(0x19F22270)
#define BMBOFCCAHBC__CTOR_OFFSET UNITYSDK_OFFSET(0x19F22260)

inline static constexpr unsigned int BMBOFCCAHBC_TypeDefinitionIndex = 15814;

class BMBOFCCAHBC : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::NHHCKBPBKOP HBDPAIKANDB; // 0x18
	::System::String* NFFPNFDEDBN; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* EAOGMCBNCCC; // 0x30
	::System::String* OMDLAHBLCAM; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x40
	::System::Byte CNIAANMNOCF; // 0x41
	::System::Byte ACIOBDEBDNK; // 0x42
	::System::Byte _padding0[0x1];
	::AMEJINLIOOH OCGIOHPBCIK; // 0x44
	::System::Int32 PCMOJLNOPPM; // 0x48

	::System::Void _ctor(::NHHCKBPBKOP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NHHCKBPBKOP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BMBOFCCAHBC__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* MNBGAIEPADE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBOFCCAHBC_MNBGAIEPADE_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBOFCCAHBC_LJANCIBECFG_OFFSET))(this);
	}

	::AMEJINLIOOH HJFCIELMJPA()
	{
		return ((::AMEJINLIOOH(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBOFCCAHBC_HJFCIELMJPA_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BMBOFCCAHBC_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* ENJENAJGHFI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBOFCCAHBC_ENJENAJGHFI_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBOFCCAHBC_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* FKOPDCHIGNK()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBOFCCAHBC_FKOPDCHIGNK_OFFSET))(this);
	}
};
