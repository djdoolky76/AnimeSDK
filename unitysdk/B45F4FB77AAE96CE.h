#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define B45F4FB77AAE96CE_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define B45F4FB77AAE96CE__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B45F4FB77AAE96CE_TypeDefinitionIndex = 8296;

class B45F4FB77AAE96CE : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B45F4FB77AAE96CE__CTOR_OFFSET))(this);
	}

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::B45F4FB77AAE96CE* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::B45F4FB77AAE96CE*))((::PBYTE)hIl2Cpp + B45F4FB77AAE96CE_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
