#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define B486E5AA0DB21158_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define B486E5AA0DB21158__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B486E5AA0DB21158_TypeDefinitionIndex = 6757;

class B486E5AA0DB21158 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B486E5AA0DB21158__CTOR_OFFSET))(this);
	}

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::B486E5AA0DB21158* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::B486E5AA0DB21158*))((::PBYTE)hIl2Cpp + B486E5AA0DB21158_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
