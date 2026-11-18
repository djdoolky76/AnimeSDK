#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NKGENBAGBLJ.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EDJJNMLHEID_BKPDFJHBNDN_OFFSET UNITYSDK_OFFSET(0x1778DBC0)
#define EDJJNMLHEID_CCEGGMHDHGE_OFFSET UNITYSDK_OFFSET(0x1778D8D0)
#define EDJJNMLHEID_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1778D7E0)
#define EDJJNMLHEID_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1778DBB0)
#define EDJJNMLHEID_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1778DBA0)
#define EDJJNMLHEID__CTOR_OFFSET UNITYSDK_OFFSET(0x1778D7D0)

inline static constexpr unsigned int EDJJNMLHEID_TypeDefinitionIndex = 13175;

class EDJJNMLHEID : public ::System::Object
{
public:
	::NKGENBAGBLJ HBDPAIKANDB; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* KGDNHAGLFKE; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Int32 BOLIENJALKP; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x34
	::System::Byte CNIAANMNOCF; // 0x35
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x36

	::System::Void _ctor(::NKGENBAGBLJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NKGENBAGBLJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + EDJJNMLHEID__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJJNMLHEID_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* CCEGGMHDHGE()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJJNMLHEID_CCEGGMHDHGE_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJJNMLHEID_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EDJJNMLHEID_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 BKPDFJHBNDN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJJNMLHEID_BKPDFJHBNDN_OFFSET))(this);
	}
};
