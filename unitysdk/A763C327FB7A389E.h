#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class AA6A6E8FFAA0EB1C;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define A763C327FB7A389E_B24AFF131A454FB6_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define A763C327FB7A389E_EEDEB0D11638A6D5_OFFSET UNITYSDK_OFFSET(0x17F35D0)
#define A763C327FB7A389E_F6696792C4A7E8D6_OFFSET UNITYSDK_OFFSET(0x16A7C80)
#define A763C327FB7A389E_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x26AAD00)
#define A763C327FB7A389E__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A763C327FB7A389E_TypeDefinitionIndex = 2621;

class A763C327FB7A389E : public ::System::Object
{
public:
	::System::UInt32 F78CFA0C288DDEF6; // 0x10
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AA6A6E8FFAA0EB1C*>* E07DC004C7DCEAA9; // 0x18

	::System::Void EEDEB0D11638A6D5(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AA6A6E8FFAA0EB1C*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AA6A6E8FFAA0EB1C*>*))((::PBYTE)hIl2Cpp + A763C327FB7A389E_EEDEB0D11638A6D5_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A763C327FB7A389E__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AA6A6E8FFAA0EB1C*>* B24AFF131A454FB6()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AA6A6E8FFAA0EB1C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + A763C327FB7A389E_B24AFF131A454FB6_OFFSET))(this);
	}

	::System::Void F6696792C4A7E8D6(::System::UInt32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + A763C327FB7A389E_F6696792C4A7E8D6_OFFSET))(this, E937D4885DAA1AE8);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::A763C327FB7A389E*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::A763C327FB7A389E*&))((::PBYTE)hIl2Cpp + A763C327FB7A389E_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
