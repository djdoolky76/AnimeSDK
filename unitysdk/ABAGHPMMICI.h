#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FTransform.h"
#include "unitysdk/System/ValueType.h"

#define ABAGHPMMICI_BHPDKJDIDPI_OFFSET UNITYSDK_OFFSET(0x7C8C50)
#define ABAGHPMMICI_CGGIHNGAIIC_OFFSET UNITYSDK_OFFSET(0x359720)
#define ABAGHPMMICI_GIEKKCOGOAC_OFFSET UNITYSDK_OFFSET(0x7C8C60)
#define ABAGHPMMICI_HAABMFMJJGG_OFFSET UNITYSDK_OFFSET(0x7C8C30)
#define ABAGHPMMICI_HAHNMAPNHFM_OFFSET UNITYSDK_OFFSET(0x77C100)
#define ABAGHPMMICI_PMJEFCKINLL_OFFSET UNITYSDK_OFFSET(0x3593F0)

inline static constexpr unsigned int ABAGHPMMICI_TypeDefinitionIndex = 69912;

struct alignas(4) ABAGHPMMICI
{
	::Foundation::Unreal::FTransform _LGIMNGBMINK_k__BackingField; // 0x10
	::Foundation::Unreal::FTransform _ANCDIMBNMFL_k__BackingField; // 0x30
	::System::Single _LFJBGIEMCGB_k__BackingField; // 0x50

	::Foundation::Unreal::FTransform HAABMFMJJGG()
	{
		return ((::Foundation::Unreal::FTransform(*)(::PVOID))((::PBYTE)hIl2Cpp + ABAGHPMMICI_HAABMFMJJGG_OFFSET))(this);
	}

	::System::Void BHPDKJDIDPI(::Foundation::Unreal::FTransform EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FTransform))((::PBYTE)hIl2Cpp + ABAGHPMMICI_BHPDKJDIDPI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single HAHNMAPNHFM()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ABAGHPMMICI_HAHNMAPNHFM_OFFSET))(this);
	}

	::System::Void GIEKKCOGOAC(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ABAGHPMMICI_GIEKKCOGOAC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void PMJEFCKINLL(::Foundation::Unreal::FTransform EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FTransform))((::PBYTE)hIl2Cpp + ABAGHPMMICI_PMJEFCKINLL_OFFSET))(this, EGEGIMGMJHN);
	}

	::Foundation::Unreal::FTransform CGGIHNGAIIC()
	{
		return ((::Foundation::Unreal::FTransform(*)(::PVOID))((::PBYTE)hIl2Cpp + ABAGHPMMICI_CGGIHNGAIIC_OFFSET))(this);
	}
};
