#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NGJFPALIBJF.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define NBDDMGLNLNL_CMHLJGNLOPP_OFFSET UNITYSDK_OFFSET(0x1734E810)
#define NBDDMGLNLNL_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1734E710)
#define NBDDMGLNLNL_DCAMONJGNHG_OFFSET UNITYSDK_OFFSET(0x1734E5D0)
#define NBDDMGLNLNL_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1734E800)
#define NBDDMGLNLNL_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1734E5C0)
#define NBDDMGLNLNL__CTOR_OFFSET UNITYSDK_OFFSET(0x1734E5B0)

inline static constexpr unsigned int NBDDMGLNLNL_TypeDefinitionIndex = 17200;

class NBDDMGLNLNL : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::NGJFPALIBJF HBDPAIKANDB; // 0x18
	::System::Int32 IGPDHPNPPAI; // 0x28
	::System::Int32 MNBNMLDLKCL; // 0x2C
	::System::Byte ACIOBDEBDNK; // 0x30
	::System::Byte CNIAANMNOCF; // 0x31
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x32

	::System::Void _ctor(::NGJFPALIBJF LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NGJFPALIBJF, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NBDDMGLNLNL__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBDDMGLNLNL_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 DCAMONJGNHG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBDDMGLNLNL_DCAMONJGNHG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBDDMGLNLNL_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NBDDMGLNLNL_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 CMHLJGNLOPP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBDDMGLNLNL_CMHLJGNLOPP_OFFSET))(this);
	}
};
