#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define F0E7527654DD08F7_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1F846A0)
#define F0E7527654DD08F7__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F0E7527654DD08F7_TypeDefinitionIndex = 7914;

class F0E7527654DD08F7 : public ::System::Object
{
public:
	::System::UInt64 BE49139A0FD1584F; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F0E7527654DD08F7__CTOR_OFFSET))(this);
	}

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::F0E7527654DD08F7* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::F0E7527654DD08F7*))((::PBYTE)hIl2Cpp + F0E7527654DD08F7_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
