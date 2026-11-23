#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class AFAC8450A01965C0;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define F15C938267973F66_A144D276C48B8D29_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define F15C938267973F66_A17392CFBE632ECD_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define F15C938267973F66_EB8DF78C1D71130D_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define F15C938267973F66_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x23F15B0)
#define F15C938267973F66__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F15C938267973F66_TypeDefinitionIndex = 3903;

class F15C938267973F66 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AFAC8450A01965C0*>* E722E81B57468822; // 0x10

	::System::Void A17392CFBE632ECD(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AFAC8450A01965C0*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AFAC8450A01965C0*>*))((::PBYTE)hIl2Cpp + F15C938267973F66_A17392CFBE632ECD_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F15C938267973F66__CTOR_OFFSET))(this);
	}

	static ::System::UInt32 EB8DF78C1D71130D(::AFAC8450A01965C0* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::AFAC8450A01965C0*))((::PBYTE)hIl2Cpp + F15C938267973F66_EB8DF78C1D71130D_OFFSET))(E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AFAC8450A01965C0*>* A144D276C48B8D29()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AFAC8450A01965C0*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + F15C938267973F66_A144D276C48B8D29_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::F15C938267973F66*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::F15C938267973F66*&))((::PBYTE)hIl2Cpp + F15C938267973F66_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
