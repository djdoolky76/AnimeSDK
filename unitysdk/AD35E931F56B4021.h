#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define AD35E931F56B4021_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define AD35E931F56B4021__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AD35E931F56B4021_TypeDefinitionIndex = 7869;

class AD35E931F56B4021 : public ::System::Object
{
public:
	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::AD35E931F56B4021* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::AD35E931F56B4021*))((::PBYTE)hIl2Cpp + AD35E931F56B4021_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AD35E931F56B4021__CTOR_OFFSET))(this);
	}
};
