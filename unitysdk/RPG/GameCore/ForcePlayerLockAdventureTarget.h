#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ForcePlayerLockAdventureTarget; }

#define RPG_GAMECORE_FORCEPLAYERLOCKADVENTURETARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6E96E0)
#define RPG_GAMECORE_FORCEPLAYERLOCKADVENTURETARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6E96F0)
#define RPG_GAMECORE_FORCEPLAYERLOCKADVENTURETARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6E96B0)

namespace RPG::GameCore
{
	class ForcePlayerLockAdventureTarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsProp; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 GroupID; // 0x1C
		::System::UInt32 GroupInstanceID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCEPLAYERLOCKADVENTURETARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ForcePlayerLockAdventureTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ForcePlayerLockAdventureTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCEPLAYERLOCKADVENTURETARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ForcePlayerLockAdventureTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ForcePlayerLockAdventureTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCEPLAYERLOCKADVENTURETARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
