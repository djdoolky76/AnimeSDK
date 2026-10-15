#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class RandomChangeFruitToLineBombAction; }

#define RPG_GAMECORE_MATCH3_RANDOMCHANGEFRUITTOLINEBOMBACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D822460)
#define RPG_GAMECORE_MATCH3_RANDOMCHANGEFRUITTOLINEBOMBACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D822470)
#define RPG_GAMECORE_MATCH3_RANDOMCHANGEFRUITTOLINEBOMBACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D822410)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int RandomChangeFruitToLineBombAction_TypeDefinitionIndex = 24918;

	class RandomChangeFruitToLineBombAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::UInt32 StyleID; // 0x18
		::System::UInt32 Count; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_RANDOMCHANGEFRUITTOLINEBOMBACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::RandomChangeFruitToLineBombAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::RandomChangeFruitToLineBombAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_RANDOMCHANGEFRUITTOLINEBOMBACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::RandomChangeFruitToLineBombAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::RandomChangeFruitToLineBombAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_RANDOMCHANGEFRUITTOLINEBOMBACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
