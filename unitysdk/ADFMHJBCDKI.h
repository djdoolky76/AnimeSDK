#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IAHOAFJLJPL.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ADFMHJBCDKI_CNFHMEPBKCP_OFFSET UNITYSDK_OFFSET(0x1876B9C0)
#define ADFMHJBCDKI_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1876B8D0)
#define ADFMHJBCDKI_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1876B7B0)
#define ADFMHJBCDKI_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1876B660)
#define ADFMHJBCDKI_NKKAACLPBHM_OFFSET UNITYSDK_OFFSET(0x1876B7C0)
#define ADFMHJBCDKI_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1876B670)
#define ADFMHJBCDKI__CTOR_OFFSET UNITYSDK_OFFSET(0x1876B650)

inline static constexpr unsigned int ADFMHJBCDKI_TypeDefinitionIndex = 14642;

class ADFMHJBCDKI : public ::System::Object
{
public:
	::System::String* OMABOFFLDMN; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* DFLOHELOHIL; // 0x18
	::IAHOAFJLJPL HBDPAIKANDB; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::Int32 PCMOJLNOPPM; // 0x38
	::System::Byte CNIAANMNOCF; // 0x3C
	::System::Byte ACIOBDEBDNK; // 0x3D
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3E

	::System::Void _ctor(::IAHOAFJLJPL LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::IAHOAFJLJPL, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + ADFMHJBCDKI__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ADFMHJBCDKI_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ADFMHJBCDKI_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ADFMHJBCDKI_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* NKKAACLPBHM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADFMHJBCDKI_NKKAACLPBHM_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADFMHJBCDKI_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* CNFHMEPBKCP()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADFMHJBCDKI_CNFHMEPBKCP_OFFSET))(this);
	}
};
