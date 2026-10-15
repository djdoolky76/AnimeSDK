#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournBuildRefSortConfig; }

#define RPG_GAMECORE_ROGUETOURNBUILDREFSORTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA35290)
#define RPG_GAMECORE_ROGUETOURNBUILDREFSORTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA35090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournBuildRefSortConfig_TypeDefinitionIndex = 17680;

	class RogueTournBuildRefSortConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Double LikeCountRate; // 0x10
		::System::Double FavoriteCountRate; // 0x18
		::System::Double AppliedCountRate; // 0x20
		::System::Double OpWeightRate; // 0x28
		::System::Double CurGameVersionRate; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUILDREFSORTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournBuildRefSortConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournBuildRefSortConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUILDREFSORTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
