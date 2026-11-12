#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class RandomChangeFruitToBlackFogAction; }

#define RPG_GAMECORE_MATCH3_RANDOMCHANGEFRUITTOBLACKFOGACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA6ABF0)
#define RPG_GAMECORE_MATCH3_RANDOMCHANGEFRUITTOBLACKFOGACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EA6AC00)
#define RPG_GAMECORE_MATCH3_RANDOMCHANGEFRUITTOBLACKFOGACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EA6ABA0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int RandomChangeFruitToBlackFogAction_TypeDefinitionIndex = 25399;

	class RandomChangeFruitToBlackFogAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::UInt32 StyleID; // 0x18
		::System::UInt32 Count; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_RANDOMCHANGEFRUITTOBLACKFOGACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::RandomChangeFruitToBlackFogAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::RandomChangeFruitToBlackFogAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_RANDOMCHANGEFRUITTOBLACKFOGACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::RandomChangeFruitToBlackFogAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::RandomChangeFruitToBlackFogAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_RANDOMCHANGEFRUITTOBLACKFOGACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
