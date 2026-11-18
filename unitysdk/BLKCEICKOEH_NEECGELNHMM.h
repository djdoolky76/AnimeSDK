#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"
#include "unitysdk/System/ValueType.h"

class AHAICPLGBAH;

#define BLKCEICKOEH_NEECGELNHMM_ANIPOHJKMEO_OFFSET UNITYSDK_OFFSET(0x5E68F0)

inline static constexpr unsigned int BLKCEICKOEH_NEECGELNHMM_TypeDefinitionIndex = 93034;

struct alignas(8) BLKCEICKOEH_NEECGELNHMM
{
	::Foundation::Unreal::FGameplayTagContainer CKJHGHLCFOE; // 0x10
	::AHAICPLGBAH* OKAJPLCIEPN; // 0x80

	::System::Boolean ANIPOHJKMEO(::System::Int32 HPFIJJOGGEC, ::Foundation::Unreal::FGameplayTagContainer GMKMJBONMDC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Foundation::Unreal::FGameplayTagContainer))((::PBYTE)hIl2Cpp + BLKCEICKOEH_NEECGELNHMM_ANIPOHJKMEO_OFFSET))(this, HPFIJJOGGEC, GMKMJBONMDC);
	}
};
