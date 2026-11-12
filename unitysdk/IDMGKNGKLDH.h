#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Nullable_1.h"

#define IDMGKNGKLDH_KDPEDNKCMEB_OFFSET UNITYSDK_OFFSET(0x3055F90)

inline static constexpr unsigned int IDMGKNGKLDH_TypeDefinitionIndex = 58144;

	struct alignas(8) IDMGKNGKLDH
	{
		::System::Nullable_1<::RPG::GameCore::FixPoint> BIFBJDKMKDL; // 0x10
		::System::Byte _padding0[0x8];
		::System::Nullable_1<::RPG::GameCore::AttackDamageType> PAIECOBACKB; // 0x20
		/*
		::System::Void KDPEDNKCMEB(::IDMGKNGKLDH a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDMGKNGKLDH))((::PBYTE)hIl2Cpp + IDMGKNGKLDH_KDPEDNKCMEB_OFFSET))(this, a1);
		}
		*/

	};
