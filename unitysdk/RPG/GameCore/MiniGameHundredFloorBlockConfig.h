#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseScrollGameBlockConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MiniGameHundredFloorBlockConfig; }

#define RPG_GAMECORE_MINIGAMEHUNDREDFLOORBLOCKCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D853C20)
#define RPG_GAMECORE_MINIGAMEHUNDREDFLOORBLOCKCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D853C30)
#define RPG_GAMECORE_MINIGAMEHUNDREDFLOORBLOCKCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D853BD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MiniGameHundredFloorBlockConfig_TypeDefinitionIndex = 18813;

	class MiniGameHundredFloorBlockConfig : public ::RPG::GameCore::BaseScrollGameBlockConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIGAMEHUNDREDFLOORBLOCKCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MiniGameHundredFloorBlockConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MiniGameHundredFloorBlockConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIGAMEHUNDREDFLOORBLOCKCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MiniGameHundredFloorBlockConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MiniGameHundredFloorBlockConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIGAMEHUNDREDFLOORBLOCKCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
