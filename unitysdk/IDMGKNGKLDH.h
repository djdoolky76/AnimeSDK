#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace System { class Nullable; }

#define IDMGKNGKLDH_KDPEDNKCMEB_OFFSET UNITYSDK_OFFSET(0x2E802B0)

inline static constexpr unsigned int IDMGKNGKLDH_TypeDefinitionIndex = 56920;

	struct alignas(8) IDMGKNGKLDH
	{
		::System::Nullable* BIFBJDKMKDL; // 0x10
		::System::Byte _padding0[0x8];
		::System::Nullable* PAIECOBACKB; // 0x20
		/*
		::System::Void KDPEDNKCMEB(::IDMGKNGKLDH a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDMGKNGKLDH))((::PBYTE)hIl2Cpp + IDMGKNGKLDH_KDPEDNKCMEB_OFFSET))(this, a1);
		}
		*/

	};
