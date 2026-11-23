#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define B373CAFFCD2B5749_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define B373CAFFCD2B5749__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B373CAFFCD2B5749_TypeDefinitionIndex = 8597;

class B373CAFFCD2B5749 : public ::System::Object
{
public:
	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::B373CAFFCD2B5749* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::B373CAFFCD2B5749*))((::PBYTE)hIl2Cpp + B373CAFFCD2B5749_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B373CAFFCD2B5749__CTOR_OFFSET))(this);
	}
};
