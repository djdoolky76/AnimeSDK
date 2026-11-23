#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class B10FCC35E12D8706;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define F4A3E943BD188F74_E4417C4F47843689_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define F4A3E943BD188F74_F1B2F7ED6BA74FCF_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define F4A3E943BD188F74_F3D3898A32696B8E_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define F4A3E943BD188F74_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x25339C0)
#define F4A3E943BD188F74__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F4A3E943BD188F74_TypeDefinitionIndex = 5323;

class F4A3E943BD188F74 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::B10FCC35E12D8706*>* B35013171B972AC4; // 0x10

	::System::Void F3D3898A32696B8E(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::B10FCC35E12D8706*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::B10FCC35E12D8706*>*))((::PBYTE)hIl2Cpp + F4A3E943BD188F74_F3D3898A32696B8E_OFFSET))(this, E937D4885DAA1AE8);
	}

	static ::System::UInt32 F1B2F7ED6BA74FCF(::B10FCC35E12D8706* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::B10FCC35E12D8706*))((::PBYTE)hIl2Cpp + F4A3E943BD188F74_F1B2F7ED6BA74FCF_OFFSET))(E937D4885DAA1AE8);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::F4A3E943BD188F74*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::F4A3E943BD188F74*&))((::PBYTE)hIl2Cpp + F4A3E943BD188F74_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F4A3E943BD188F74__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::B10FCC35E12D8706*>* E4417C4F47843689()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::B10FCC35E12D8706*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + F4A3E943BD188F74_E4417C4F47843689_OFFSET))(this);
	}
};
