#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleAffectRangeConfig; }

#define RPG_GAMECORE_BATTLEAFFECTRANGECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4410C0)
#define RPG_GAMECORE_BATTLEAFFECTRANGECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D440F00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleAffectRangeConfig_TypeDefinitionIndex = 17618;

	class BattleAffectRangeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 MaxWaveCount; // 0x10
		::System::Single Radius; // 0x14
		::System::Single EliteRadius; // 0x18
		::System::Single MaxDiffY; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEAFFECTRANGECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleAffectRangeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleAffectRangeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEAFFECTRANGECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
