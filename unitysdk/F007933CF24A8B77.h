#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define F007933CF24A8B77_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1FEB6C0)
#define F007933CF24A8B77__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F007933CF24A8B77_TypeDefinitionIndex = 8095;

class F007933CF24A8B77 : public ::System::Object
{
public:
	::System::UInt32 EA419ACEC47ED087; // 0x10
	::System::UInt32 E753C80C30B0CF68; // 0x14

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::F007933CF24A8B77* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::F007933CF24A8B77*))((::PBYTE)hIl2Cpp + F007933CF24A8B77_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F007933CF24A8B77__CTOR_OFFSET))(this);
	}
};
