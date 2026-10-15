#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EffectConfig; }
namespace RPG::GameCore { class NPCAppearancePreset; }
namespace System { class String; }

#define RPG_GAMECORE_NPCAPPEARANCEPRESET_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8CFD60)
#define RPG_GAMECORE_NPCAPPEARANCEPRESET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8CFBA0)

namespace RPG::GameCore
{
	class NPCAppearancePreset : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::Il2CppArray<::System::String*>* OverrideReplaceMaterialKeyList; // 0x18
		::System::String* SFXOnLoad; // 0x20
		::Il2CppArray<::RPG::GameCore::EffectConfig*>* AdditiveResidentEffect; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCAPPEARANCEPRESET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::NPCAppearancePreset* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NPCAppearancePreset*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCAPPEARANCEPRESET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
