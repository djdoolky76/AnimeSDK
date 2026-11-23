#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

class A4582399B331BB5C;

#define E32FAEE1296DC4CD_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1FD9DC0)
#define E32FAEE1296DC4CD__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E32FAEE1296DC4CD_TypeDefinitionIndex = 8052;

class E32FAEE1296DC4CD : public ::System::Object
{
public:
	::System::UInt32 EA419ACEC47ED087; // 0x10
	::System::Byte _padding0[0x4];
	::A4582399B331BB5C* FB194F9BF02A8A08; // 0x18

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::E32FAEE1296DC4CD* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::E32FAEE1296DC4CD*))((::PBYTE)hIl2Cpp + E32FAEE1296DC4CD_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E32FAEE1296DC4CD__CTOR_OFFSET))(this);
	}
};
