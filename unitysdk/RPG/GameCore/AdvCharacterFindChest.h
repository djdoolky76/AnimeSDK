#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvCharacterFindChest; }

#define RPG_GAMECORE_ADVCHARACTERFINDCHEST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D399450)
#define RPG_GAMECORE_ADVCHARACTERFINDCHEST_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D399460)
#define RPG_GAMECORE_ADVCHARACTERFINDCHEST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D399420)

namespace RPG::GameCore
{
	class AdvCharacterFindChest : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 FindChestFuncID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCHARACTERFINDCHEST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvCharacterFindChest* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvCharacterFindChest*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCHARACTERFINDCHEST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvCharacterFindChest* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvCharacterFindChest*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCHARACTERFINDCHEST_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
