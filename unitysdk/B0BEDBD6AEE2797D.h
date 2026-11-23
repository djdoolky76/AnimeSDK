#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define B0BEDBD6AEE2797D_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1EC7950)
#define B0BEDBD6AEE2797D__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B0BEDBD6AEE2797D_TypeDefinitionIndex = 7380;

class B0BEDBD6AEE2797D : public ::System::Object
{
public:
	::System::UInt32 A578BD7307B5A528; // 0x10
	::System::UInt32 AC433530319CE490; // 0x14
	::System::UInt32 FA3B062C960B3641; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B0BEDBD6AEE2797D__CTOR_OFFSET))(this);
	}

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::B0BEDBD6AEE2797D* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::B0BEDBD6AEE2797D*))((::PBYTE)hIl2Cpp + B0BEDBD6AEE2797D_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
