#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class F08595B7FB38BB72;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define F63A00B646E6CAB5_BB7C5E6BE87257E0_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define F63A00B646E6CAB5_E991B1602E2666A4_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define F63A00B646E6CAB5_EB8DF78C1D71130D_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define F63A00B646E6CAB5_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x23816B0)
#define F63A00B646E6CAB5__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F63A00B646E6CAB5_TypeDefinitionIndex = 3500;

class F63A00B646E6CAB5 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F08595B7FB38BB72*>* E0973BF9C4744A53; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F63A00B646E6CAB5__CTOR_OFFSET))(this);
	}

	::System::Void BB7C5E6BE87257E0(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F08595B7FB38BB72*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F08595B7FB38BB72*>*))((::PBYTE)hIl2Cpp + F63A00B646E6CAB5_BB7C5E6BE87257E0_OFFSET))(this, E937D4885DAA1AE8);
	}

	static ::System::UInt32 EB8DF78C1D71130D(::F08595B7FB38BB72* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::F08595B7FB38BB72*))((::PBYTE)hIl2Cpp + F63A00B646E6CAB5_EB8DF78C1D71130D_OFFSET))(E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F08595B7FB38BB72*>* E991B1602E2666A4()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F08595B7FB38BB72*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + F63A00B646E6CAB5_E991B1602E2666A4_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::F63A00B646E6CAB5*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::F63A00B646E6CAB5*&))((::PBYTE)hIl2Cpp + F63A00B646E6CAB5_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
