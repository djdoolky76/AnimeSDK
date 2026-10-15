#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DestroyBattleCharacter; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_DESTROYBATTLECHARACTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5CED20)
#define RPG_GAMECORE_DESTROYBATTLECHARACTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5CED60)
#define RPG_GAMECORE_DESTROYBATTLECHARACTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5CECC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DestroyBattleCharacter_TypeDefinitionIndex = 22755;

	class DestroyBattleCharacter : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* CharacterUniqueName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYBATTLECHARACTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DestroyBattleCharacter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DestroyBattleCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYBATTLECHARACTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DestroyBattleCharacter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DestroyBattleCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYBATTLECHARACTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
