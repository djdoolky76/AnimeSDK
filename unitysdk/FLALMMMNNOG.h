#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UltraDistanceGlobalDynamicOffsetMode.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FLALMMMNNOG_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x2E77770)

inline static constexpr unsigned int FLALMMMNNOG_TypeDefinitionIndex = 69573;

	struct alignas(4) FLALMMMNNOG
	{
		::System::Boolean CAGCHKJHMPD; // 0x10
		::System::Boolean BHFOMMOHPIH; // 0x11
		::System::Byte _padding0[0x2];
		::UnityEngine::Vector3 DMNGLCNAEJG; // 0x14
		::RPG::Client::UltraDistanceGlobalDynamicOffsetMode JCCBNABGFKE; // 0x20
		::System::Single ELFJNNFHCGO; // 0x24
		::System::Single BJBIBMDPCNP; // 0x28
		::System::Single ACNPPNGIKDD; // 0x2C
		::System::Boolean KIDDKMBAEPF; // 0x30
		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLALMMMNNOG_KHGIKBFDLFB_OFFSET))(this);
		}

	};
