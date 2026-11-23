#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define F0690B73410055BE_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1F787E0)
#define F0690B73410055BE__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F0690B73410055BE_TypeDefinitionIndex = 7877;

class F0690B73410055BE : public ::System::Object
{
public:
	::System::UInt64 BE49139A0FD1584F; // 0x10

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::F0690B73410055BE* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::F0690B73410055BE*))((::PBYTE)hIl2Cpp + F0690B73410055BE_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F0690B73410055BE__CTOR_OFFSET))(this);
	}
};
