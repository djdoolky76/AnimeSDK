#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define B22C55E5694268BB_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1F220D0)
#define B22C55E5694268BB__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B22C55E5694268BB_TypeDefinitionIndex = 8611;

class B22C55E5694268BB : public ::System::Object
{
public:
	::System::UInt32 EA7CFF2710F5BB56; // 0x10

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::B22C55E5694268BB* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::B22C55E5694268BB*))((::PBYTE)hIl2Cpp + B22C55E5694268BB_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B22C55E5694268BB__CTOR_OFFSET))(this);
	}
};
