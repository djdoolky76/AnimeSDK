#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"

#define KFHDPNNJGFE_ANICNAIBAFF_BNHIDAPEHNL_OFFSET UNITYSDK_OFFSET(0x1994E180)
#define KFHDPNNJGFE_ANICNAIBAFF_MAKNEHPPFFN_OFFSET UNITYSDK_OFFSET(0x1994E140)
#define KFHDPNNJGFE_ANICNAIBAFF__CTOR_OFFSET UNITYSDK_OFFSET(0x1994E120)

inline static constexpr unsigned int KFHDPNNJGFE_ANICNAIBAFF_TypeDefinitionIndex = 50809;

class KFHDPNNJGFE_ANICNAIBAFF : public ::System::Object
{
public:
	::Foundation::ViewObject::ViewObjectHandle OMPHGGCEIBD; // 0x10
	::System::Int32 GJNNGADDJNN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFHDPNNJGFE_ANICNAIBAFF__CTOR_OFFSET))(this);
	}

	::System::Void MAKNEHPPFFN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFHDPNNJGFE_ANICNAIBAFF_MAKNEHPPFFN_OFFSET))(this);
	}

	::System::Void BNHIDAPEHNL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFHDPNNJGFE_ANICNAIBAFF_BNHIDAPEHNL_OFFSET))(this);
	}
};
