#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KJFOGJDLBEH.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FNGPNCMBDPL_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x193252A0)
#define FNGPNCMBDPL_DBMDNLFLOHC_OFFSET UNITYSDK_OFFSET(0x19325150)
#define FNGPNCMBDPL_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19325290)
#define FNGPNCMBDPL_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19325140)
#define FNGPNCMBDPL_MHKODBDMCPB_OFFSET UNITYSDK_OFFSET(0x19324C20)
#define FNGPNCMBDPL_NBCFMMIBLMC_OFFSET UNITYSDK_OFFSET(0x19325030)
#define FNGPNCMBDPL_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x19324EF0)
#define FNGPNCMBDPL__CTOR_OFFSET UNITYSDK_OFFSET(0x19324C10)

inline static constexpr unsigned int FNGPNCMBDPL_TypeDefinitionIndex = 9355;

class FNGPNCMBDPL : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* ILDBGAKKMIH; // 0x18
	::KJFOGJDLBEH HBDPAIKANDB; // 0x20
	::System::String* HJMILKGFHAE; // 0x30
	::System::Int32 PCMOJLNOPPM; // 0x38
	::System::Int32 MNJDNENLCIH; // 0x3C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x40
	::System::Byte CNIAANMNOCF; // 0x41
	::System::Byte ACIOBDEBDNK; // 0x42

	::System::Void _ctor(::KJFOGJDLBEH LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KJFOGJDLBEH, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + FNGPNCMBDPL__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::System::Int32>* MHKODBDMCPB()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNGPNCMBDPL_MHKODBDMCPB_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNGPNCMBDPL_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::String* NBCFMMIBLMC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNGPNCMBDPL_NBCFMMIBLMC_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FNGPNCMBDPL_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 DBMDNLFLOHC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNGPNCMBDPL_DBMDNLFLOHC_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FNGPNCMBDPL_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNGPNCMBDPL_COFGIJJOFLP_OFFSET))(this);
	}
};
