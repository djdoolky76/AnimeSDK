#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IEFCEGHFEJK;

#define DPCEONDGPMB_ILLBKMOHLMO_COMPARE_OFFSET UNITYSDK_OFFSET(0xF9A01A0)
#define DPCEONDGPMB_ILLBKMOHLMO__CTOR_OFFSET UNITYSDK_OFFSET(0xF9A0890)

inline static constexpr unsigned int DPCEONDGPMB_ILLBKMOHLMO_TypeDefinitionIndex = 91706;

class DPCEONDGPMB_ILLBKMOHLMO : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPCEONDGPMB_ILLBKMOHLMO__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::IEFCEGHFEJK* HAAEBCOBKFF, ::IEFCEGHFEJK* BFMMEICFNCD)
	{
		return ((::System::Int32(*)(::PVOID, ::IEFCEGHFEJK*, ::IEFCEGHFEJK*))((::PBYTE)hIl2Cpp + DPCEONDGPMB_ILLBKMOHLMO_COMPARE_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}
};
