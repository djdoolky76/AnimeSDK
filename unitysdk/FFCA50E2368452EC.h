#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define FFCA50E2368452EC_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1FBD8E0)
#define FFCA50E2368452EC__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FFCA50E2368452EC_TypeDefinitionIndex = 8684;

class FFCA50E2368452EC : public ::System::Object
{
public:
	::System::UInt32 F6DB1DF39B5DB8AB; // 0x10

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::FFCA50E2368452EC* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::FFCA50E2368452EC*))((::PBYTE)hIl2Cpp + FFCA50E2368452EC_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFCA50E2368452EC__CTOR_OFFSET))(this);
	}
};
