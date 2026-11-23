#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class A1F4A80D63B6B75F;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define B8A1611E74783AB2_B4E27863491C4F89_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define B8A1611E74783AB2_E648A6EA7A205851_OFFSET UNITYSDK_OFFSET(0x17F35D0)
#define B8A1611E74783AB2_F6696792C4A7E8D6_OFFSET UNITYSDK_OFFSET(0x16A7C80)
#define B8A1611E74783AB2_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x23C67B0)
#define B8A1611E74783AB2__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B8A1611E74783AB2_TypeDefinitionIndex = 3726;

class B8A1611E74783AB2 : public ::System::Object
{
public:
	::System::UInt32 F78CFA0C288DDEF6; // 0x10
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A1F4A80D63B6B75F*>* E3CAEFE670A26A83; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B8A1611E74783AB2__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A1F4A80D63B6B75F*>* B4E27863491C4F89()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A1F4A80D63B6B75F*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + B8A1611E74783AB2_B4E27863491C4F89_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::B8A1611E74783AB2*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::B8A1611E74783AB2*&))((::PBYTE)hIl2Cpp + B8A1611E74783AB2_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void E648A6EA7A205851(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A1F4A80D63B6B75F*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A1F4A80D63B6B75F*>*))((::PBYTE)hIl2Cpp + B8A1611E74783AB2_E648A6EA7A205851_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void F6696792C4A7E8D6(::System::UInt32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + B8A1611E74783AB2_F6696792C4A7E8D6_OFFSET))(this, E937D4885DAA1AE8);
	}
};
