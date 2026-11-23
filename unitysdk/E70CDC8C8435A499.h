#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define E70CDC8C8435A499_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1FBD8E0)
#define E70CDC8C8435A499__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E70CDC8C8435A499_TypeDefinitionIndex = 6876;

class E70CDC8C8435A499 : public ::System::Object
{
public:
	::System::UInt32 A5E5D7395E2C1129; // 0x10

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::E70CDC8C8435A499* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::E70CDC8C8435A499*))((::PBYTE)hIl2Cpp + E70CDC8C8435A499_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E70CDC8C8435A499__CTOR_OFFSET))(this);
	}
};
