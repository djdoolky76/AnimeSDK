#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define OFCIPACMFFN_AHOIKBPNPHO_OFFSET UNITYSDK_OFFSET(0x409330)
#define OFCIPACMFFN_NKKLLFHMFDL_OFFSET UNITYSDK_OFFSET(0x811810)
#define OFCIPACMFFN__CTOR_OFFSET UNITYSDK_OFFSET(0x8117D0)

inline static constexpr unsigned int OFCIPACMFFN_TypeDefinitionIndex = 62941;

struct alignas(4) OFCIPACMFFN
{
	::System::Single AHHCFEDEJAM; // 0x10
	::System::Single DGAMGMEDHIN; // 0x14

	::System::Void _ctor(::System::Single LMBJODCLEPC, ::System::Single OBGCIDDIGAB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + OFCIPACMFFN__CTOR_OFFSET))(this, LMBJODCLEPC, OBGCIDDIGAB);
	}

	::System::Double NKKLLFHMFDL(::System::Single AHAFNGEDPLI)
	{
		return ((::System::Double(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OFCIPACMFFN_NKKLLFHMFDL_OFFSET))(this, AHAFNGEDPLI);
	}

	::System::Single AHOIKBPNPHO()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OFCIPACMFFN_AHOIKBPNPHO_OFFSET))(this);
	}
};
