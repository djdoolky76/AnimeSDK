#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EnableLocalPlayerMoveIgnoreMonster; }

#define RPG_GAMECORE_ENABLELOCALPLAYERMOVEIGNOREMONSTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D63FBD0)
#define RPG_GAMECORE_ENABLELOCALPLAYERMOVEIGNOREMONSTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D63FBE0)
#define RPG_GAMECORE_ENABLELOCALPLAYERMOVEIGNOREMONSTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D63FBA0)

namespace RPG::GameCore
{
	class EnableLocalPlayerMoveIgnoreMonster : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLELOCALPLAYERMOVEIGNOREMONSTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnableLocalPlayerMoveIgnoreMonster* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnableLocalPlayerMoveIgnoreMonster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLELOCALPLAYERMOVEIGNOREMONSTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnableLocalPlayerMoveIgnoreMonster* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnableLocalPlayerMoveIgnoreMonster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLELOCALPLAYERMOVEIGNOREMONSTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
