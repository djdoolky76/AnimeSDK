#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class F5DC12EC825CCBF6;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define A467787E76A881EF_AAD535045C14CE4C_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define A467787E76A881EF_E7B4587732850EE2_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define A467787E76A881EF_EB8DF78C1D71130D_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define A467787E76A881EF_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x24F2330)
#define A467787E76A881EF__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A467787E76A881EF_TypeDefinitionIndex = 5121;

class A467787E76A881EF : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F5DC12EC825CCBF6*>* F85B08C0231840B2; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A467787E76A881EF__CTOR_OFFSET))(this);
	}

	static ::System::UInt32 EB8DF78C1D71130D(::F5DC12EC825CCBF6* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::F5DC12EC825CCBF6*))((::PBYTE)hIl2Cpp + A467787E76A881EF_EB8DF78C1D71130D_OFFSET))(E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F5DC12EC825CCBF6*>* AAD535045C14CE4C()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F5DC12EC825CCBF6*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + A467787E76A881EF_AAD535045C14CE4C_OFFSET))(this);
	}

	::System::Void E7B4587732850EE2(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F5DC12EC825CCBF6*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F5DC12EC825CCBF6*>*))((::PBYTE)hIl2Cpp + A467787E76A881EF_E7B4587732850EE2_OFFSET))(this, E937D4885DAA1AE8);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::A467787E76A881EF*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::A467787E76A881EF*&))((::PBYTE)hIl2Cpp + A467787E76A881EF_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
