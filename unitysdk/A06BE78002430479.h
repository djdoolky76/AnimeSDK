#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define A06BE78002430479_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1F38DE0)
#define A06BE78002430479__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A06BE78002430479_TypeDefinitionIndex = 7574;

class A06BE78002430479 : public ::System::Object
{
public:
	::System::UInt32 E4B18145056A6C67; // 0x10
	::System::UInt32 EA419ACEC47ED087; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A06BE78002430479__CTOR_OFFSET))(this);
	}

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::A06BE78002430479* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::A06BE78002430479*))((::PBYTE)hIl2Cpp + A06BE78002430479_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
