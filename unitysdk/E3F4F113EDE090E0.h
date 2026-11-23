#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class BA7DE460895E75F4;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define E3F4F113EDE090E0_B364582355ECB0DE_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define E3F4F113EDE090E0_EB8DF78C1D71130D_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define E3F4F113EDE090E0_F6EF3495C0E65A9C_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define E3F4F113EDE090E0_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x249D330)
#define E3F4F113EDE090E0__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E3F4F113EDE090E0_TypeDefinitionIndex = 4599;

class E3F4F113EDE090E0 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BA7DE460895E75F4*>* F68ECEFCAAAFA9B8; // 0x10

	static ::System::UInt32 EB8DF78C1D71130D(::BA7DE460895E75F4* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::BA7DE460895E75F4*))((::PBYTE)hIl2Cpp + E3F4F113EDE090E0_EB8DF78C1D71130D_OFFSET))(E937D4885DAA1AE8);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::E3F4F113EDE090E0*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::E3F4F113EDE090E0*&))((::PBYTE)hIl2Cpp + E3F4F113EDE090E0_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BA7DE460895E75F4*>* F6EF3495C0E65A9C()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BA7DE460895E75F4*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + E3F4F113EDE090E0_F6EF3495C0E65A9C_OFFSET))(this);
	}

	::System::Void B364582355ECB0DE(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BA7DE460895E75F4*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BA7DE460895E75F4*>*))((::PBYTE)hIl2Cpp + E3F4F113EDE090E0_B364582355ECB0DE_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E3F4F113EDE090E0__CTOR_OFFSET))(this);
	}
};
