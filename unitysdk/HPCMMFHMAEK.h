#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MMPDPBMKKNA.h"
#include "unitysdk/IPAJKKJCBLD.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define HPCMMFHMAEK_AAIBMJBJHEB_OFFSET UNITYSDK_OFFSET(0x1B1274C0)
#define HPCMMFHMAEK_BFBMPBJBOBL_OFFSET UNITYSDK_OFFSET(0x1B127370)
#define HPCMMFHMAEK_CILBLLLOKMA_OFFSET UNITYSDK_OFFSET(0x1B1274D0)
#define HPCMMFHMAEK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B127240)

inline static constexpr unsigned int HPCMMFHMAEK_TypeDefinitionIndex = 14928;

class HPCMMFHMAEK : public ::MMPDPBMKKNA
{
public:
	::System::Single FMIHNMEBOHG; // 0x50
	::System::Single _IPNLCGNOKPP_k__BackingField; // 0x54
	::System::Single JFFHPDFFEKP; // 0x58
	::System::Single PLNHDBDCKAL; // 0x5C
	::System::Single CIJJMMOCBIK; // 0x60

	::System::Void _ctor(::IPAJKKJCBLD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::IPAJKKJCBLD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HPCMMFHMAEK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	static ::System::Boolean BFBMPBJBOBL(::System::String* JPAPILMDKEA, ::System::Single& GDBANLBHNJK, ::System::Single& DNFNKBNBJHM)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + HPCMMFHMAEK_BFBMPBJBOBL_OFFSET))(JPAPILMDKEA, GDBANLBHNJK, DNFNKBNBJHM);
	}

	::System::Single AAIBMJBJHEB()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCMMFHMAEK_AAIBMJBJHEB_OFFSET))(this);
	}

	::System::Void CILBLLLOKMA(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HPCMMFHMAEK_CILBLLLOKMA_OFFSET))(this, EGEGIMGMJHN);
	}
};
