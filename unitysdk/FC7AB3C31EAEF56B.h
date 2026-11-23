#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define FC7AB3C31EAEF56B_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1F55A60)
#define FC7AB3C31EAEF56B__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FC7AB3C31EAEF56B_TypeDefinitionIndex = 7802;

class FC7AB3C31EAEF56B : public ::System::Object
{
public:
	::System::UInt64 A2590943AA298EA8; // 0x10

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::FC7AB3C31EAEF56B* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::FC7AB3C31EAEF56B*))((::PBYTE)hIl2Cpp + FC7AB3C31EAEF56B_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FC7AB3C31EAEF56B__CTOR_OFFSET))(this);
	}
};
