#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class E6FE62A3696B1CF7;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EC854E43E6947C70_EF159CCEFD70FCC6_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define EC854E43E6947C70_F5F0FC5C2BDA8F0C_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define EC854E43E6947C70_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x26051D0)
#define EC854E43E6947C70__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int EC854E43E6947C70_TypeDefinitionIndex = 5797;

class EC854E43E6947C70 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E6FE62A3696B1CF7*>* E2639912364E2E9C; // 0x10

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E6FE62A3696B1CF7*>* F5F0FC5C2BDA8F0C()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E6FE62A3696B1CF7*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EC854E43E6947C70_F5F0FC5C2BDA8F0C_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::EC854E43E6947C70*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::EC854E43E6947C70*&))((::PBYTE)hIl2Cpp + EC854E43E6947C70_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EC854E43E6947C70__CTOR_OFFSET))(this);
	}

	::System::Void EF159CCEFD70FCC6(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E6FE62A3696B1CF7*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E6FE62A3696B1CF7*>*))((::PBYTE)hIl2Cpp + EC854E43E6947C70_EF159CCEFD70FCC6_OFFSET))(this, E937D4885DAA1AE8);
	}
};
