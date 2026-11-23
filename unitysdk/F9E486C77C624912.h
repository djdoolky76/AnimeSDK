#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define F9E486C77C624912_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define F9E486C77C624912__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F9E486C77C624912_TypeDefinitionIndex = 8980;

class F9E486C77C624912 : public ::System::Object
{
public:
	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::F9E486C77C624912* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::F9E486C77C624912*))((::PBYTE)hIl2Cpp + F9E486C77C624912_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F9E486C77C624912__CTOR_OFFSET))(this);
	}
};
