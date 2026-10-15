#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class DynamicFloat; }

#define ADBMFDNMBIJ_MCBDMHPPLAH_OFFSET UNITYSDK_OFFSET(0xF2A0)

inline static constexpr unsigned int ADBMFDNMBIJ_TypeDefinitionIndex = 57754;

	struct alignas(8) ADBMFDNMBIJ
	{
		::RPG::GameCore::DynamicFloat* MMFJHJFCBMP; // 0x10
		::RPG::GameCore::DynamicFloat* KCNJNNDHEGN; // 0x18
		::RPG::GameCore::DynamicFloat* DDAMKPFFEPB; // 0x20
		::System::Boolean MCBDMHPPLAH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ADBMFDNMBIJ_MCBDMHPPLAH_OFFSET))(this);
		}

	};
