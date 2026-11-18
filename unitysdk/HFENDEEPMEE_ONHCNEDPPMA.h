#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HFENDEEPMEE;

#define HFENDEEPMEE_ONHCNEDPPMA_BPPKOGNKODB_OFFSET UNITYSDK_OFFSET(0x17AF2D00)
#define HFENDEEPMEE_ONHCNEDPPMA_HFCFLPDJHFP_OFFSET UNITYSDK_OFFSET(0x17AF2C50)
#define HFENDEEPMEE_ONHCNEDPPMA__CTOR_OFFSET UNITYSDK_OFFSET(0x17AF2C40)

inline static constexpr unsigned int HFENDEEPMEE_ONHCNEDPPMA_TypeDefinitionIndex = 85532;

class HFENDEEPMEE_ONHCNEDPPMA : public ::System::Object
{
public:
	::HFENDEEPMEE* KLHPEBKNIFB; // 0x10
	::System::Boolean JCJKNJKMCMA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFENDEEPMEE_ONHCNEDPPMA__CTOR_OFFSET))(this);
	}

	::System::Void HFCFLPDJHFP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFENDEEPMEE_ONHCNEDPPMA_HFCFLPDJHFP_OFFSET))(this);
	}

	::System::Void BPPKOGNKODB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFENDEEPMEE_ONHCNEDPPMA_BPPKOGNKODB_OFFSET))(this);
	}
};
