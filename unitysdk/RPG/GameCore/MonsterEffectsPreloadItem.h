#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonsterEffectsPreloadItem; }
namespace RPG::GameCore { class PreloadItemSilence; }
namespace System { class String; }

#define RPG_GAMECORE_MONSTEREFFECTSPRELOADITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8B13F0)
#define RPG_GAMECORE_MONSTEREFFECTSPRELOADITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8B1260)

namespace RPG::GameCore
{
	class MonsterEffectsPreloadItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* SkillTypes; // 0x10
		::Il2CppArray<::RPG::GameCore::PreloadItemSilence*>* EffectPaths; // 0x18
		::Il2CppArray<::RPG::GameCore::PreloadItemSilence*>* OptionalEffectPaths; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTEREFFECTSPRELOADITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonsterEffectsPreloadItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonsterEffectsPreloadItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTEREFFECTSPRELOADITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
