#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EIENLLEJCMD.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MONCGGJFIFG_CIIHCPIHIBB_OFFSET UNITYSDK_OFFSET(0x1C1821D0)
#define MONCGGJFIFG_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1C182730)
#define MONCGGJFIFG_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1C181EF0)
#define MONCGGJFIFG_HHGGCGEEEOB_OFFSET UNITYSDK_OFFSET(0x1C182310)
#define MONCGGJFIFG_LCGEBMCJELO_OFFSET UNITYSDK_OFFSET(0x1C181F00)
#define MONCGGJFIFG_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1C182720)
#define MONCGGJFIFG_OHKPIDKGKME_OFFSET UNITYSDK_OFFSET(0x1C182450)
#define MONCGGJFIFG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C181EE0)

inline static constexpr unsigned int MONCGGJFIFG_TypeDefinitionIndex = 16554;

class MONCGGJFIFG : public ::System::Object
{
public:
	::EIENLLEJCMD HBDPAIKANDB; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* JDGFJLFJHCH; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* CGMKEHLEPPC; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::Int32 IMEJBDHMBHE; // 0x38
	::System::Int32 GGBKEHJGEMO; // 0x3C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x40
	::System::Byte ACIOBDEBDNK; // 0x41
	::System::Byte CNIAANMNOCF; // 0x42

	::System::Void _ctor(::EIENLLEJCMD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::EIENLLEJCMD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MONCGGJFIFG__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONCGGJFIFG_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::System::Int32>* LCGEBMCJELO()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONCGGJFIFG_LCGEBMCJELO_OFFSET))(this);
	}

	::System::Int32 CIIHCPIHIBB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONCGGJFIFG_CIIHCPIHIBB_OFFSET))(this);
	}

	::System::Int32 HHGGCGEEEOB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONCGGJFIFG_HHGGCGEEEOB_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* OHKPIDKGKME()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONCGGJFIFG_OHKPIDKGKME_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONCGGJFIFG_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONCGGJFIFG_COFGIJJOFLP_OFFSET))(this);
	}
};
