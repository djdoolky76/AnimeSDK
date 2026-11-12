#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueDLC1Dot3AdventureRoomPrepare; }

#define RPG_GAMECORE_ROGUEDLC1DOT3ADVENTUREROOMPREPARE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBFC3C0)
#define RPG_GAMECORE_ROGUEDLC1DOT3ADVENTUREROOMPREPARE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EBFC3D0)
#define RPG_GAMECORE_ROGUEDLC1DOT3ADVENTUREROOMPREPARE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EBFC300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLC1Dot3AdventureRoomPrepare_TypeDefinitionIndex = 22681;

	class RogueDLC1Dot3AdventureRoomPrepare : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3ADVENTUREROOMPREPARE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueDLC1Dot3AdventureRoomPrepare* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueDLC1Dot3AdventureRoomPrepare*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3ADVENTUREROOMPREPARE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueDLC1Dot3AdventureRoomPrepare* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueDLC1Dot3AdventureRoomPrepare*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3ADVENTUREROOMPREPARE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
