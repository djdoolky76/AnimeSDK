#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayerForceWalk; }

#define RPG_GAMECORE_PLAYERFORCEWALK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D933CB0)
#define RPG_GAMECORE_PLAYERFORCEWALK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D933CC0)
#define RPG_GAMECORE_PLAYERFORCEWALK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D933C80)

namespace RPG::GameCore
{
	class PlayerForceWalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean ForceWalk; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERFORCEWALK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayerForceWalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayerForceWalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERFORCEWALK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayerForceWalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayerForceWalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERFORCEWALK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
