#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define B5F97D1912898597_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1F51740)
#define B5F97D1912898597__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B5F97D1912898597_TypeDefinitionIndex = 8972;

class B5F97D1912898597 : public ::System::Object
{
public:
	::System::UInt32 A97A1E55A294ED78; // 0x10

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::B5F97D1912898597* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::B5F97D1912898597*))((::PBYTE)hIl2Cpp + B5F97D1912898597_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B5F97D1912898597__CTOR_OFFSET))(this);
	}
};
