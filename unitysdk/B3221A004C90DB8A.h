#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define B3221A004C90DB8A_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1F51740)
#define B3221A004C90DB8A__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B3221A004C90DB8A_TypeDefinitionIndex = 7221;

class B3221A004C90DB8A : public ::System::Object
{
public:
	::System::UInt32 ABB7A5CABA989FA0; // 0x10

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::B3221A004C90DB8A* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::B3221A004C90DB8A*))((::PBYTE)hIl2Cpp + B3221A004C90DB8A_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B3221A004C90DB8A__CTOR_OFFSET))(this);
	}
};
