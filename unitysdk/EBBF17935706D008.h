#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define EBBF17935706D008_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1F373D0)
#define EBBF17935706D008__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int EBBF17935706D008_TypeDefinitionIndex = 7651;

class EBBF17935706D008 : public ::System::Object
{
public:
	::System::UInt32 F15DED49F43372B1; // 0x10
	::System::Boolean BAF0FAB689EFA621; // 0x14

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::EBBF17935706D008* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::EBBF17935706D008*))((::PBYTE)hIl2Cpp + EBBF17935706D008_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBF17935706D008__CTOR_OFFSET))(this);
	}
};
