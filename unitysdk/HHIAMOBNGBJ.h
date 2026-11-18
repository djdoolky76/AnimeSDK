#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HHIAMOBNGBJ_FHPCLMPAMMG_OFFSET UNITYSDK_OFFSET(0x16CF0C60)
#define HHIAMOBNGBJ_LHMDBICGJKN_OFFSET UNITYSDK_OFFSET(0x16CF0C70)
#define HHIAMOBNGBJ_MMCIBCHKMBC_OFFSET UNITYSDK_OFFSET(0x16CF0C50)
#define HHIAMOBNGBJ_ODCKAMEPCFN_OFFSET UNITYSDK_OFFSET(0x16CF0C40)
#define HHIAMOBNGBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x16CF0AD0)

inline static constexpr unsigned int HHIAMOBNGBJ_TypeDefinitionIndex = 86877;

class HHIAMOBNGBJ : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Double>* LIBCAOPOHMF; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FECLMHDHJLO; // 0x18
	::System::Int32 _KGJGHDBHABA_k__BackingField; // 0x20
	::System::Byte _padding0[0x4];
	::System::Double _HHACAMJFHDC_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHIAMOBNGBJ__CTOR_OFFSET))(this);
	}

	::System::Int32 ODCKAMEPCFN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHIAMOBNGBJ_ODCKAMEPCFN_OFFSET))(this);
	}

	::System::Double MMCIBCHKMBC()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + HHIAMOBNGBJ_MMCIBCHKMBC_OFFSET))(this);
	}

	::System::Void FHPCLMPAMMG(::System::Double EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + HHIAMOBNGBJ_FHPCLMPAMMG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void LHMDBICGJKN(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HHIAMOBNGBJ_LHMDBICGJKN_OFFSET))(this, EGEGIMGMJHN);
	}
};
