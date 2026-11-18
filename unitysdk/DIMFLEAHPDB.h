#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HFOHLKOLPEI.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define DIMFLEAHPDB_AFIKPGHMNCI_OFFSET UNITYSDK_OFFSET(0x1950C9F0)
#define DIMFLEAHPDB_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1950CB50)
#define DIMFLEAHPDB_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1950CB40)
#define DIMFLEAHPDB_GMEJDBAJLEH_OFFSET UNITYSDK_OFFSET(0x1950C770)
#define DIMFLEAHPDB_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1950CB30)
#define DIMFLEAHPDB_OONJAIPLMJC_OFFSET UNITYSDK_OFFSET(0x1950C8B0)
#define DIMFLEAHPDB__CTOR_OFFSET UNITYSDK_OFFSET(0x1950C760)

inline static constexpr unsigned int DIMFLEAHPDB_TypeDefinitionIndex = 10186;

class DIMFLEAHPDB : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::HFOHLKOLPEI HBDPAIKANDB; // 0x18
	::System::Int32 GLDGHBHDIAG; // 0x28
	::System::Int32 EBIGFEABPIH; // 0x2C
	::System::Int32 JKEAJLNIHNP; // 0x30
	::System::Byte CNIAANMNOCF; // 0x34
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x35
	::System::Byte ACIOBDEBDNK; // 0x36

	::System::Void _ctor(::HFOHLKOLPEI LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HFOHLKOLPEI, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DIMFLEAHPDB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 GMEJDBAJLEH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMFLEAHPDB_GMEJDBAJLEH_OFFSET))(this);
	}

	::System::Int32 OONJAIPLMJC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMFLEAHPDB_OONJAIPLMJC_OFFSET))(this);
	}

	::System::Int32 AFIKPGHMNCI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMFLEAHPDB_AFIKPGHMNCI_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMFLEAHPDB_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DIMFLEAHPDB_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMFLEAHPDB_COFGIJJOFLP_OFFSET))(this);
	}
};
