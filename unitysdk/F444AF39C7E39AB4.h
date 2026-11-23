#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class F0B67D37EB3A85C8;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define F444AF39C7E39AB4_E2BE8377C2D983F6_OFFSET UNITYSDK_OFFSET(0x17F35D0)
#define F444AF39C7E39AB4_EAC03E14A1B81BBA_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define F444AF39C7E39AB4_F6696792C4A7E8D6_OFFSET UNITYSDK_OFFSET(0x16A7C80)
#define F444AF39C7E39AB4_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2529B30)
#define F444AF39C7E39AB4__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F444AF39C7E39AB4_TypeDefinitionIndex = 5283;

class F444AF39C7E39AB4 : public ::System::Object
{
public:
	::System::UInt32 F78CFA0C288DDEF6; // 0x10
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F0B67D37EB3A85C8*>* FC2FB0F077776CD4; // 0x18

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F0B67D37EB3A85C8*>* EAC03E14A1B81BBA()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F0B67D37EB3A85C8*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + F444AF39C7E39AB4_EAC03E14A1B81BBA_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F444AF39C7E39AB4__CTOR_OFFSET))(this);
	}

	::System::Void F6696792C4A7E8D6(::System::UInt32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + F444AF39C7E39AB4_F6696792C4A7E8D6_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void E2BE8377C2D983F6(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F0B67D37EB3A85C8*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F0B67D37EB3A85C8*>*))((::PBYTE)hIl2Cpp + F444AF39C7E39AB4_E2BE8377C2D983F6_OFFSET))(this, E937D4885DAA1AE8);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::F444AF39C7E39AB4*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::F444AF39C7E39AB4*&))((::PBYTE)hIl2Cpp + F444AF39C7E39AB4_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
