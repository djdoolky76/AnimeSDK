#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class BE08A46D55F3A69F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define B2574D9C32D3C4A7_B49542A617935DF0_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define B2574D9C32D3C4A7_F4E0D0268F06A047_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define B2574D9C32D3C4A7_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x24D4520)
#define B2574D9C32D3C4A7__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B2574D9C32D3C4A7_TypeDefinitionIndex = 5021;

class B2574D9C32D3C4A7 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::BE08A46D55F3A69F*>* B51A04FD2FA81372; // 0x10

	::System::Void F4E0D0268F06A047(::System::Collections::Generic::Dictionary_2<::System::String*, ::BE08A46D55F3A69F*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::BE08A46D55F3A69F*>*))((::PBYTE)hIl2Cpp + B2574D9C32D3C4A7_F4E0D0268F06A047_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::BE08A46D55F3A69F*>* B49542A617935DF0()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::BE08A46D55F3A69F*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + B2574D9C32D3C4A7_B49542A617935DF0_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B2574D9C32D3C4A7__CTOR_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::B2574D9C32D3C4A7*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::B2574D9C32D3C4A7*&))((::PBYTE)hIl2Cpp + B2574D9C32D3C4A7_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
