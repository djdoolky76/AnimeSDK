#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class E25F47E2EFF3B5BB;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AA37BD9D4A184ADE_A0A0EF9EEDBF329B_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define AA37BD9D4A184ADE_A11865888237E704_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define AA37BD9D4A184ADE_EB8DF78C1D71130D_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define AA37BD9D4A184ADE_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x25D3E00)
#define AA37BD9D4A184ADE__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AA37BD9D4A184ADE_TypeDefinitionIndex = 5574;

class AA37BD9D4A184ADE : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E25F47E2EFF3B5BB*>* E523EA8FE71DD9C7; // 0x10

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::AA37BD9D4A184ADE*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::AA37BD9D4A184ADE*&))((::PBYTE)hIl2Cpp + AA37BD9D4A184ADE_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void A11865888237E704(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E25F47E2EFF3B5BB*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E25F47E2EFF3B5BB*>*))((::PBYTE)hIl2Cpp + AA37BD9D4A184ADE_A11865888237E704_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AA37BD9D4A184ADE__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E25F47E2EFF3B5BB*>* A0A0EF9EEDBF329B()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E25F47E2EFF3B5BB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AA37BD9D4A184ADE_A0A0EF9EEDBF329B_OFFSET))(this);
	}

	static ::System::UInt32 EB8DF78C1D71130D(::E25F47E2EFF3B5BB* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::E25F47E2EFF3B5BB*))((::PBYTE)hIl2Cpp + AA37BD9D4A184ADE_EB8DF78C1D71130D_OFFSET))(E937D4885DAA1AE8);
	}
};
