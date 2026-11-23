#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class E7AD2F6CF872AFB3;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BA2704EDDB353C4B_E53C8562574D9F32_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define BA2704EDDB353C4B_E9489F416485BC77_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define BA2704EDDB353C4B_F4328A17777B8E59_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define BA2704EDDB353C4B_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2372650)
#define BA2704EDDB353C4B__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BA2704EDDB353C4B_TypeDefinitionIndex = 3377;

class BA2704EDDB353C4B : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E7AD2F6CF872AFB3*>* A7AB9EB7F5B396A0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BA2704EDDB353C4B__CTOR_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::BA2704EDDB353C4B*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::BA2704EDDB353C4B*&))((::PBYTE)hIl2Cpp + BA2704EDDB353C4B_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void F4328A17777B8E59(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E7AD2F6CF872AFB3*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E7AD2F6CF872AFB3*>*))((::PBYTE)hIl2Cpp + BA2704EDDB353C4B_F4328A17777B8E59_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E7AD2F6CF872AFB3*>* E53C8562574D9F32()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E7AD2F6CF872AFB3*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BA2704EDDB353C4B_E53C8562574D9F32_OFFSET))(this);
	}

	static ::System::UInt32 E9489F416485BC77(::E7AD2F6CF872AFB3* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::E7AD2F6CF872AFB3*))((::PBYTE)hIl2Cpp + BA2704EDDB353C4B_E9489F416485BC77_OFFSET))(E937D4885DAA1AE8);
	}
};
