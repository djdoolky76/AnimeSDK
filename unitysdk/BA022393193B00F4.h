#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define BA022393193B00F4_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1F1AD90)
#define BA022393193B00F4__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BA022393193B00F4_TypeDefinitionIndex = 7533;

class BA022393193B00F4 : public ::System::Object
{
public:
	::System::UInt32 A6E654615C453532; // 0x10

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::BA022393193B00F4* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::BA022393193B00F4*))((::PBYTE)hIl2Cpp + BA022393193B00F4_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BA022393193B00F4__CTOR_OFFSET))(this);
	}
};
