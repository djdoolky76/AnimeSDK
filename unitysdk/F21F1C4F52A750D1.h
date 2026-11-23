#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E0B58AD87D1F143C/E602D86BC88653D1.h"
#include "unitysdk/System/Object.h"

class FD94128446C24CE9;

#define F21F1C4F52A750D1_EC05EA2280959691_OFFSET UNITYSDK_OFFSET(0x165D460)
#define F21F1C4F52A750D1__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F21F1C4F52A750D1_TypeDefinitionIndex = 8308;

class F21F1C4F52A750D1 : public ::System::Object
{
public:
	::FD94128446C24CE9* E5F90EB2C548680D; // 0x10

	::E0B58AD87D1F143C::E602D86BC88653D1 EC05EA2280959691()
	{
		return ((::E0B58AD87D1F143C::E602D86BC88653D1(*)(::PVOID))((::PBYTE)hIl2Cpp + F21F1C4F52A750D1_EC05EA2280959691_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F21F1C4F52A750D1__CTOR_OFFSET))(this);
	}
};
