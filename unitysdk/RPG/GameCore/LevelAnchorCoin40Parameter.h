#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelAnchorParameter.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelAnchorCoin40Parameter; }

#define RPG_GAMECORE_LEVELANCHORCOIN40PARAMETER_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9E8070)
#define RPG_GAMECORE_LEVELANCHORCOIN40PARAMETER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E9E8080)
#define RPG_GAMECORE_LEVELANCHORCOIN40PARAMETER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E9E8040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelAnchorCoin40Parameter_TypeDefinitionIndex = 17413;

	class LevelAnchorCoin40Parameter : public ::RPG::GameCore::LevelAnchorParameter
	{
	public:
		::System::UInt32 BatchID; // 0x10
		::System::UInt32 SpawnIndex; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELANCHORCOIN40PARAMETER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelAnchorCoin40Parameter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelAnchorCoin40Parameter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELANCHORCOIN40PARAMETER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelAnchorCoin40Parameter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelAnchorCoin40Parameter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELANCHORCOIN40PARAMETER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
