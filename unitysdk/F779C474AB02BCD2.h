#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class ABB6C452E76DA738;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define F779C474AB02BCD2_E3F4078946F0988A_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define F779C474AB02BCD2_E6EFD1A9429BBFE3_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define F779C474AB02BCD2_EB8DF78C1D71130D_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define F779C474AB02BCD2_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x238BA60)
#define F779C474AB02BCD2__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F779C474AB02BCD2_TypeDefinitionIndex = 3480;

class F779C474AB02BCD2 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::ABB6C452E76DA738*>* E4A61775B9298350; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F779C474AB02BCD2__CTOR_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::F779C474AB02BCD2*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::F779C474AB02BCD2*&))((::PBYTE)hIl2Cpp + F779C474AB02BCD2_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void E6EFD1A9429BBFE3(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::ABB6C452E76DA738*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::ABB6C452E76DA738*>*))((::PBYTE)hIl2Cpp + F779C474AB02BCD2_E6EFD1A9429BBFE3_OFFSET))(this, E937D4885DAA1AE8);
	}

	static ::System::UInt32 EB8DF78C1D71130D(::ABB6C452E76DA738* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::ABB6C452E76DA738*))((::PBYTE)hIl2Cpp + F779C474AB02BCD2_EB8DF78C1D71130D_OFFSET))(E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::ABB6C452E76DA738*>* E3F4078946F0988A()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::ABB6C452E76DA738*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + F779C474AB02BCD2_E3F4078946F0988A_OFFSET))(this);
	}
};
