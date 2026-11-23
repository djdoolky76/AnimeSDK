#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define BFF8D13FB3ACEBE9_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1F51740)
#define BFF8D13FB3ACEBE9__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BFF8D13FB3ACEBE9_TypeDefinitionIndex = 9099;

class BFF8D13FB3ACEBE9 : public ::System::Object
{
public:
	::System::UInt32 EA7CFF2710F5BB56; // 0x10

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::BFF8D13FB3ACEBE9* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::BFF8D13FB3ACEBE9*))((::PBYTE)hIl2Cpp + BFF8D13FB3ACEBE9_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFF8D13FB3ACEBE9__CTOR_OFFSET))(this);
	}
};
