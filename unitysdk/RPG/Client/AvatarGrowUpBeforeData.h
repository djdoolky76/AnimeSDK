#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class AvatarGrowUpBeforeData; }

#define RPG_CLIENT_AVATARGROWUPBEFOREDATA_COPYTO_OFFSET UNITYSDK_OFFSET(0x1A4C5D00)
#define RPG_CLIENT_AVATARGROWUPBEFOREDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1A4C5D90)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarGrowUpBeforeData_TypeDefinitionIndex = 63878;

	class AvatarGrowUpBeforeData : public ::System::Object
	{
	public:
		::System::UInt32 PromotionBefore; // 0x10
		::System::UInt32 LevelBefore; // 0x14
		::RPG::GameCore::FixPoint DefenseBefore; // 0x18
		::RPG::GameCore::FixPoint SpeedBefore; // 0x20
		::RPG::GameCore::FixPoint AttackBefore; // 0x28
		::RPG::GameCore::FixPoint HpMaxBefore; // 0x30
		::System::UInt32 MaxLevelBefore; // 0x38
		::System::UInt32 ExpBefore; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARGROWUPBEFOREDATA_CTOR_OFFSET))(this);
		}

		::System::Void CopyTo(::RPG::Client::AvatarGrowUpBeforeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarGrowUpBeforeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARGROWUPBEFOREDATA_COPYTO_OFFSET))(this, a1);
		}

	};
}
