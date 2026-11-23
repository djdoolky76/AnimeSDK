#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class F751CD46269356E6;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define B13C61DDA470CDB4_A2D42A231EFBDC13_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define B13C61DDA470CDB4_F1B10BE5ACB44CA1_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define B13C61DDA470CDB4_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x24B6F70)
#define B13C61DDA470CDB4_FD3CDE3ECDB436E5_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define B13C61DDA470CDB4__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B13C61DDA470CDB4_TypeDefinitionIndex = 4762;

class B13C61DDA470CDB4 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F751CD46269356E6*>* E57E415293701E51; // 0x10

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F751CD46269356E6*>* A2D42A231EFBDC13()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F751CD46269356E6*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + B13C61DDA470CDB4_A2D42A231EFBDC13_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B13C61DDA470CDB4__CTOR_OFFSET))(this);
	}

	static ::System::UInt32 F1B10BE5ACB44CA1(::F751CD46269356E6* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::F751CD46269356E6*))((::PBYTE)hIl2Cpp + B13C61DDA470CDB4_F1B10BE5ACB44CA1_OFFSET))(E937D4885DAA1AE8);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::B13C61DDA470CDB4*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::B13C61DDA470CDB4*&))((::PBYTE)hIl2Cpp + B13C61DDA470CDB4_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void FD3CDE3ECDB436E5(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F751CD46269356E6*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F751CD46269356E6*>*))((::PBYTE)hIl2Cpp + B13C61DDA470CDB4_FD3CDE3ECDB436E5_OFFSET))(this, E937D4885DAA1AE8);
	}
};
