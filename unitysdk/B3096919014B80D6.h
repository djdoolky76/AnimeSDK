#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class EA4EDA8671C85E3D;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define B3096919014B80D6_E1327D9669871D81_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define B3096919014B80D6_E7078D444B4BC338_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define B3096919014B80D6_F0CF78CD9EA7A200_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define B3096919014B80D6_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2540110)
#define B3096919014B80D6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B3096919014B80D6_TypeDefinitionIndex = 5441;

class B3096919014B80D6 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::EA4EDA8671C85E3D*>* B083BA9A37CC84B4; // 0x10

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::B3096919014B80D6*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::B3096919014B80D6*&))((::PBYTE)hIl2Cpp + B3096919014B80D6_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void E7078D444B4BC338(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::EA4EDA8671C85E3D*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::EA4EDA8671C85E3D*>*))((::PBYTE)hIl2Cpp + B3096919014B80D6_E7078D444B4BC338_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B3096919014B80D6__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::EA4EDA8671C85E3D*>* F0CF78CD9EA7A200()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::EA4EDA8671C85E3D*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + B3096919014B80D6_F0CF78CD9EA7A200_OFFSET))(this);
	}

	static ::System::UInt32 E1327D9669871D81(::EA4EDA8671C85E3D* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::EA4EDA8671C85E3D*))((::PBYTE)hIl2Cpp + B3096919014B80D6_E1327D9669871D81_OFFSET))(E937D4885DAA1AE8);
	}
};
