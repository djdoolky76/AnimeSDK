#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureShowReading; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_ADVENTURESHOWREADING_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3CD330)
#define RPG_GAMECORE_ADVENTURESHOWREADING_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3CD340)
#define RPG_GAMECORE_ADVENTURESHOWREADING_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3CD2F0)

namespace RPG::GameCore
{
	class AdventureShowReading : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* BookID; // 0x18
		::System::Boolean WaitForExit; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESHOWREADING_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureShowReading* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureShowReading*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESHOWREADING_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureShowReading* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureShowReading*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESHOWREADING_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
