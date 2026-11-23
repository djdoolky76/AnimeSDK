#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

class A4582399B331BB5C;

#define AD670808471DD479_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x2039450)
#define AD670808471DD479__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AD670808471DD479_TypeDefinitionIndex = 8284;

class AD670808471DD479 : public ::System::Object
{
public:
	::System::UInt32 EA419ACEC47ED087; // 0x10
	::System::Byte _padding0[0x4];
	::A4582399B331BB5C* EDA4BEFCF7F31FB3; // 0x18

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::AD670808471DD479* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::AD670808471DD479*))((::PBYTE)hIl2Cpp + AD670808471DD479_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AD670808471DD479__CTOR_OFFSET))(this);
	}
};
