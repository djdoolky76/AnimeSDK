#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTakeInitialScore; }

#define RPG_GAMECORE_ROGUETAKEINITIALSCORE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA2EF00)
#define RPG_GAMECORE_ROGUETAKEINITIALSCORE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA2EF10)
#define RPG_GAMECORE_ROGUETAKEINITIALSCORE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA2EE40)

namespace RPG::GameCore
{
	class RogueTakeInitialScore : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETAKEINITIALSCORE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTakeInitialScore* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTakeInitialScore*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETAKEINITIALSCORE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTakeInitialScore* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTakeInitialScore*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETAKEINITIALSCORE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
