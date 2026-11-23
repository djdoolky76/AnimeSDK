#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E68AA4EB51923C98/B92BBABCE5ECD236.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define A398C265F29F065E_B7B27777D614DDA8_OFFSET UNITYSDK_OFFSET(0x2205B20)
#define A398C265F29F065E_F35FAA85BF18E11D_OFFSET UNITYSDK_OFFSET(0x2205B90)
#define A398C265F29F065E__CTOR_OFFSET UNITYSDK_OFFSET(0x2205CD0)

inline static constexpr unsigned int A398C265F29F065E_TypeDefinitionIndex = 9032;

class A398C265F29F065E
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A398C265F29F065E__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::E68AA4EB51923C98::B92BBABCE5ECD236, ::System::UInt32>* B7B27777D614DDA8()
	{
		return ((::System::Collections::Generic::Dictionary_2<::E68AA4EB51923C98::B92BBABCE5ECD236, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + A398C265F29F065E_B7B27777D614DDA8_OFFSET))(this);
	}

	::System::Boolean F35FAA85BF18E11D(::E68AA4EB51923C98::B92BBABCE5ECD236 ED833F95E0E065E2, ::System::UInt32& AE8B4FC810923B8E)
	{
		return ((::System::Boolean(*)(::PVOID, ::E68AA4EB51923C98::B92BBABCE5ECD236, ::System::UInt32&))((::PBYTE)hIl2Cpp + A398C265F29F065E_F35FAA85BF18E11D_OFFSET))(this, ED833F95E0E065E2, AE8B4FC810923B8E);
	}
};
