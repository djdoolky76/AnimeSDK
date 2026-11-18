#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IKACJBCOKJI.h"
#include "unitysdk/ProtoScript/NodeState.h"
#include "unitysdk/System/ValueType.h"

#define BNCDHKHCHPN_PADHEHLKBDO_OFFSET UNITYSDK_OFFSET(0x78F770)

inline static constexpr unsigned int BNCDHKHCHPN_TypeDefinitionIndex = 82115;

struct alignas(4) BNCDHKHCHPN
{
	::IKACJBCOKJI LPKHABFHCLM; // 0x10
	::ProtoScript::NodeState EEKCLNEKBPD; // 0x14
	::System::Int32 BMGLAJOJPJE; // 0x18

	/*
	::System::Boolean PADHEHLKBDO(::BNCDHKHCHPN LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::BNCDHKHCHPN))((::PBYTE)hIl2Cpp + BNCDHKHCHPN_PADHEHLKBDO_OFFSET))(this, LIBPKNHDIGP);
	}
	*/
};
