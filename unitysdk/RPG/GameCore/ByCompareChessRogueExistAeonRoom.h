#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareChessRogueExistAeonRoom; }

#define RPG_GAMECORE_BYCOMPARECHESSROGUEEXISTAEONROOM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4743F0)
#define RPG_GAMECORE_BYCOMPARECHESSROGUEEXISTAEONROOM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D474400)
#define RPG_GAMECORE_BYCOMPARECHESSROGUEEXISTAEONROOM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4743B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareChessRogueExistAeonRoom_TypeDefinitionIndex = 20799;

	class ByCompareChessRogueExistAeonRoom : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHESSROGUEEXISTAEONROOM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareChessRogueExistAeonRoom* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareChessRogueExistAeonRoom*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHESSROGUEEXISTAEONROOM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareChessRogueExistAeonRoom* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareChessRogueExistAeonRoom*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHESSROGUEEXISTAEONROOM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
