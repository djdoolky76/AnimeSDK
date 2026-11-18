#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FPBOLBNCDIP;

#define GFOPJNFHPOD_CGADIPLIANC_OFFSET UNITYSDK_OFFSET(0x15CE1B10)
#define GFOPJNFHPOD__CTOR_OFFSET UNITYSDK_OFFSET(0x15CE1B00)

inline static constexpr unsigned int GFOPJNFHPOD_TypeDefinitionIndex = 91014;

class GFOPJNFHPOD : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFOPJNFHPOD__CTOR_OFFSET))(this);
	}

	static ::System::Boolean CGADIPLIANC(::FPBOLBNCDIP* JAHEDLAAHJJ)
	{
		return ((::System::Boolean(*)(::FPBOLBNCDIP*))((::PBYTE)hIl2Cpp + GFOPJNFHPOD_CGADIPLIANC_OFFSET))(JAHEDLAAHJJ);
	}
};
