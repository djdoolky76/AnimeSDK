#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class B3687AB065DF94CB;
class E16EAF671A2C14C9;
class F39D71B574052A81;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define F50E6E04FC902BDF_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2359550)
#define F50E6E04FC902BDF__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F50E6E04FC902BDF_TypeDefinitionIndex = 3230;

class F50E6E04FC902BDF : public ::System::Object
{
public:
	::UnityEngine::Vector3 A578F37040EB6C70; // 0x10
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* F1127B5E14307CAE; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E16EAF671A2C14C9*>* E8F97B509FA5DB36; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::B3687AB065DF94CB*>* F2D60D74E7A13341; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F39D71B574052A81*>* E06930C3239687E6; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F50E6E04FC902BDF__CTOR_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::F50E6E04FC902BDF*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::F50E6E04FC902BDF*&))((::PBYTE)hIl2Cpp + F50E6E04FC902BDF_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
