#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class BA3C6625CF6A9747;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FD192354D951D8A1_A1F036FE63955765_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define FD192354D951D8A1_B823EA5AB0D54C57_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define FD192354D951D8A1_EB8DF78C1D71130D_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define FD192354D951D8A1_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x26A13B0)
#define FD192354D951D8A1__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FD192354D951D8A1_TypeDefinitionIndex = 6459;

class FD192354D951D8A1 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BA3C6625CF6A9747*>* A3563AE0894B87BA; // 0x10

	static ::System::UInt32 EB8DF78C1D71130D(::BA3C6625CF6A9747* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::BA3C6625CF6A9747*))((::PBYTE)hIl2Cpp + FD192354D951D8A1_EB8DF78C1D71130D_OFFSET))(E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FD192354D951D8A1__CTOR_OFFSET))(this);
	}

	::System::Void A1F036FE63955765(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BA3C6625CF6A9747*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BA3C6625CF6A9747*>*))((::PBYTE)hIl2Cpp + FD192354D951D8A1_A1F036FE63955765_OFFSET))(this, E937D4885DAA1AE8);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::FD192354D951D8A1*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::FD192354D951D8A1*&))((::PBYTE)hIl2Cpp + FD192354D951D8A1_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BA3C6625CF6A9747*>* B823EA5AB0D54C57()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BA3C6625CF6A9747*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FD192354D951D8A1_B823EA5AB0D54C57_OFFSET))(this);
	}
};
