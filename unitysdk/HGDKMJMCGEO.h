#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ECGOJIAGHCM.h"
#include "unitysdk/System/Object.h"

#define HGDKMJMCGEO__CTOR_OFFSET UNITYSDK_OFFSET(0x15DA7490)

inline static constexpr unsigned int HGDKMJMCGEO_TypeDefinitionIndex = 86228;

class HGDKMJMCGEO : public ::System::Object
{
public:
	::System::Int32 KAFBLPONMMK; // 0x10
	::ECGOJIAGHCM JKBLDFBGBPK; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGDKMJMCGEO__CTOR_OFFSET))(this);
	}
};
