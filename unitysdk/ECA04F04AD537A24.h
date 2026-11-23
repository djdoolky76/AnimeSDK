#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define ECA04F04AD537A24_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1F1AD90)
#define ECA04F04AD537A24__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int ECA04F04AD537A24_TypeDefinitionIndex = 7220;

class ECA04F04AD537A24 : public ::System::Object
{
public:
	::System::UInt32 F15DED49F43372B1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECA04F04AD537A24__CTOR_OFFSET))(this);
	}

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::ECA04F04AD537A24* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::ECA04F04AD537A24*))((::PBYTE)hIl2Cpp + ECA04F04AD537A24_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
