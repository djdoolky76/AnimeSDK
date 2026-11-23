#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define AB0321AF0263EBC2_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define AB0321AF0263EBC2__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AB0321AF0263EBC2_TypeDefinitionIndex = 6811;

class AB0321AF0263EBC2 : public ::System::Object
{
public:
	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::AB0321AF0263EBC2* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::AB0321AF0263EBC2*))((::PBYTE)hIl2Cpp + AB0321AF0263EBC2_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AB0321AF0263EBC2__CTOR_OFFSET))(this);
	}
};
