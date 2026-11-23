#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

#define E79EA596036E28F0_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x25E5FD0)
#define E79EA596036E28F0__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E79EA596036E28F0_TypeDefinitionIndex = 5709;

class E79EA596036E28F0 : public ::System::Object
{
public:
	::System::UInt32 EF0122FCE8B57425; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E79EA596036E28F0__CTOR_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::E79EA596036E28F0*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::E79EA596036E28F0*&))((::PBYTE)hIl2Cpp + E79EA596036E28F0_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
