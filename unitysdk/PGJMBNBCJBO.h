#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define PGJMBNBCJBO_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x7E08F0)

inline static constexpr unsigned int PGJMBNBCJBO_TypeDefinitionIndex = 70909;

struct alignas(4) PGJMBNBCJBO
{
	::System::Single OJLNDNBCFMD; // 0x10
	::System::Boolean JNPHJODJMMN; // 0x14
	::System::Boolean AGBMCJKLDIM; // 0x15
	::System::Boolean FMBANHEJKPC; // 0x16
	::System::Boolean PGFOANDPKCF; // 0x17

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGJMBNBCJBO_NPOLNFDBOOD_OFFSET))(this);
	}
};
