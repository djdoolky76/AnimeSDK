#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingBattleAirMotionConfig; }

#define RPG_GAMECORE_CHENLINGBATTLEAIRMOTIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D554520)
#define RPG_GAMECORE_CHENLINGBATTLEAIRMOTIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D553EE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleAirMotionConfig_TypeDefinitionIndex = 15747;

	class ChenLingBattleAirMotionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FixPoint Duration; // 0x10
		::RPG::GameCore::FixPoint VerticalHeight; // 0x18
		::RPG::GameCore::FixPoint HorizontalSpeed; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEAIRMOTIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleAirMotionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleAirMotionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEAIRMOTIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
