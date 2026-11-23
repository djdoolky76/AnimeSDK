#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define B7E606844401505F_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x2202A70)
#define B7E606844401505F__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B7E606844401505F_TypeDefinitionIndex = 9072;

class B7E606844401505F : public ::System::Object
{
public:
	::System::UInt32 EB57988CFFC144ED; // 0x10
	::System::UInt32 FEFDA56AC69A9292; // 0x14
	::System::UInt32 E1487C8B46FC9BFF; // 0x18
	::System::UInt32 FE2FB0D55556BFD9; // 0x1C
	::System::UInt32 FCF0B4063B3608EC; // 0x20

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::B7E606844401505F* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::B7E606844401505F*))((::PBYTE)hIl2Cpp + B7E606844401505F_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B7E606844401505F__CTOR_OFFSET))(this);
	}
};
