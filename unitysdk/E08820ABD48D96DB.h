#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class F3786C58B1CCE22B;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define E08820ABD48D96DB_EB8DF78C1D71130D_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define E08820ABD48D96DB_F09E09AD2698A084_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define E08820ABD48D96DB_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x23BE9E0)
#define E08820ABD48D96DB_FEA8B64FA9DF0A9A_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define E08820ABD48D96DB__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E08820ABD48D96DB_TypeDefinitionIndex = 3680;

class E08820ABD48D96DB : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F3786C58B1CCE22B*>* B3329418F65A1234; // 0x10

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::E08820ABD48D96DB*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::E08820ABD48D96DB*&))((::PBYTE)hIl2Cpp + E08820ABD48D96DB_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	static ::System::UInt32 EB8DF78C1D71130D(::F3786C58B1CCE22B* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::F3786C58B1CCE22B*))((::PBYTE)hIl2Cpp + E08820ABD48D96DB_EB8DF78C1D71130D_OFFSET))(E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F3786C58B1CCE22B*>* F09E09AD2698A084()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F3786C58B1CCE22B*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + E08820ABD48D96DB_F09E09AD2698A084_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E08820ABD48D96DB__CTOR_OFFSET))(this);
	}

	::System::Void FEA8B64FA9DF0A9A(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F3786C58B1CCE22B*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F3786C58B1CCE22B*>*))((::PBYTE)hIl2Cpp + E08820ABD48D96DB_FEA8B64FA9DF0A9A_OFFSET))(this, E937D4885DAA1AE8);
	}
};
