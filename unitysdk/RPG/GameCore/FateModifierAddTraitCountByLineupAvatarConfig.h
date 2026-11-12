#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateModifierAddTraitCountByLineupAvatarConfig; }

#define RPG_GAMECORE_FATEMODIFIERADDTRAITCOUNTBYLINEUPAVATARCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8A7AB0)
#define RPG_GAMECORE_FATEMODIFIERADDTRAITCOUNTBYLINEUPAVATARCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E8A7AC0)
#define RPG_GAMECORE_FATEMODIFIERADDTRAITCOUNTBYLINEUPAVATARCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E8A7A70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierAddTraitCountByLineupAvatarConfig_TypeDefinitionIndex = 19474;

	class FateModifierAddTraitCountByLineupAvatarConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERADDTRAITCOUNTBYLINEUPAVATARCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateModifierAddTraitCountByLineupAvatarConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateModifierAddTraitCountByLineupAvatarConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERADDTRAITCOUNTBYLINEUPAVATARCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateModifierAddTraitCountByLineupAvatarConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateModifierAddTraitCountByLineupAvatarConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERADDTRAITCOUNTBYLINEUPAVATARCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
