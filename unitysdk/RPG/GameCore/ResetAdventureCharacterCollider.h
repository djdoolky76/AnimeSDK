#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ResetAdventureCharacterCollider; }

#define RPG_GAMECORE_RESETADVENTURECHARACTERCOLLIDER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D95C720)
#define RPG_GAMECORE_RESETADVENTURECHARACTERCOLLIDER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D95C730)
#define RPG_GAMECORE_RESETADVENTURECHARACTERCOLLIDER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D95C660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResetAdventureCharacterCollider_TypeDefinitionIndex = 22415;

	class ResetAdventureCharacterCollider : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETADVENTURECHARACTERCOLLIDER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ResetAdventureCharacterCollider* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ResetAdventureCharacterCollider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETADVENTURECHARACTERCOLLIDER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ResetAdventureCharacterCollider* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ResetAdventureCharacterCollider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETADVENTURECHARACTERCOLLIDER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
