#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

class E2D8A59C3578989F;

#define B342D9F8D617F2D4_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x2053960)
#define B342D9F8D617F2D4__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B342D9F8D617F2D4_TypeDefinitionIndex = 8417;

class B342D9F8D617F2D4 : public ::System::Object
{
public:
	::System::UInt32 A87B1D96E2C92FBA; // 0x10
	::System::UInt32 BCA1345B630504ED; // 0x14
	::System::UInt32 EC3E42FF95A3C3BF; // 0x18
	::System::Byte _padding0[0x4];
	::E2D8A59C3578989F* B477B4BB95A0E9BD; // 0x20

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::B342D9F8D617F2D4* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::B342D9F8D617F2D4*))((::PBYTE)hIl2Cpp + B342D9F8D617F2D4_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B342D9F8D617F2D4__CTOR_OFFSET))(this);
	}
};
