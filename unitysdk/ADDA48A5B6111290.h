#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define ADDA48A5B6111290_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1FC2B10)
#define ADDA48A5B6111290__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int ADDA48A5B6111290_TypeDefinitionIndex = 8677;

class ADDA48A5B6111290 : public ::System::Object
{
public:
	::System::UInt32 F6DB1DF39B5DB8AB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDA48A5B6111290__CTOR_OFFSET))(this);
	}

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::ADDA48A5B6111290* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::ADDA48A5B6111290*))((::PBYTE)hIl2Cpp + ADDA48A5B6111290_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
