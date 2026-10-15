#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StopSerialBells; }

#define RPG_GAMECORE_STOPSERIALBELLS_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB25D70)
#define RPG_GAMECORE_STOPSERIALBELLS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB25D80)
#define RPG_GAMECORE_STOPSERIALBELLS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB25CB0)

namespace RPG::GameCore
{
	class StopSerialBells : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPSERIALBELLS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StopSerialBells* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StopSerialBells*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPSERIALBELLS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StopSerialBells* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StopSerialBells*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPSERIALBELLS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
