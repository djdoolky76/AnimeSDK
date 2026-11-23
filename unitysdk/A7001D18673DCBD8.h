#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define A7001D18673DCBD8_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1F37220)
#define A7001D18673DCBD8__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A7001D18673DCBD8_TypeDefinitionIndex = 7663;

class A7001D18673DCBD8 : public ::System::Object
{
public:
	::System::UInt32 B58086BD4665C414; // 0x10
	::System::UInt32 A9FDFE8DE3D14924; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A7001D18673DCBD8__CTOR_OFFSET))(this);
	}

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::A7001D18673DCBD8* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::A7001D18673DCBD8*))((::PBYTE)hIl2Cpp + A7001D18673DCBD8_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
