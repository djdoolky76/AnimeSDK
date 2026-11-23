#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define B6748973A40474FC_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define B6748973A40474FC__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B6748973A40474FC_TypeDefinitionIndex = 7517;

class B6748973A40474FC : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B6748973A40474FC__CTOR_OFFSET))(this);
	}

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::B6748973A40474FC* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::B6748973A40474FC*))((::PBYTE)hIl2Cpp + B6748973A40474FC_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
