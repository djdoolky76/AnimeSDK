#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

#define B7D0057521E6AFEB_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x24D3040)
#define B7D0057521E6AFEB__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B7D0057521E6AFEB_TypeDefinitionIndex = 4836;

class B7D0057521E6AFEB : public ::System::Object
{
public:
	::System::UInt32 B305282FBBA723F6; // 0x10
	::System::Single F86C8BFFF6EC2113; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B7D0057521E6AFEB__CTOR_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::B7D0057521E6AFEB*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::B7D0057521E6AFEB*&))((::PBYTE)hIl2Cpp + B7D0057521E6AFEB_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
