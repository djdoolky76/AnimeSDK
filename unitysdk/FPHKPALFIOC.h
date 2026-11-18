#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNEPKEJAAMC.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define FPHKPALFIOC_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x967370)
#define FPHKPALFIOC_IGMGOPICCBG_OFFSET UNITYSDK_OFFSET(0x967400)
#define FPHKPALFIOC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x967360)
#define FPHKPALFIOC__CTOR_OFFSET UNITYSDK_OFFSET(0x967330)

inline static constexpr unsigned int FPHKPALFIOC_TypeDefinitionIndex = 28956;

struct alignas(4) FPHKPALFIOC
{
	::System::Int32 IDLHFIIJPEM; // 0x10
	::System::Int32 HLBKHEFJAPH; // 0x14
	::System::UInt16 BLHPOJCFFMB; // 0x18
	::System::UInt16 IGHHEEDJPCN; // 0x1A
	::LNEPKEJAAMC DHJBCIDGHMC; // 0x1C
	::LNEPKEJAAMC MFJCAKHDMOG; // 0x20
	::LNEPKEJAAMC JFNBCNHAJGD; // 0x24

	::System::Void _ctor(::System::Int32 GEPABHJBIAH, ::System::Int32 DKOFFFNEFJC, ::System::UInt16 PMBKBLKMMJG, ::LNEPKEJAAMC OJPBJDIKBKH, ::LNEPKEJAAMC DPCGHJMIBJA, ::LNEPKEJAAMC ECALAPAKDCF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::UInt16, ::LNEPKEJAAMC, ::LNEPKEJAAMC, ::LNEPKEJAAMC))((::PBYTE)hIl2Cpp + FPHKPALFIOC__CTOR_OFFSET))(this, GEPABHJBIAH, DKOFFFNEFJC, PMBKBLKMMJG, OJPBJDIKBKH, DPCGHJMIBJA, ECALAPAKDCF);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPHKPALFIOC_TOSTRING_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPHKPALFIOC_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Boolean IGMGOPICCBG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FPHKPALFIOC_IGMGOPICCBG_OFFSET))(this);
	}
};
