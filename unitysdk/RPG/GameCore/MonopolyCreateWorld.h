#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonopolyCreateWorld; }

#define RPG_GAMECORE_MONOPOLYCREATEWORLD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D89D540)
#define RPG_GAMECORE_MONOPOLYCREATEWORLD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D89D550)
#define RPG_GAMECORE_MONOPOLYCREATEWORLD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D89D510)

namespace RPG::GameCore
{
	class MonopolyCreateWorld : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 TargetWorldID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYCREATEWORLD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonopolyCreateWorld* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonopolyCreateWorld*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYCREATEWORLD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonopolyCreateWorld* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonopolyCreateWorld*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYCREATEWORLD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
