#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define A7D0A9BF15C92C39_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x22061C0)
#define A7D0A9BF15C92C39__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A7D0A9BF15C92C39_TypeDefinitionIndex = 9040;

class A7D0A9BF15C92C39 : public ::System::Object
{
public:
	::System::UInt32 A3B94E19D4A4DC0F; // 0x10
	::System::UInt32 F6DB1DF39B5DB8AB; // 0x14
	::System::UInt32 EC0DE3507723A895; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A7D0A9BF15C92C39__CTOR_OFFSET))(this);
	}

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::A7D0A9BF15C92C39* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::A7D0A9BF15C92C39*))((::PBYTE)hIl2Cpp + A7D0A9BF15C92C39_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
