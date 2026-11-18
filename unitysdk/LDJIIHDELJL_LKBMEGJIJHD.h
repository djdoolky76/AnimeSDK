#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define LDJIIHDELJL_LKBMEGJIJHD_BNHIDAPEHNL_OFFSET UNITYSDK_OFFSET(0x15BD0B70)
#define LDJIIHDELJL_LKBMEGJIJHD_MAKNEHPPFFN_OFFSET UNITYSDK_OFFSET(0x15BD0C10)
#define LDJIIHDELJL_LKBMEGJIJHD__CTOR_OFFSET UNITYSDK_OFFSET(0x15BD0B60)

inline static constexpr unsigned int LDJIIHDELJL_LKBMEGJIJHD_TypeDefinitionIndex = 59101;

class LDJIIHDELJL_LKBMEGJIJHD : public ::System::Object
{
public:
	::HOCDHMEPPEG GPELAKKMLBG; // 0x10
	::HOCDHMEPPEG ABMKEFPKPMD; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJIIHDELJL_LKBMEGJIJHD__CTOR_OFFSET))(this);
	}

	::System::Void BNHIDAPEHNL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJIIHDELJL_LKBMEGJIJHD_BNHIDAPEHNL_OFFSET))(this);
	}

	::System::Void MAKNEHPPFFN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJIIHDELJL_LKBMEGJIJHD_MAKNEHPPFFN_OFFSET))(this);
	}
};
