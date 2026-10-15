#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateModifierEnableSpecialAvatarConfig; }

#define RPG_GAMECORE_FATEMODIFIERENABLESPECIALAVATARCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D69B4E0)
#define RPG_GAMECORE_FATEMODIFIERENABLESPECIALAVATARCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D69B4F0)
#define RPG_GAMECORE_FATEMODIFIERENABLESPECIALAVATARCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D69B4A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierEnableSpecialAvatarConfig_TypeDefinitionIndex = 19267;

	class FateModifierEnableSpecialAvatarConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERENABLESPECIALAVATARCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateModifierEnableSpecialAvatarConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateModifierEnableSpecialAvatarConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERENABLESPECIALAVATARCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateModifierEnableSpecialAvatarConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateModifierEnableSpecialAvatarConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERENABLESPECIALAVATARCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
