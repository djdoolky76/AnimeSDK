#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B4211B350E35C48F.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/F1D6EFC46642D574.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FE5D36879060990F_A765A1D14770A303_OFFSET UNITYSDK_OFFSET(0x23E6E60)
#define FE5D36879060990F_F5CA8117CE55E353_OFFSET UNITYSDK_OFFSET(0x23E6F10)
#define FE5D36879060990F__CTOR_OFFSET UNITYSDK_OFFSET(0x23E7160)

inline static constexpr unsigned int FE5D36879060990F_TypeDefinitionIndex = 3863;

class FE5D36879060990F : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::B4211B350E35C48F<::System::UInt32, ::System::Int32, ::System::UInt32, ::System::UInt32, ::System::Int32>, ::System::Int32>* BA73BC4EB94DC776; // 0x10

	::F1D6EFC46642D574 F5CA8117CE55E353(::System::UInt32 BC184AAB30730354, ::System::Int32 A89DC6E716E9EFAF, ::System::UInt32 A8BA661BA071056E, ::System::UInt32 ED1C8BE20DE066A4, ::System::Int32 F634C8CDF92D8244)
	{
		return ((::F1D6EFC46642D574(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + FE5D36879060990F_F5CA8117CE55E353_OFFSET))(this, BC184AAB30730354, A89DC6E716E9EFAF, A8BA661BA071056E, ED1C8BE20DE066A4, F634C8CDF92D8244);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FE5D36879060990F__CTOR_OFFSET))(this);
	}

	::System::Void A765A1D14770A303()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FE5D36879060990F_A765A1D14770A303_OFFSET))(this);
	}
};
