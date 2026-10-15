#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ColliderConfig; }
namespace RPG::GameCore { class ModifyAdventureCharacterCollider; }

#define RPG_GAMECORE_MODIFYADVENTURECHARACTERCOLLIDER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D890700)
#define RPG_GAMECORE_MODIFYADVENTURECHARACTERCOLLIDER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D890710)
#define RPG_GAMECORE_MODIFYADVENTURECHARACTERCOLLIDER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8906D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifyAdventureCharacterCollider_TypeDefinitionIndex = 22414;

	class ModifyAdventureCharacterCollider : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean HideSourceCollider; // 0x18
		::System::Byte _padding0[0x7];
		::RPG::GameCore::ColliderConfig* TargetConfig; // 0x20
		::System::Boolean ModifyMainCollider; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYADVENTURECHARACTERCOLLIDER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifyAdventureCharacterCollider* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifyAdventureCharacterCollider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYADVENTURECHARACTERCOLLIDER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifyAdventureCharacterCollider* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifyAdventureCharacterCollider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYADVENTURECHARACTERCOLLIDER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
