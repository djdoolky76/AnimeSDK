#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class NPCAppearancePreset; }
namespace RPG::GameCore { class NPCAppearancePresetList; }

#define RPG_GAMECORE_NPCAPPEARANCEPRESETLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8CFE30)
#define RPG_GAMECORE_NPCAPPEARANCEPRESETLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8CFD70)

namespace RPG::GameCore
{
	class NPCAppearancePresetList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::NPCAppearancePreset*>* Presets; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCAPPEARANCEPRESETLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::NPCAppearancePresetList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NPCAppearancePresetList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCAPPEARANCEPRESETLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
