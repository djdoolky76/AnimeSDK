#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class B37B5F4C0A656177;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FAAC841709D967FE_A7785DAAF2C5A50B_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define FAAC841709D967FE_AB4FE6DED4BDEFF6_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define FAAC841709D967FE_EB8DF78C1D71130D_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define FAAC841709D967FE_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x24BA690)
#define FAAC841709D967FE__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FAAC841709D967FE_TypeDefinitionIndex = 4764;

class FAAC841709D967FE : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::B37B5F4C0A656177*>* A835AACAE2EDBC1C; // 0x10

	static ::System::UInt32 EB8DF78C1D71130D(::B37B5F4C0A656177* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::B37B5F4C0A656177*))((::PBYTE)hIl2Cpp + FAAC841709D967FE_EB8DF78C1D71130D_OFFSET))(E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::B37B5F4C0A656177*>* AB4FE6DED4BDEFF6()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::B37B5F4C0A656177*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAC841709D967FE_AB4FE6DED4BDEFF6_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAC841709D967FE__CTOR_OFFSET))(this);
	}

	::System::Void A7785DAAF2C5A50B(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::B37B5F4C0A656177*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::B37B5F4C0A656177*>*))((::PBYTE)hIl2Cpp + FAAC841709D967FE_A7785DAAF2C5A50B_OFFSET))(this, E937D4885DAA1AE8);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::FAAC841709D967FE*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::FAAC841709D967FE*&))((::PBYTE)hIl2Cpp + FAAC841709D967FE_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
