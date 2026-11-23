#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class AB0F24070EFFBB23;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define B5B0CA6982C4DA39_A373DD05ED03DDBF_OFFSET UNITYSDK_OFFSET(0x17F35D0)
#define B5B0CA6982C4DA39_E048CA003D428809_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define B5B0CA6982C4DA39_E2F06C618F3643EA_OFFSET UNITYSDK_OFFSET(0x16A7C80)
#define B5B0CA6982C4DA39_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x23F00A0)
#define B5B0CA6982C4DA39__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B5B0CA6982C4DA39_TypeDefinitionIndex = 3933;

class B5B0CA6982C4DA39 : public ::System::Object
{
public:
	::System::UInt32 E3B65F0DAFA73D05; // 0x10
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AB0F24070EFFBB23*>* B9A72174936D885D; // 0x18

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::B5B0CA6982C4DA39*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::B5B0CA6982C4DA39*&))((::PBYTE)hIl2Cpp + B5B0CA6982C4DA39_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void E2F06C618F3643EA(::System::UInt32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + B5B0CA6982C4DA39_E2F06C618F3643EA_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B5B0CA6982C4DA39__CTOR_OFFSET))(this);
	}

	::System::Void A373DD05ED03DDBF(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AB0F24070EFFBB23*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AB0F24070EFFBB23*>*))((::PBYTE)hIl2Cpp + B5B0CA6982C4DA39_A373DD05ED03DDBF_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AB0F24070EFFBB23*>* E048CA003D428809()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AB0F24070EFFBB23*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + B5B0CA6982C4DA39_E048CA003D428809_OFFSET))(this);
	}
};
