#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EC05B6FF03DB975D.h"
#include "unitysdk/System/ValueType.h"

class EFDFD8D59E1B8215;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EFDFD8D59E1B8215_ED99CD1447980C4C_A765A1D14770A303_OFFSET UNITYSDK_OFFSET(0x3FC30C0)
#define EFDFD8D59E1B8215_ED99CD1447980C4C_AB5D34B4CCA111E7_OFFSET UNITYSDK_OFFSET(0x3FC30D0)

inline static constexpr unsigned int EFDFD8D59E1B8215_ED99CD1447980C4C_TypeDefinitionIndex = 14402;

struct alignas(8) EFDFD8D59E1B8215_ED99CD1447980C4C
{
	::System::Collections::Generic::Dictionary_2<::EC05B6FF03DB975D, ::EFDFD8D59E1B8215*>* A8A61CB1A31A75E4; // 0x10

	::System::Void A765A1D14770A303()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFDFD8D59E1B8215_ED99CD1447980C4C_A765A1D14770A303_OFFSET))(this);
	}

	::EFDFD8D59E1B8215* AB5D34B4CCA111E7(::System::String* F79B4D487F303AB2, ::System::Boolean BE734305799BAF73)
	{
		return ((::EFDFD8D59E1B8215*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + EFDFD8D59E1B8215_ED99CD1447980C4C_AB5D34B4CCA111E7_OFFSET))(this, F79B4D487F303AB2, BE734305799BAF73);
	}
};
