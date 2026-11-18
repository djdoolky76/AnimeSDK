#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JBBIDJHFPFJ;

#define MGOONFEBKJC_COMPARE_OFFSET UNITYSDK_OFFSET(0x14DE4990)
#define MGOONFEBKJC__CTOR_OFFSET UNITYSDK_OFFSET(0x14DE4A10)

inline static constexpr unsigned int MGOONFEBKJC_TypeDefinitionIndex = 69842;

class MGOONFEBKJC : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGOONFEBKJC__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::JBBIDJHFPFJ* FFKBEGIHIGG, ::JBBIDJHFPFJ* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::JBBIDJHFPFJ*, ::JBBIDJHFPFJ*))((::PBYTE)hIl2Cpp + MGOONFEBKJC_COMPARE_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
