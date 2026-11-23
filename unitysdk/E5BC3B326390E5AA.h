#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class B48E880188A60E66;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define E5BC3B326390E5AA_BB7C5E6BE87257E0_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define E5BC3B326390E5AA_E991B1602E2666A4_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define E5BC3B326390E5AA_EB8DF78C1D71130D_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define E5BC3B326390E5AA_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2366910)
#define E5BC3B326390E5AA__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E5BC3B326390E5AA_TypeDefinitionIndex = 3352;

class E5BC3B326390E5AA : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::B48E880188A60E66*>* E0973BF9C4744A53; // 0x10

	static ::System::UInt32 EB8DF78C1D71130D(::B48E880188A60E66* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::B48E880188A60E66*))((::PBYTE)hIl2Cpp + E5BC3B326390E5AA_EB8DF78C1D71130D_OFFSET))(E937D4885DAA1AE8);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::E5BC3B326390E5AA*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::E5BC3B326390E5AA*&))((::PBYTE)hIl2Cpp + E5BC3B326390E5AA_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::B48E880188A60E66*>* E991B1602E2666A4()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::B48E880188A60E66*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + E5BC3B326390E5AA_E991B1602E2666A4_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E5BC3B326390E5AA__CTOR_OFFSET))(this);
	}

	::System::Void BB7C5E6BE87257E0(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::B48E880188A60E66*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::B48E880188A60E66*>*))((::PBYTE)hIl2Cpp + E5BC3B326390E5AA_BB7C5E6BE87257E0_OFFSET))(this, E937D4885DAA1AE8);
	}
};
