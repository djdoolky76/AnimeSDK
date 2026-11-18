#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KFABPLBMCHI.h"

#define GCJMBIOBFJN__CTOR_OFFSET UNITYSDK_OFFSET(0x15F11910)

inline static constexpr unsigned int GCJMBIOBFJN_TypeDefinitionIndex = 85533;

class GCJMBIOBFJN : public ::KFABPLBMCHI
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCJMBIOBFJN__CTOR_OFFSET))(this);
	}
};
