#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class E96CC96B88AEF4E0;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BF1931F3308CE127_AA368B5A87250DF4_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define BF1931F3308CE127_E084C522C9EBA972_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define BF1931F3308CE127_EB8DF78C1D71130D_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define BF1931F3308CE127_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x240A3E0)
#define BF1931F3308CE127__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BF1931F3308CE127_TypeDefinitionIndex = 4019;

class BF1931F3308CE127 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E96CC96B88AEF4E0*>* FF3B2DCCA7DBFF16; // 0x10

	static ::System::UInt32 EB8DF78C1D71130D(::E96CC96B88AEF4E0* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::E96CC96B88AEF4E0*))((::PBYTE)hIl2Cpp + BF1931F3308CE127_EB8DF78C1D71130D_OFFSET))(E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E96CC96B88AEF4E0*>* AA368B5A87250DF4()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E96CC96B88AEF4E0*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BF1931F3308CE127_AA368B5A87250DF4_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BF1931F3308CE127__CTOR_OFFSET))(this);
	}

	::System::Void E084C522C9EBA972(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E96CC96B88AEF4E0*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E96CC96B88AEF4E0*>*))((::PBYTE)hIl2Cpp + BF1931F3308CE127_E084C522C9EBA972_OFFSET))(this, E937D4885DAA1AE8);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::BF1931F3308CE127*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::BF1931F3308CE127*&))((::PBYTE)hIl2Cpp + BF1931F3308CE127_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
