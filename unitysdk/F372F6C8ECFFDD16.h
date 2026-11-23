#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E937733544524006.h"

class FBF5DC1AB751F82C;

#define F372F6C8ECFFDD16_B331B121C62F2740_OFFSET UNITYSDK_OFFSET(0x208D490)
#define F372F6C8ECFFDD16__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF5C40)

inline static constexpr unsigned int F372F6C8ECFFDD16_TypeDefinitionIndex = 8544;

class F372F6C8ECFFDD16 : public ::E937733544524006
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F372F6C8ECFFDD16__CTOR_OFFSET))(this);
	}

	::System::Void B331B121C62F2740(::FBF5DC1AB751F82C* FCA4B74FE834314F)
	{
		return ((::System::Void(*)(::PVOID, ::FBF5DC1AB751F82C*))((::PBYTE)hIl2Cpp + F372F6C8ECFFDD16_B331B121C62F2740_OFFSET))(this, FCA4B74FE834314F);
	}
};
