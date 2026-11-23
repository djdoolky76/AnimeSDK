#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define B02008353AAA8211_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1F20290)
#define B02008353AAA8211__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B02008353AAA8211_TypeDefinitionIndex = 7561;

class B02008353AAA8211 : public ::System::Object
{
public:
	::System::UInt32 E753C80C30B0CF68; // 0x10
	::System::UInt32 EA419ACEC47ED087; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B02008353AAA8211__CTOR_OFFSET))(this);
	}

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::B02008353AAA8211* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::B02008353AAA8211*))((::PBYTE)hIl2Cpp + B02008353AAA8211_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
