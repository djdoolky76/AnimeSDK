#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class ACEEBBAC5E03C93C;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BAB0064BB2111F6B_ACA5DD2DAF4BA74A_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define BAB0064BB2111F6B_EB8DF78C1D71130D_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define BAB0064BB2111F6B_F384347EACBD54DB_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define BAB0064BB2111F6B_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2401F60)
#define BAB0064BB2111F6B__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BAB0064BB2111F6B_TypeDefinitionIndex = 4036;

class BAB0064BB2111F6B : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::ACEEBBAC5E03C93C*>* B339132A3E8BB311; // 0x10

	static ::System::UInt32 EB8DF78C1D71130D(::ACEEBBAC5E03C93C* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::ACEEBBAC5E03C93C*))((::PBYTE)hIl2Cpp + BAB0064BB2111F6B_EB8DF78C1D71130D_OFFSET))(E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAB0064BB2111F6B__CTOR_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::BAB0064BB2111F6B*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::BAB0064BB2111F6B*&))((::PBYTE)hIl2Cpp + BAB0064BB2111F6B_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::ACEEBBAC5E03C93C*>* ACA5DD2DAF4BA74A()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::ACEEBBAC5E03C93C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAB0064BB2111F6B_ACA5DD2DAF4BA74A_OFFSET))(this);
	}

	::System::Void F384347EACBD54DB(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::ACEEBBAC5E03C93C*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::ACEEBBAC5E03C93C*>*))((::PBYTE)hIl2Cpp + BAB0064BB2111F6B_F384347EACBD54DB_OFFSET))(this, E937D4885DAA1AE8);
	}
};
