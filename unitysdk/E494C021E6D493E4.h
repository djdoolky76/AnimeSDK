#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define E494C021E6D493E4_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define E494C021E6D493E4__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E494C021E6D493E4_TypeDefinitionIndex = 8755;

class E494C021E6D493E4 : public ::System::Object
{
public:
	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::E494C021E6D493E4* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::E494C021E6D493E4*))((::PBYTE)hIl2Cpp + E494C021E6D493E4_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E494C021E6D493E4__CTOR_OFFSET))(this);
	}
};
