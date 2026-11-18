#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KFMJAFCKBKN;
class MonoUITableScrollV2;

#define KFMJAFCKBKN_NDOJJFPBBLL_LKFNBCBGMLG_OFFSET UNITYSDK_OFFSET(0x157E8F50)
#define KFMJAFCKBKN_NDOJJFPBBLL__CTOR_OFFSET UNITYSDK_OFFSET(0x157E8F40)

inline static constexpr unsigned int KFMJAFCKBKN_NDOJJFPBBLL_TypeDefinitionIndex = 83617;

class KFMJAFCKBKN_NDOJJFPBBLL : public ::System::Object
{
public:
	::KFMJAFCKBKN* KLHPEBKNIFB; // 0x10
	::MonoUITableScrollV2* HFNALKNHFEC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFMJAFCKBKN_NDOJJFPBBLL__CTOR_OFFSET))(this);
	}

	::System::Void LKFNBCBGMLG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFMJAFCKBKN_NDOJJFPBBLL_LKFNBCBGMLG_OFFSET))(this);
	}
};
