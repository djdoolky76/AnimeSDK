#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Side_HaltCD; }

#define RPG_GAMECORE_ST_SIDE_HALTCD_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA83890)
#define RPG_GAMECORE_ST_SIDE_HALTCD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA838A0)
#define RPG_GAMECORE_ST_SIDE_HALTCD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA837D0)

namespace RPG::GameCore
{
	class ST_Side_HaltCD : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HALTCD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_HaltCD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_HaltCD*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HALTCD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_HaltCD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_HaltCD*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HALTCD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
