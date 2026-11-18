#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFOEOKBFJPJ.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JPKMBBAHKDH_BBPCBEEHALC_1_OFFSET UNITYSDK_OFFSET(0x18A2B5E0)
#define JPKMBBAHKDH_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x18A2B2B0)
#define JPKMBBAHKDH_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x18A2B3A0)
#define JPKMBBAHKDH_MBKDOMFJFIG_OFFSET UNITYSDK_OFFSET(0x18A2B400)
#define JPKMBBAHKDH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x18A2B590)
#define JPKMBBAHKDH__CTOR_OFFSET UNITYSDK_OFFSET(0x18A2B2A0)

inline static constexpr unsigned int JPKMBBAHKDH_TypeDefinitionIndex = 41631;

class JPKMBBAHKDH : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::EFOEOKBFJPJ>* IGECAGKFMJG; // 0x10
	::System::Int32 KEHPPMKCLHG; // 0x18
	::System::UInt32 JHGKGEGGGFF; // 0x1C
	::System::Boolean JIEGODBBNGG; // 0x20
	::System::Byte _padding0[0x3];
	::System::Int32 CMLEHLENPEN; // 0x24
	::System::Int32 HAGEBLIFPIF; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPKMBBAHKDH__CTOR_OFFSET))(this);
	}

	static ::JPKMBBAHKDH* BBPCBEEHALC(::System::UInt32 JHGKGEGGGFF)
	{
		return ((::JPKMBBAHKDH*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JPKMBBAHKDH_BBPCBEEHALC_OFFSET))(JHGKGEGGGFF);
	}

	static ::System::Void MBKDOMFJFIG(::JPKMBBAHKDH* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::JPKMBBAHKDH*))((::PBYTE)hIl2Cpp + JPKMBBAHKDH_MBKDOMFJFIG_OFFSET))(LJBPECKCCEA);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 JHGKGEGGGFF)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JPKMBBAHKDH_CNHBDOMKKDE_OFFSET))(this, JHGKGEGGGFF);
	}

	static ::JPKMBBAHKDH* BBPCBEEHALC_1(::JPKMBBAHKDH* ECDFBPODEOB)
	{
		return ((::JPKMBBAHKDH*(*)(::JPKMBBAHKDH*))((::PBYTE)hIl2Cpp + JPKMBBAHKDH_BBPCBEEHALC_1_OFFSET))(ECDFBPODEOB);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPKMBBAHKDH_PHOADBJGFBE_OFFSET))(this);
	}
};
