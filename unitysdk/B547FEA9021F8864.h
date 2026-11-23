#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B692A3D4939E0EBA.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define B547FEA9021F8864_A9087F74FFC43AD5_OFFSET UNITYSDK_OFFSET(0x16BD3B0)
#define B547FEA9021F8864_E5CB4EECBB36E4E8_OFFSET UNITYSDK_OFFSET(0x16BD320)
#define B547FEA9021F8864_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x250E540)
#define B547FEA9021F8864__CTOR_OFFSET UNITYSDK_OFFSET(0x16591D0)

inline static constexpr unsigned int B547FEA9021F8864_TypeDefinitionIndex = 5225;

class B547FEA9021F8864 : public ::B692A3D4939E0EBA
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* A73667C87BA85BA9; // 0x20

	::System::Void A9087F74FFC43AD5(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + B547FEA9021F8864_A9087F74FFC43AD5_OFFSET))(this, E937D4885DAA1AE8);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::B547FEA9021F8864*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::B547FEA9021F8864*&))((::PBYTE)hIl2Cpp + B547FEA9021F8864_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B547FEA9021F8864__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* E5CB4EECBB36E4E8()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + B547FEA9021F8864_E5CB4EECBB36E4E8_OFFSET))(this);
	}
};
