#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NACEPHIIJJA_KMNOBKBBPJD_IMMCFDLABBI_OFFSET UNITYSDK_OFFSET(0x18F88E40)
#define NACEPHIIJJA_KMNOBKBBPJD__CTOR_OFFSET UNITYSDK_OFFSET(0x18F88E30)

inline static constexpr unsigned int NACEPHIIJJA_KMNOBKBBPJD_TypeDefinitionIndex = 60155;

class NACEPHIIJJA_KMNOBKBBPJD : public ::System::Object
{
public:
	::System::Int32 MGMDLMBEDJF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NACEPHIIJJA_KMNOBKBBPJD__CTOR_OFFSET))(this);
	}

	::System::Boolean IMMCFDLABBI(::System::Int32 HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NACEPHIIJJA_KMNOBKBBPJD_IMMCFDLABBI_OFFSET))(this, HAAEBCOBKFF);
	}
};
