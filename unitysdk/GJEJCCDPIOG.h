#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EEGNCADIMBJ.h"
#include "unitysdk/HFLADMCGDOG.h"

#define GJEJCCDPIOG_AIEDCLFOKBH_OFFSET UNITYSDK_OFFSET(0x149D9C30)
#define GJEJCCDPIOG_FPJCBGDDECA_OFFSET UNITYSDK_OFFSET(0x149D9C20)
#define GJEJCCDPIOG__CTOR_OFFSET UNITYSDK_OFFSET(0x149D9C10)

inline static constexpr unsigned int GJEJCCDPIOG_TypeDefinitionIndex = 85473;

class GJEJCCDPIOG : public ::EEGNCADIMBJ
{
public:
	::System::Void _ctor(::HFLADMCGDOG CIAHAAKLADN)
	{
		return ((::System::Void(*)(::PVOID, ::HFLADMCGDOG))((::PBYTE)hIl2Cpp + GJEJCCDPIOG__CTOR_OFFSET))(this, CIAHAAKLADN);
	}

	::System::Boolean FPJCBGDDECA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GJEJCCDPIOG_FPJCBGDDECA_OFFSET))(this);
	}

	::System::Boolean AIEDCLFOKBH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GJEJCCDPIOG_AIEDCLFOKBH_OFFSET))(this);
	}
};
