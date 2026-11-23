#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define AF98CE3847D98D64_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1F2E6D0)
#define AF98CE3847D98D64__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AF98CE3847D98D64_TypeDefinitionIndex = 7583;

class AF98CE3847D98D64 : public ::System::Object
{
public:
	::System::UInt32 A3B94E19D4A4DC0F; // 0x10
	::System::UInt32 EC0DE3507723A895; // 0x14

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::AF98CE3847D98D64* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::AF98CE3847D98D64*))((::PBYTE)hIl2Cpp + AF98CE3847D98D64_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AF98CE3847D98D64__CTOR_OFFSET))(this);
	}
};
