#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class B2D1C4FCAF100133;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define B24692325F61B395_A685E5BDF35B6902_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define B24692325F61B395_EB8DF78C1D71130D_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define B24692325F61B395_F7AD3F18F665CDAE_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define B24692325F61B395_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x23CB770)
#define B24692325F61B395__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B24692325F61B395_TypeDefinitionIndex = 3733;

class B24692325F61B395 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::B2D1C4FCAF100133*>* EB67DA13D9324FA7; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B24692325F61B395__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::B2D1C4FCAF100133*>* A685E5BDF35B6902()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::B2D1C4FCAF100133*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + B24692325F61B395_A685E5BDF35B6902_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::B24692325F61B395*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::B24692325F61B395*&))((::PBYTE)hIl2Cpp + B24692325F61B395_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void F7AD3F18F665CDAE(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::B2D1C4FCAF100133*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::B2D1C4FCAF100133*>*))((::PBYTE)hIl2Cpp + B24692325F61B395_F7AD3F18F665CDAE_OFFSET))(this, E937D4885DAA1AE8);
	}

	static ::System::UInt32 EB8DF78C1D71130D(::B2D1C4FCAF100133* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::B2D1C4FCAF100133*))((::PBYTE)hIl2Cpp + B24692325F61B395_EB8DF78C1D71130D_OFFSET))(E937D4885DAA1AE8);
	}
};
