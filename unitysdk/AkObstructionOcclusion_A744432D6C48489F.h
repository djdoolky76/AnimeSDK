#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKOBSTRUCTIONOCCLUSION_A744432D6C48489F_FD792C24FE49920B_OFFSET UNITYSDK_OFFSET(0x2928F00)
#define AKOBSTRUCTIONOCCLUSION_A744432D6C48489F__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AkObstructionOcclusion_A744432D6C48489F_TypeDefinitionIndex = 20478;

class AkObstructionOcclusion_A744432D6C48489F : public ::System::Object
{
public:
	::System::Single AACF09DD318E6D7A; // 0x10
	::System::Single AD007A07A9D88446; // 0x14

	::System::Boolean FD792C24FE49920B(::System::Single F5C459E75D3AFADA)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKOBSTRUCTIONOCCLUSION_A744432D6C48489F_FD792C24FE49920B_OFFSET))(this, F5C459E75D3AFADA);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBSTRUCTIONOCCLUSION_A744432D6C48489F__CTOR_OFFSET))(this);
	}
};
