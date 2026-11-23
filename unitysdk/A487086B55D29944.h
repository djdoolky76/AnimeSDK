#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E68AA4EB51923C98/BDC8B159A19ACF96.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class F12E4A299BCCC124;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define A487086B55D29944_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x26380F0)
#define A487086B55D29944__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A487086B55D29944_TypeDefinitionIndex = 6073;

class A487086B55D29944 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::E68AA4EB51923C98::BDC8B159A19ACF96, ::F12E4A299BCCC124*>* EB02FF064853E7DF; // 0x10

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::A487086B55D29944*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::A487086B55D29944*&))((::PBYTE)hIl2Cpp + A487086B55D29944_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A487086B55D29944__CTOR_OFFSET))(this);
	}
};
