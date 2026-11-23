#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define E48F8841150C6346_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1EF1510)
#define E48F8841150C6346__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E48F8841150C6346_TypeDefinitionIndex = 7068;

class E48F8841150C6346 : public ::System::Object
{
public:
	::System::UInt32 E90ACEB40D48B0DC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E48F8841150C6346__CTOR_OFFSET))(this);
	}

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::E48F8841150C6346* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::E48F8841150C6346*))((::PBYTE)hIl2Cpp + E48F8841150C6346_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
