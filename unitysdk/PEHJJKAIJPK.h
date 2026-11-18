#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EEGNCADIMBJ.h"
#include "unitysdk/HFLADMCGDOG.h"

#define PEHJJKAIJPK_FPJCBGDDECA_OFFSET UNITYSDK_OFFSET(0x13A8EA00)
#define PEHJJKAIJPK_LLHPAHAAHFJ_OFFSET UNITYSDK_OFFSET(0x13A8EA20)
#define PEHJJKAIJPK_LLLLILPELHE_OFFSET UNITYSDK_OFFSET(0x13A8EA10)
#define PEHJJKAIJPK__CTOR_OFFSET UNITYSDK_OFFSET(0x13A8E9F0)

inline static constexpr unsigned int PEHJJKAIJPK_TypeDefinitionIndex = 71200;

class PEHJJKAIJPK : public ::EEGNCADIMBJ
{
public:
	::System::Void _ctor(::HFLADMCGDOG CIAHAAKLADN)
	{
		return ((::System::Void(*)(::PVOID, ::HFLADMCGDOG))((::PBYTE)hIl2Cpp + PEHJJKAIJPK__CTOR_OFFSET))(this, CIAHAAKLADN);
	}

	::System::Boolean FPJCBGDDECA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PEHJJKAIJPK_FPJCBGDDECA_OFFSET))(this);
	}

	::System::Boolean LLLLILPELHE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PEHJJKAIJPK_LLLLILPELHE_OFFSET))(this);
	}

	::System::Boolean LLHPAHAAHFJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PEHJJKAIJPK_LLHPAHAAHFJ_OFFSET))(this);
	}
};
