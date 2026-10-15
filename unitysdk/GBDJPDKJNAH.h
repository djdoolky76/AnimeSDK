#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/CombatPowerRelicRarityType.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"
class CCDMGPLMKHJ;
namespace RPG::GameCore { class AvatarRelicRecommendRow; }

#define GBDJPDKJNAH_HJOODJOOHCG_OFFSET UNITYSDK_OFFSET(0x159406F0)
#define GBDJPDKJNAH_JCOPJGBOOKG_OFFSET UNITYSDK_OFFSET(0x159405F0)

inline static constexpr unsigned int GBDJPDKJNAH_TypeDefinitionIndex = 62868;

	class GBDJPDKJNAH : public ::System::Object
	{
	public:
		static ::RPG::GameCore::AvatarPropertyType JCOPJGBOOKG(::RPG::GameCore::RelicType a1, ::RPG::GameCore::AvatarRelicRecommendRow* a2)
		{
			return ((::RPG::GameCore::AvatarPropertyType(*)(::RPG::GameCore::RelicType, ::RPG::GameCore::AvatarRelicRecommendRow*))((::PBYTE)hIl2Cpp + GBDJPDKJNAH_JCOPJGBOOKG_OFFSET))(a1, a2);
		}

		static ::CCDMGPLMKHJ* HJOODJOOHCG(::System::UInt32 a1, ::RPG::GameCore::CombatPowerRelicRarityType a2, ::System::UInt32 a3, ::RPG::GameCore::RelicType a4)
		{
			return ((::CCDMGPLMKHJ*(*)(::System::UInt32, ::RPG::GameCore::CombatPowerRelicRarityType, ::System::UInt32, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + GBDJPDKJNAH_HJOODJOOHCG_OFFSET))(a1, a2, a3, a4);
		}

	};
