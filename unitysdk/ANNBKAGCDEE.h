#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EEGNCADIMBJ.h"
#include "unitysdk/HFLADMCGDOG.h"

#define ANNBKAGCDEE_FPJCBGDDECA_OFFSET UNITYSDK_OFFSET(0xF770250)
#define ANNBKAGCDEE_HKPPMAMDIDJ_OFFSET UNITYSDK_OFFSET(0xF770260)
#define ANNBKAGCDEE__CTOR_OFFSET UNITYSDK_OFFSET(0xF770240)

inline static constexpr unsigned int ANNBKAGCDEE_TypeDefinitionIndex = 49420;

class ANNBKAGCDEE : public ::EEGNCADIMBJ
{
public:
	::System::Void _ctor(::HFLADMCGDOG CIAHAAKLADN)
	{
		return ((::System::Void(*)(::PVOID, ::HFLADMCGDOG))((::PBYTE)hIl2Cpp + ANNBKAGCDEE__CTOR_OFFSET))(this, CIAHAAKLADN);
	}

	::System::Boolean FPJCBGDDECA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNBKAGCDEE_FPJCBGDDECA_OFFSET))(this);
	}

	::System::Boolean HKPPMAMDIDJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNBKAGCDEE_HKPPMAMDIDJ_OFFSET))(this);
	}
};
