#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define F032EDB430C970E6_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1F220D0)
#define F032EDB430C970E6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F032EDB430C970E6_TypeDefinitionIndex = 7175;

class F032EDB430C970E6 : public ::System::Object
{
public:
	::System::UInt32 A95483947B13576D; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F032EDB430C970E6__CTOR_OFFSET))(this);
	}

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::F032EDB430C970E6* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::F032EDB430C970E6*))((::PBYTE)hIl2Cpp + F032EDB430C970E6_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
