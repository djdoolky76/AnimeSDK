#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterPreloadConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleEventEffectsPreloadList; }
namespace System { class String; }

#define RPG_GAMECORE_BATTLEEVENTEFFECTSPRELOADLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D42D000)
#define RPG_GAMECORE_BATTLEEVENTEFFECTSPRELOADLIST_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D42D010)
#define RPG_GAMECORE_BATTLEEVENTEFFECTSPRELOADLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D42CFD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleEventEffectsPreloadList_TypeDefinitionIndex = 16366;

	class BattleEventEffectsPreloadList : public ::RPG::GameCore::CharacterPreloadConfigBase
	{
	public:
		::Il2CppArray<::System::String*>* EffectPaths; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTEFFECTSPRELOADLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleEventEffectsPreloadList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleEventEffectsPreloadList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTEFFECTSPRELOADLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleEventEffectsPreloadList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleEventEffectsPreloadList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTEFFECTSPRELOADLIST_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
