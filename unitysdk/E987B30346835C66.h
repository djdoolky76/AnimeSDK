#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define E987B30346835C66_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1E9CC10)
#define E987B30346835C66__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E987B30346835C66_TypeDefinitionIndex = 8919;

class E987B30346835C66 : public ::System::Object
{
public:
	::System::UInt32 EA419ACEC47ED087; // 0x10

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::E987B30346835C66* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::E987B30346835C66*))((::PBYTE)hIl2Cpp + E987B30346835C66_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E987B30346835C66__CTOR_OFFSET))(this);
	}
};
