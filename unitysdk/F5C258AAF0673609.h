#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define F5C258AAF0673609_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define F5C258AAF0673609__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F5C258AAF0673609_TypeDefinitionIndex = 7020;

class F5C258AAF0673609 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F5C258AAF0673609__CTOR_OFFSET))(this);
	}

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::F5C258AAF0673609* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::F5C258AAF0673609*))((::PBYTE)hIl2Cpp + F5C258AAF0673609_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
