#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define E9402ED55102C208_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1EC0260)
#define E9402ED55102C208__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E9402ED55102C208_TypeDefinitionIndex = 6808;

class E9402ED55102C208 : public ::System::Object
{
public:
	::System::UInt32 E9C8CDEBECD7B599; // 0x10
	::System::UInt32 EB57988CFFC144ED; // 0x14

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::E9402ED55102C208* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::E9402ED55102C208*))((::PBYTE)hIl2Cpp + E9402ED55102C208_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E9402ED55102C208__CTOR_OFFSET))(this);
	}
};
