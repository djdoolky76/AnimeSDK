#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class AB2350085907ED25;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EAA44FE9BD4B633D_A7BA3814563A1962_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define EAA44FE9BD4B633D_EB8DF78C1D71130D_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define EAA44FE9BD4B633D_EF7B0DC7FB0E9C19_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define EAA44FE9BD4B633D_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x25EE460)
#define EAA44FE9BD4B633D__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int EAA44FE9BD4B633D_TypeDefinitionIndex = 5768;

class EAA44FE9BD4B633D : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AB2350085907ED25*>* FA6CFB54E0388C19; // 0x10

	::System::Void A7BA3814563A1962(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AB2350085907ED25*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AB2350085907ED25*>*))((::PBYTE)hIl2Cpp + EAA44FE9BD4B633D_A7BA3814563A1962_OFFSET))(this, E937D4885DAA1AE8);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::EAA44FE9BD4B633D*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::EAA44FE9BD4B633D*&))((::PBYTE)hIl2Cpp + EAA44FE9BD4B633D_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	static ::System::UInt32 EB8DF78C1D71130D(::AB2350085907ED25* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::AB2350085907ED25*))((::PBYTE)hIl2Cpp + EAA44FE9BD4B633D_EB8DF78C1D71130D_OFFSET))(E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAA44FE9BD4B633D__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AB2350085907ED25*>* EF7B0DC7FB0E9C19()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AB2350085907ED25*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAA44FE9BD4B633D_EF7B0DC7FB0E9C19_OFFSET))(this);
	}
};
