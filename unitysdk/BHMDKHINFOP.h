#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EPHBGKMGEFF.h"
#include "unitysdk/HBLNGFMGFAG.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BHMDKHINFOP_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17A7C3D0)
#define BHMDKHINFOP_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17A7C600)
#define BHMDKHINFOP_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17A7C610)
#define BHMDKHINFOP_MEMJDFNMPKB_OFFSET UNITYSDK_OFFSET(0x17A7C620)
#define BHMDKHINFOP_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x17A7C4C0)
#define BHMDKHINFOP__CTOR_OFFSET UNITYSDK_OFFSET(0x17A7C3C0)

inline static constexpr unsigned int BHMDKHINFOP_TypeDefinitionIndex = 14515;

class BHMDKHINFOP : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* FFMEAKGOHIP; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* EILKNCDOOHO; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::String* NINJEMLLDGI; // 0x28
	::System::String* JMMCAEJMIOG; // 0x30
	::HBLNGFMGFAG HBDPAIKANDB; // 0x38
	::System::Collections::Generic::List_1<::EPHBGKMGEFF>* OKHJPELELMC; // 0x48
	::System::Collections::Generic::List_1<::System::Int32>* POOCCNGCOPB; // 0x50
	::System::Collections::Generic::List_1<::System::Int32>* HOFKCDECGBL; // 0x58
	::System::Int32 PCMOJLNOPPM; // 0x60
	::System::Byte GCHCDJCFCEG; // 0x64
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x65
	::System::Byte ACIOBDEBDNK; // 0x66
	::System::Byte CNIAANMNOCF; // 0x67
	::System::Int32 KNDBNBCDLKA; // 0x68

	::System::Void _ctor(::HBLNGFMGFAG LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HBLNGFMGFAG, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BHMDKHINFOP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHMDKHINFOP_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHMDKHINFOP_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BHMDKHINFOP_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BHMDKHINFOP_LJANCIBECFG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::EPHBGKMGEFF>* MEMJDFNMPKB()
	{
		return ((::System::Collections::Generic::List_1<::EPHBGKMGEFF>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHMDKHINFOP_MEMJDFNMPKB_OFFSET))(this);
	}
};
