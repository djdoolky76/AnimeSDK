#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNAGFFCCOHI.h"

#define GKANKGIPKKL_DFIGOHGIDJN_OFFSET UNITYSDK_OFFSET(0x149DA260)
#define GKANKGIPKKL_IECLBKNFIPH_OFFSET UNITYSDK_OFFSET(0x149DA270)
#define GKANKGIPKKL_NCEODKLOOEB_OFFSET UNITYSDK_OFFSET(0x149DA410)
#define GKANKGIPKKL__CTOR_OFFSET UNITYSDK_OFFSET(0x149DA250)

inline static constexpr unsigned int GKANKGIPKKL_TypeDefinitionIndex = 78264;

class GKANKGIPKKL : public ::JNAGFFCCOHI
{
public:
	::System::Int64 _KMBBJNCEOMG_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKANKGIPKKL__CTOR_OFFSET))(this);
	}

	::System::Int64 DFIGOHGIDJN()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + GKANKGIPKKL_DFIGOHGIDJN_OFFSET))(this);
	}

	::System::Boolean IECLBKNFIPH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GKANKGIPKKL_IECLBKNFIPH_OFFSET))(this);
	}

	::System::Void NCEODKLOOEB(::System::Int64 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + GKANKGIPKKL_NCEODKLOOEB_OFFSET))(this, EGEGIMGMJHN);
	}
};
