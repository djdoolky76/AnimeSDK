#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define HPIILKMDMFO_GJHIHBNCPNL_PMHCOODEDDN_OFFSET UNITYSDK_OFFSET(0x611DC0)
#define HPIILKMDMFO_GJHIHBNCPNL__CTOR_OFFSET UNITYSDK_OFFSET(0x611DB0)

inline static constexpr unsigned int HPIILKMDMFO_GJHIHBNCPNL_TypeDefinitionIndex = 58779;

struct alignas(4) HPIILKMDMFO_GJHIHBNCPNL
{
	::System::UInt32 PLECBIFDPIP; // 0x10
	::System::UInt32 EHCHIBKPFED; // 0x14

	::System::Void _ctor(::System::UInt32 PLECBIFDPIP)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HPIILKMDMFO_GJHIHBNCPNL__CTOR_OFFSET))(this, PLECBIFDPIP);
	}

	::System::Void PMHCOODEDDN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPIILKMDMFO_GJHIHBNCPNL_PMHCOODEDDN_OFFSET))(this);
	}
};
