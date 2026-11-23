#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class F0062506E643939A;
namespace System { class Action; }

#define F7CB2C7205F4E751_F99EEFF328592FD1_BE39178FC84FB154_OFFSET UNITYSDK_OFFSET(0x3A29F30)
#define F7CB2C7205F4E751_F99EEFF328592FD1__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F7CB2C7205F4E751_F99EEFF328592FD1_TypeDefinitionIndex = 12891;

class F7CB2C7205F4E751_F99EEFF328592FD1 : public ::System::Object
{
public:
	::F0062506E643939A* A48FC8A1EFDD30A6; // 0x10
	::System::Action* E8FE2038ACB83CC1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F7CB2C7205F4E751_F99EEFF328592FD1__CTOR_OFFSET))(this);
	}

	::System::Void BE39178FC84FB154()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F7CB2C7205F4E751_F99EEFF328592FD1_BE39178FC84FB154_OFFSET))(this);
	}
};
