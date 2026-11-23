#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class FDC5649A3EBD744D;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EBF9472C0477C7E7_B482E4714DBA5F09_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define EBF9472C0477C7E7_E1327D9669871D81_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define EBF9472C0477C7E7_FA4C8CD729901EE5_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define EBF9472C0477C7E7_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2604EB0)
#define EBF9472C0477C7E7__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int EBF9472C0477C7E7_TypeDefinitionIndex = 5810;

class EBF9472C0477C7E7 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FDC5649A3EBD744D*>* BD07E0E308F94029; // 0x10

	::System::Void FA4C8CD729901EE5(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FDC5649A3EBD744D*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FDC5649A3EBD744D*>*))((::PBYTE)hIl2Cpp + EBF9472C0477C7E7_FA4C8CD729901EE5_OFFSET))(this, E937D4885DAA1AE8);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::EBF9472C0477C7E7*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::EBF9472C0477C7E7*&))((::PBYTE)hIl2Cpp + EBF9472C0477C7E7_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBF9472C0477C7E7__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FDC5649A3EBD744D*>* B482E4714DBA5F09()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FDC5649A3EBD744D*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBF9472C0477C7E7_B482E4714DBA5F09_OFFSET))(this);
	}

	static ::System::UInt32 E1327D9669871D81(::FDC5649A3EBD744D* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::FDC5649A3EBD744D*))((::PBYTE)hIl2Cpp + EBF9472C0477C7E7_E1327D9669871D81_OFFSET))(E937D4885DAA1AE8);
	}
};
