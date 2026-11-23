#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B692A3D4939E0EBA.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define E4CF0990A0EA3FA7_A47D69FADF022F52_OFFSET UNITYSDK_OFFSET(0x16BD320)
#define E4CF0990A0EA3FA7_F8C6B52B6CAE02CA_OFFSET UNITYSDK_OFFSET(0x16BD3B0)
#define E4CF0990A0EA3FA7_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2365060)
#define E4CF0990A0EA3FA7__CTOR_OFFSET UNITYSDK_OFFSET(0x16591D0)

inline static constexpr unsigned int E4CF0990A0EA3FA7_TypeDefinitionIndex = 3275;

class E4CF0990A0EA3FA7 : public ::B692A3D4939E0EBA
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* BD45786BF5D355FB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E4CF0990A0EA3FA7__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* A47D69FADF022F52()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + E4CF0990A0EA3FA7_A47D69FADF022F52_OFFSET))(this);
	}

	::System::Void F8C6B52B6CAE02CA(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + E4CF0990A0EA3FA7_F8C6B52B6CAE02CA_OFFSET))(this, E937D4885DAA1AE8);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::E4CF0990A0EA3FA7*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::E4CF0990A0EA3FA7*&))((::PBYTE)hIl2Cpp + E4CF0990A0EA3FA7_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
